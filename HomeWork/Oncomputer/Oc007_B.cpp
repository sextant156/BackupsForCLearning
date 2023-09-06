#include <iostream>
using namespace std;

template <typename T>
class Matrix {
    private:
        int rows;
        int cols;
        T** matrix;
    public:
        Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) {
            matrix = new T*[rows];
            for (int i = 0; i < rows; i++) {
                matrix[i] = new T[cols];
            }
        }

        ~Matrix() {
            for (int i = 0; i < rows; i++) {
                delete[] matrix[i];
            }
            delete[] matrix;
        }

        void initMatrix() {
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    matrix[i][j] = T(0);
                }
            }
        }

        void inputMatrix() {
            cout << "Please input the matrix:" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    cin >> matrix[i][j];
                }
            }
        }

        void printMatrix() {
            cout << "Matrix:" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }
        }

        Matrix<T> operator* (Matrix<T>& matrix2) {
            Matrix<T> matrix3(rows, matrix2.cols);
            matrix3.initMatrix();
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < matrix2.cols; j++) {
                    for (int k = 0; k < cols; k++) {
                        matrix3.matrix[i][j] += matrix[i][k] * matrix2.matrix[k][j];
                    }
                }
            }
            return matrix3;
        }

        Matrix<T>& operator++ () {
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    matrix[i][j] += T(1);
                }
            }
            return *this;
        }

        Matrix<T>& operator-- () {
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    matrix[i][j] -= T(1);
                }
            }
            return *this;
        }

        Matrix<T>& operator= (Matrix<T>& matrix2) {
            for (int i = 0; i < cols; i++) {
                delete[] matrix[i];
            }
            delete[] matrix;
            rows = matrix2.rows;
            cols = matrix2.cols;
            matrix = new T*[rows];
            for (int i = 0; i < rows; i++) {
                matrix[i] = new T[cols];
            }
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    matrix[i][j] = matrix2.matrix[i][j];
                }
            }
            return *this;
        }
};

int main() {
    int rows1, cols1;
    cout << "Please input the rows and cols of the matrix:" << endl;
    cin >> rows1 >> cols1;

    Matrix<double> matrix1(rows1, cols1);
    matrix1.inputMatrix();

    int rows2, cols2;
    cout << "Please input the rows and cols of the next matrix:" << endl;
    cin >> rows2 >> cols2;

    Matrix<double> matrix2(rows2, cols2);
    matrix2.inputMatrix();

    (matrix1 * matrix2).printMatrix();

    (++matrix1).printMatrix();

    (--matrix1).printMatrix();

    Matrix<double> matrix3(1, 1);
    matrix3 = matrix1;
    matrix3.printMatrix();

    return 0;
}
