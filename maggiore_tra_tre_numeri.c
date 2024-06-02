// Dati in input tre numeri, stampa a video il maggiore dei tre
#include <stdio.h>

int main (void) {
    int a, b, c;
    
    printf("Inserisci un numero");
    scanf("%d", &a);
    printf("Inserisci un numero");
    scanf("%d", &b);
    printf("Inserisci un numero");
    scanf("%d", &c);

    if((a>b) && (a>c))
        printf("Il numero maggiore è %d", a);
    else if((b>c) && (b>a))
        printf("Il numero maggiore è %d", b);
    else
        printf("Il numero maggiore è %d", c);

    // versione basic
    // if(a>b){
    //     if(a>c)
    //         printf("Il numero maggiore è %d", a);
    //     else
    //         printf("Il numero maggiore è %d", c);
    // }
    // else
    //     if (b>c)
    //     printf("Il numero maggiore è %d", b);
    //     else
    //     printf("Il numero maggiore è %d", c);
    
    return 0;
}
