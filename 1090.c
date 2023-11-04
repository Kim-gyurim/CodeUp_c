#include <stdio.h>

int main()
{
    int a, r, n;
    long long result;
    scanf("%d %d %d", &a, &r, &n);
    result = a * r;
    for (int i = 1; i < n - 1; i++)
    {
        result = result * r;
    }
    printf("%lld", result);
    return 0;
}
