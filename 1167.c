#include <stdio.h>

int main()
{
   int a,b,c,m;

    scanf("%d %d %d", &a, &b, &c);

    if(a>=b){   //a=1, b=3, c=3�̶� �Ҷ�
        m=b;    //1>=2�ƴ�
        b=a;
        a=m;
    }
    if(b >= c){
        m=c;    //3>=2
        c=b;    //m=2, c=3, 3=m
        b=m;
    }
    if(a>=b){
        m=b;    //1>=2�ƴ�
        b=a;
        a=m;
    }

    printf("%d",b); //���� �������� ���� �� ��� ���ʷ� �ȴ�. 1,2,3


   return 0;
}
