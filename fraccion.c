#include<stdio.h>

int main (void){

    int n;
    printf("ingresa un numero    ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        if(i%2==0)
        printf("-1/%d   ",i*2);
         else{
            printf("1/%d   ",i*2);
         }
    }







    return 0;
}