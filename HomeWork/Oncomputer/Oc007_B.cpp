#include<bits/stdc++.h>
using namespace std;
template <typename T>
class Matrix 
{
    private:
        int rows;
        int cols;
        T** matrix;
    public:
        // 构造函数
        Matrix(int numRows, int numCols) : rows(numRows), cols(numCols) 
        {
            // 动态建立行
            matrix = new T*[rows];
            // 动态建立列
            for (int i = 0; i < rows; i++) 
            {
                matrix[i] = new T[cols];
            }
        }
        // 析构函数
        ~Matrix() 
        {
            // 释放矩阵
            for (int i = 0; i < rows; i++) 
            {
                delete[] matrix[i];
            }
            delete[] matrix;
        }
        // 初始化矩阵
        void initMatrix() 
        {
            for (int i = 0; i < rows; i++) 
            {
                for (int j = 0; j < cols; j++) 
                {
                    matrix[i][j] = T(0);
                }
            }
        }
        // 输入矩阵
        void inputMatrix() 
        {
            cout << "Please input the matrix:" << endl;
            for (int i = 0; i < rows; i++) 
            {
                for (int j = 0; j < cols; j++) 
                {
                    cin >> matrix[i][j];
                }
            }
        }

        // 打印矩阵
        void printMatrix() {
            cout << "Matrix:" << endl;
            for (int i = 0; i < rows; i++) 
            {
                for (int j = 0; j < cols; j++) 
                {
                    cout << matrix[i][j] << " ";
                }
                cout << endl;
            }
        }
        Matrix operator * (Matrix& matrix2);
        Matrix& operator ++ ();
        Matrix& operator -- ();
        Matrix& operator = (Matrix& matrix2);
};
// 重载*运算符
Matrix Matrix::operator * (Matrix& matrix2)
{
    // 创建Matrix对象
    Matrix matrix3(rows, matrix2.cols);
    matrix3.initMatrix();
    // 矩阵相乘
    for (int i = 0; i < rows; i++) 
    {
        for (int j = 0; j < matrix2.cols; j++) 
        {
            for (int k = 0; k < cols; k++) 
            {
                matrix3.matrix[i][j] += matrix[i][k] * matrix2.matrix[k][j];
            }
        }
    }
    return matrix3;
}
// 前置++
Matrix& Matrix::operator ++()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j]+=T(1);
        }    
    }
    return *this; 
}
// 前置--
Matrix& Matrix::operator --()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j]-=T(1);
        }    
    }
    return *this; 
}
// 重载=运算符
Matrix& Matrix::operator = (Matrix& matrix2)
{
    for (int i = 0; i < cols; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;
    rows = matrix2.rows;
    cols = matrix2.cols;
    matrix = new T*[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix[i] = new T[cols];
    }
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = matrix2.matrix[i][j];
        }
    }
    return *this;
} 
int main() 
{
    int rows1, cols1;
    cout << "Please input the rows and cols of the matrix:" << endl;
    cin >> rows1 >> cols1;
    // 创建Matrix对象
    Matrix matrix1(rows1, cols1);
    // 输入矩阵
    matrix1.inputMatrix();
    int rows2, cols2;
    cout << "Please input the rows and cols of the next matrix:" << endl;
    cin >> rows2 >> cols2;
    // 创建Matrix对象
    Matrix matrix2(rows2, cols2);
    // 输入矩阵
    matrix2.inputMatrix();
    // 打印矩阵
    // matrix1.printMatrix();
    // matrix2.printMatrix();
    // 矩阵相乘
    (matrix1 * matrix2).printMatrix();
    // 前置++
    (++matrix1).printMatrix();
    // 前置--
    (--matrix1).printMatrix();
    // 赋值
    Matrix matrix3(1,1);
    matrix3 = matrix1;
    matrix3.printMatrix();
    // 程序结束时自动调用析构函数释放内存
    return 0;
}