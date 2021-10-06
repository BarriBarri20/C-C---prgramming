#include <stdio.h> 
#include <stdlib.h>

int  main() {
    int n1=0;
    int n2=0;
    int i=0;

    
    do {
        printf("entrer n1 : ");
        scanf("%i",&n1);
        printf( "entrer n2 : \n");
        scanf("%i",&n2);

    } while ( n1 <0 || n2 < 0 ) ; 

    while ( n1!= n2 ){ 
        if (n1 > n2 ) {
            n1=n1-1;
            n2=n2+1;
            i++ ; 
        } else {
            n2 = n2 -1 ; 
            n1 = n1 + 1;
            i++ ;

        }
    }

    printf(" n1 = %i, n2 = %i , nbre de deplacement = %i ", n1,n2,i);
    return 0 ;
    }

    
