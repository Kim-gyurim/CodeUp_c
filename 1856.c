#include <stdio.h>

int m;

 int a(int n)
 {
     if(n==1)
        return 1;
     else if(n==2)
        return 1+a(1);
     else if(n==3)
        return 1+a(1)+a(2);
     else
        return a(n-3)+ a(n-2)+a(n-1);
 }

 int main()
 {
     scanf("%d",&m);
     printf("%d",a(m));

     return 0;
 }
