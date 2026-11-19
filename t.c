
#include <stdio.h>

int main(void) {
    
    for (int j = 4; j >= 1; j--) {
       
        for (int i = 0; i < j; i++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}