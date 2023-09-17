#include <stdio.h>

int main()
{
   int a,b,c,m;

    scanf("%d %d %d", &a, &b, &c);

    if(a>=b){   //a=1, b=3, c=3이라 할때
        m=b;    //1>=2아님
        b=a;
        a=m;
    }
    if(b >= c){
        m=c;    //3>=2
        c=b;    //m=2, c=3, 3=m
        b=m;
    }
    if(a>=b){
        m=b;    //1>=2아님
        b=a;
        a=m;
    }

    printf("%d",b); //따라서 마지막엔 작은 수 대로 차례로 된다. 1,2,3


   return 0;
}
