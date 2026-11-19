#include<stdio.h>

int main (void){

    int a,b,t=0;
    printf("introduce el primer numero numero   ");
    scanf("%d",&a);
      printf("introduce el segundo numero    ");
    scanf("%d",&b);


    for(int i=a;i<=b;){
         
          printf("%d\n",i);
          i+=2;
          t++;
    }

        printf(" el total de numeros de la serie que tienes es %d\n",t);



     


        
    
    return 0;
}