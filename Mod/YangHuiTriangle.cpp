#include <iostream>
using namespace std;
int main() 
{
    int n;
    scanf("%d", &n);

    int arr[n+1][n+1];
    for (int i = 0; i <= n; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            if (j == 0 || j == i) 
            {
                arr[i][j] = 1;
            } 
            else 
            {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }

    // 输出杨辉三角形
    for (int i = 0; i <= n; i++) {
        // 输出空格
        for (int j = 0; j < (n-i); j++) {
            printf("--");
        }
        // 输出数字
        for (int j = 0; j <= i; j++) {
            printf("***%d",arr[i][j]);
        }
        cout << endl;
    }

    return 0;
}