#include<stdio.h>

int main (void){
 int op;
    
    


    printf("[1].-hamburgesa sencilla \n");
    printf("\n[2].-hamburguesa mediana \n");
    printf("\n[3].-hamburgesa familiar \n");
    printf("\n[4].- pizza jumbo \n");
    printf("\n[5].-alitas de pollo \n");
    printf("\n [6].-leandrro en calzones\n");

    printf(" \ncual te llevas     ");
    scanf("%d",&op);

    switch (op){
        case 1:
            printf("tu hamburguesa vale $100 \n");
            break;

        case 2:
            printf("tu  hamburguesa vale $150 \n");
            break;

        case 3:
            printf("tu hamburguesa vale $200\n");
            break;

        case 4:
            printf("tu pizza vale $250\n");
            break;

        case 5:
            printf("\ntus alitas valen           $130");
            break;
            
        case 6:
        printf("\nleandrro en calzones $1");
            break;


        default :

            printf("gracias ppr comprar con el santi ");
            




    }

   

 


















    return 0;
}