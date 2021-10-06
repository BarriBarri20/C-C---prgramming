#include <stdio.h>
#include <stdlib.h>
int main( ){ 
    int i =0 ;
    int s = 0 ;
    int c=0 ; 
    printf("donner un nombre positif")
    scanf("%i",&i);
    while ( i < 0 ) {
        printf("si vous veulez quitter entrer un nbre negatif ");
        s=i+s;
        c++;
        scanf("%i",i );
        if (i == 0) {
            printf("%d",s/(c+1)) ;
        
        }
        return 0 ; 
    } 
    

}