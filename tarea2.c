#include<stdio.h>

int main(void){

    int a;

    printf("ingresa la edad\n");
    scanf("%d",&a);


    if(a>0 && a<18){
        printf("es menor de edad");
    }
    else {
        printf("es mayor de edad");
    }


 return 0;

}
