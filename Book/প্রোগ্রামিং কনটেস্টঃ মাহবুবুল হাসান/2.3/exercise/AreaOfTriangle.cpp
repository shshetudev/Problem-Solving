#include<stdio.h>
#include<math.h>
// Find the area of a triangle
int main() {
    double a,b,c,s,area;
    printf("\nEnter a,b,c:");
    scanf("%lf %lf %lf", &a, &b, &c);
    s = (a + b +c)/2;
    area = sqrt(s * (s-a) * (s-b) * (s-c));
    printf("Area: %lf", area);
    return 0;
}