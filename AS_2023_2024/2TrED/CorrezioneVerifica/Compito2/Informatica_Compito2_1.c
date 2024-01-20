// SECONDO COMPITO DI INFORMATICA - 2TRED
// Data: 19 Gennaio 2024

// ALUNNO
// NOME: 
// CONGOME: 

#include <stdio.h>

int main() {

    /* ESERCIZIO 1
    Creare il codice in C di un programma che prenda in input due valori interi (A e B).
    Il programma deve eseguire il prodotto tra i due (A*B) e salvarla in una nuova variabile chiamata PRODOTTO.
    Il programma deve verificare se il numero ottenuto è maggiore di 50.
    Se SI, il programma stamparà il numero. Altrimenti, il programma deve stampare "No!".

    ESEMPIO:
    Se A = 10 e B = 3
    Il programma dovrà eserguire A*B = 10*3 = 30, quindi PRODOTTO = 30.
    Quindi il programma dovrà stampare "No!" in quanto il valore del PRODOTTO non è maggiroe di 50.
    */

    // TO DO : Codice dell'esercizio 1 ...

    // Creazione delle variabili
    int A, B, PRODOTTO;

    // Input dei dati
    printf("Inserisci due valori interi per la A e B: ");
    scanf("%d %d", &A, &B);

    // Calcoli da eseguire
    PRODOTTO = A * B;

    // Controllo sui valori
    if(PRODOTTO > 50) {
        printf("%d\n", PRODOTTO);
    }
    else {
        printf("No!\n");
    }



   /* ESERCIZIO 2
    Creare il codice in C di un programma che prenda in input due valori interi (X e Y).
    Il programma deve eseguire la somma tra il doppio di X ed il doppio di Y e salvarla in una nuova varaibile chiamata DOPPIASOMMA.
    Il programma deve quindi verificare se DOPPIASOMMA è maggiore del prodotto tra X e Y (X*Y).
    Se SI, il programma dovrà aggiungere 10 alla variabile DOPPIASOMMA e stampare poi il risultato.
    Altrimenti, il programma deve togliere 4 alla X e togliere 3 alla Y, stampando poi il valore di DOPPIASOMMA

    ESMEPIO:
    Se X = 5 e Y = 6
    Il programma dovrà quindi eserguire i calcoli necessari ed avere quindi DOPPIASOMMA = (2*5) + (2*6) = 22.
    Il programma dovrà quindi rogliere 4 dalla variabile X, che diventerà X = 1, e dovrà togliere 3 alla variabile Y, che diventerà Y = 3.
    Stampando infine il valore di DOPPIASOMMA.
    */

    // TO DO : Codice dell'esercizio 2 ...

    // Creazione delle variabili
    int X, Y, DOPPIASOMMA;

    // Input dei dati
    printf("Inserisci due valori interi per la X e Y: ");
    scanf("%d %d", &X, &Y);

    // Calcoli da eseguire
    DOPPIASOMMA = (2 * X) + (2 * Y);

    // Controllo sui valori
    if(DOPPIASOMMA > (X * Y)) {
        DOPPIASOMMA += 10; // DOPPIASOMMA = DOPPIASOMMA + 10;
        printf("Il valore della doppia-somma è: %d\n", DOPPIASOMMA);
    }
    else {
        X -= 4; // X = X - 4;
        Y -= 3; // Y = Y - 3;
        DOPPIASOMMA = (2 * X) + (2 * Y);
        printf("Il nuovo valore di X è: %d\n", X);
        printf("Il nuovo valore di Y è: %d\n", Y);
        printf("Il nuovo valore di DOPPIASOMMA è: %d\n", DOPPIASOMMA);
    }



    /* ESERCIZIO 3
    Creare il codice in C di un programma che prenda in input tre valori interi (C, D e E).
    Il programma deve controllare se i 3 valori sono compresi tra il valore 10 ed il valore 30.
    Se lo sono tutti è 3, il programma deve stampare "Ci sono 3 valori corretti!".
    Altrimenti, il programma dovrà stampare "Non ci sono 3 valori corretti!".

    ESEMPIO:
    Se C = 50, D = 14 e E = 20.
    Il programma dovrà stamapre "Non ci sono 3 valori corretti!", in quanto il valore C è fuori dal range definito.
     */

    // TO DO : Codice dell'esercizio 3 ...

    // Creazione delle variabili
    int C, D, E;

    // Input dei dati
    printf("Inserisci tre valori interi per la C, D ed E: ");
    scanf("%d %d %d", &C, &D, &E);

    // Controllo sui valori
    if((C>=10 && C<=30) && (D>=10 && D<=30) && (E>=10 && E<=30)) {
        printf("Ci sono 3 valori corretti!\n");
    }
    else {
        printf("Non ci sono 3 valori corretti!\n");
    }

}