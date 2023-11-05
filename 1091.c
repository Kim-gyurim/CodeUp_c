#include <stdio.h>

int main()
{
    double a, m, d, n;
    double result;
    scanf("%lf %lf %lf %lf", &a, &m, &d, &n);
    result = a;
    for (int i = 1; i < n; i++)
    {
        result = result * m + d;
    }
    printf("%.0f", result);
    return 0;
}
