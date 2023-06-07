#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Point;
double abs(double a)
{
    if (a<0)
    {
        return -a;
    }
    else
    {
        return a;
    }
}
double calculateTriangleArea(Point p1, Point p2, Point p3) {
    return 0.5 * abs((p1.x - p3.x) * (p2.y - p1.y) - (p1.x - p2.x) * (p3.y - p1.y));
}

double calculatePolygonArea(Point points[], int numPoints) {
    int i;
    double totalArea = 0.0;
    Point firstPoint = points[0];
    for (i = 1; i < numPoints - 1; i++) {
        double triangleArea = calculateTriangleArea(firstPoint, points[i], points[i + 1]);
        totalArea += triangleArea;
    }
    return totalArea;
}

int main() {
    int numPoints;
    int i;
    scanf("%d", &numPoints);

    Point points[15];
    for (i = 0; i < numPoints; i++) {
        scanf("%d %d", &points[i].x, &points[i].y);
    }

    double area = calculatePolygonArea(points, numPoints);
    printf("%.2f\n", area);

    return 0;
}