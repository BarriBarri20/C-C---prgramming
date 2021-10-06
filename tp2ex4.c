#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 10
int resultat(int n,int nb_tent){
    if (nb_tent==1) {
        printf("you're lucky player ! ");

    } else if (( nb_tent>2 )&& (n/4>nb_tent))
    {
        printf("congratz !");
    }else if ( (n/4>nb_tent) && (n/2<nb_tent) ){
        printf("excellent ");
    }else if (( nb_tent>n/2 )&&( nb_tent< (3*n)/4 ) ){ 
        printf ( " good ! "); 
    }else if (nb_tent>(3*n)/4){
        printf ( "not so bad ! "); 

    }else {
        printf("loooser ! ");
    }
    
return 0 ; 
}
int randomize(){
    srand(time(NULL));
    int secret = rand() % MAX ;
    printf("%d",secret);
    return secret%10000 ;
     
}

int main (){
    int nb_tent;
    int n; 
    printf("donner le nbre de tent");
    scanf("%d",&nb_tent);
    int secret = randomize();
    for ( int i = 0 ; i<nb_tent ; i++){
        scanf("%d",&n);
        if (n < secret ){
            printf("plus petit ");
        }else if (n> secret) {
            printf("plus grand");
        }else {
            resultat(n,nb_tent);
            return 0 ;
        }

    }
    printf("Tu as perdu :p ");
    return 0 ;

}
