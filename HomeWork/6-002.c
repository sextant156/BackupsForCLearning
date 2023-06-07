#include <stdio.h>
#include <math.h>

double calculateTriangleArea(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    double res = sqrt(p * (p - a) * (p - b) * (p - c));
    return res;
}

double calculateLength(double a[][2], int m, int n) {
    double res = sqrt((a[m][0] - a[n][0]) * (a[m][0] - a[n][0]) + (a[m][1] - a[n][1]) * (a[m][1] - a[n][1]));
    return res;
}

int main() {
    int n,i;
    scanf("%d", &n);

    double a[n][2];
    double bian[n];
    for (i = 0; i < n; i++) {
        scanf("%lf %lf", &a[i][0], &a[i][1]);
    }

    for (i = 0; i < n; i++) {
        bian[i] = calculateLength(a, i, (i + 1) % n);
    }

    double ge[n - 3];
    for (i = 2; i < n - 1; i++) {
        ge[i - 2] = calculateLength(a, 0, i);
    }

    double sum = 0;
    sum += calculateTriangleArea(bian[0], bian[1], ge[0]);

    for (i = 0; i < n - 4; i++) {
        sum += calculateTriangleArea(bian[i + 2], ge[i], ge[i + 1]);
    }

    sum += calculateTriangleArea(bian[n - 1], bian[n - 2], ge[n - 4]);

    printf("%.2lf\n", sum);

    return 0;
}