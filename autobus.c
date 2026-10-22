#include<stdio.h>

int main(void){

    int a,np;
    float km,precio,ct,cp;


    printf("\tviajes\n");

    printf("\ncosto km de fletes $ 2");
    printf("\ncosto km de AU $ 2.5");
    printf("\ncosto ADO $ 3.0");

    printf("\nescoje tu tipo de autobus\n" );



    printf("\n[1].-FLETES\n" );
    printf("\n[2].- AU \n");
    printf("\n[3].- ADO \n ");
    scanf("%i",&a);


    printf("si las son menos de 20 personas se respeta el precio como si fueran 20 personas");
    



    printf("\ningrese el numero de personas\n");
    scanf("%i",&np);

    printf("\ningrese distacia recorrida\n");
    scanf("%f",&km);

    switch (a){
    case 1:
        precio=2.0;
        break;

    case 2:
        precio=2.50;
        break;
        
    case 3:
        precio=3.0;
        break;

        default:
        printf("esa obcion no existe");
        break;


    }
    ct=km*a*np;
    cp=ct/np;

   

    printf("      tu boleto           ");

    printf("\ncosto total $%f",ct);
    printf("\ncosto por persona $%f",cp);
    printf("\ncosto por kilometro$%f",precio);
    printf("\nnumero de personas  %d",np );



   return 0;
}


