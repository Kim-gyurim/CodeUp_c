#include "stdio.h"
int a(int n)
{
    if(n==0)
        return 0;
    else
        printf("*");
        return a(n-1);
}


int o(int s, int l)
{
    if(s>l)
        return 0;
    else
        a(s);
        printf("\n");
        return o(s+1, l);
}

int main()
{
    int i, s=1;
    scanf("%d", &i);
    o(s, i);
    return 0;
}
