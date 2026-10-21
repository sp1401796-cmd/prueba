#include<stdio.h>

int main (void){

      int a;


      printf("el platillo por persona vale $95\n");
      printf("el platillo para 200 personas y menor a 300 personas vale $85\n");
      printf("el platillo para mas de 300 personas vale $75\n");
      
     

      printf("ingrese el numero de personas \n  ");
      scanf("%d",& a);
      

     

      if(a>=1 && a<=199){
        printf("\n su total es %d\n"           ,a*95);
        
      } 
            else{
                if(a>=200 && a<=300){
                printf("\nsu total es %d\n"        ,a*85);
                }
                
      } 
                
      if(a>300)
        printf("\nsu total es %d\n"         ,a*75);

                    printf("\nGRACIAS POR SU COMPRA VUELVA PRONTO");
                    
      

      








    return 0;

}