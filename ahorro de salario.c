#include <stdio.h> 

int main(void){

    float s;

    printf("\n introduce salario semanal\t");
    scanf("%f",&            s);


    printf("\n porcentaje %f \n",s*.15*4);
    printf("\n porcentaje %f\n" ,s*.20*4);
    printf("\n porcentaje %f\n" ,s*.50*4);
    printf("\n porcentaje %f\n", s*.15*4);

    return 0;



}