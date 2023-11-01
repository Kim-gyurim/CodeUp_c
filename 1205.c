#include <stdio.h>

int main(){
    double a,b,c1,d1,d2,e1,f1,f2,g1,g2;
    double result,result1,result2,result3, RESULT, RESULT1, final_result;
    scanf("%lf %lf", &a, &b);
    c1=a+b;
    d1=a-b;
    d2=b-a;
    e1=a*b;
    f1=a/b;
    f2=b/a;
    g1=pow(a,b);
    g2=pow(b,a);

    if(c1<d1){result=d1;}
    else{result=c1;}

    if(d2<e1){result1=e1;}
    else{result1=d2;}

    if(f1<f2){result2=f2;}
    else{result2=f1;}

    if(g1<g2){result3=g2;}
    else{result3=g1;}

    if(result<result1){RESULT=result1;}
    else{RESULT=result;}

    if(result2<result3){RESULT1=result3;}
    else{RESULT1=result2;}

    if(RESULT<RESULT1){final_result=RESULT1;}
    else{final_result=RESULT;}

    printf("%.6lf",final_result);
    return 0;
}
