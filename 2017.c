#include <stdio.h>

char d[30]= "0123456789ABCDEFGHIJKLMNOPQRSTUVWYXZ";

void f(int n, int k){
    if(n/k) f(n/k,k);
    printf("%c", d[n%k]);
}

int main(){
   int a,b;
   scanf("%d %d", &a, &b);
   f(a,b);
   return 0;
}
