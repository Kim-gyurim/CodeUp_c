#include <stdio.h>

int a(int b)
{
    if(b%10==0)
        a(b/10);
    else
        return b;
}

int main()
{
    int n;
    scanf("%d",&n);
    if(n==0)
        printf("%d",n);
    else{
        n=a(n)
    }
}
