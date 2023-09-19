#include<stdio.h>

int d[10001];
int main()
{
    int n,i,j,tmp,flag;
    scanf("%d", &n);
    for(i=0; i<n;i++) scanf("%d", &d[i]);
    for(i=0;i<n;i++){
        flag=0;
        for(j=0; j<n-1; j++)
        if(d[j]>d[j+1]){
            tmp=d[j];
            d[j]=s[j+1];
            d[j+1]=tmp;
            flag++;
        }
        if(flag==0) break;
    }
    printf("%d",i);
    return 0 ;
}
