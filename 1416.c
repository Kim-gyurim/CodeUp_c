#include <stdio.h>

void f(int k)
{
    if(k/2) f(k/2);
    printf("%d",k%2);
}


int main()
{
    int n;
    scanf("%d",&n);
    f(n);
    return 0;
}
