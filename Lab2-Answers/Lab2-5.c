#include <stdio.h>
int main() {
    double a, b;
    printf("Enter a number: ");
    scanf("%lf", &a);
    int d = (int)a;
    b = (a - d) * 10;
    b = b - (int)b;
    b += (double)d;
    printf("The required output is %lf.\n", b);
    return 0;
}