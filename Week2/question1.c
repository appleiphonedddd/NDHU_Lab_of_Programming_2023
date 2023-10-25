#include <stdio.h>
#include <math.h>

int main() {
    double num;

    scanf("%lf", &num);

    double roundOff = round(num * 100) / 100;
    double roundDown = floor(num * 100) / 100;

    printf("%.2lf\n", roundOff);
    printf("%.2lf\n", roundDown);

    return 0;
}