#include<stdio.h>


int main(){

    int N,C;
    scanf("%d %d",&N,&C);
    int Buf[99] = {};
    for(int i = 0; i < N; i++){
        scanf("%d",&Buf[i]);

    }
    int temp;
    for(int i = 0 ; i < N ; i ++) {
        for(int j = 0 ; j < N -i -1 ; j ++) {
            if(Buf[j]>Buf[j+1]) {
                temp = Buf[j];
                Buf[j] = Buf[j+1];
                Buf[j+1] = temp;
            }
        }
    }
    int k = 0;
    for(int j = 0; j < N; j++){
        printf("%d ",Buf[j]);
        k++;
        if(C == k){
            printf("\n");
            k=0;
        }

    }

    return 0;


}
