#include <stdio.h>

int f(int n, int r)
{
   if(r==1) return n;
   else if(n==r) return 1;
   else if(r>=n) return 0;
   return f(n-1,r-1)+f(n-1,r);
}
int main()
{
   int a,b;
   scanf("%d %d", &a, &b);
   printf("%d", f(a,b));
}

