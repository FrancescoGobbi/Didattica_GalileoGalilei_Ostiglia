// Importiamo la libreria standard per input e output
#include <stdio.h>

// Definiamo la funzione principale del programma
int main() {
    
    // Dichiarazione di una variabile di tipo intero (4 byte)
    int numero_intero;
    
    // Dichiarazione di una variabile di tipo float (numero decimale) (4 byte)
    float numero_decimale;
    
    // Dichiarazione di una variabile di tipo char (carattere singolo) (1 byte)
    char carattere;
    
    // Dichiarazione di una variabile di tipo double (numero decimale con più precisione) (8 byte)
    double numero_grande;

    // Richiesta di input per il numero intero
    // scanf() è una funzione standard di libreria <stdio.h> che richiede 
    // due parametri, una prima della virgola e uno dopo
    // %d specifica il formato per un intero, &numero_intero è la variabile in cui viene memorizzato
    printf("Inserisci un numero intero: ");
    scanf("%d", &numero_intero);
    fflush(stdin);

    // Richiesta di input per il numero decimale (float)
    // scanf() è una funzione standard di libreria <stdio.h> che richiede 
    // due parametri, una prima della virgola e uno dopo
    // %f specifica il formato per un float, &numero_decimale è la variabile in cui viene memorizzato
    printf("Inserisci un numero decimale (float): ");
    scanf("%f", &numero_decimale);
    fflush(stdin);

    // Richiesta di input per il carattere
    // scanf() è una funzione standard di libreria <stdio.h> che richiede 
    // due parametri, una prima della virgola e uno dopo
    // %c specifica il formato per un carattere singolo, &carattere è la variabile in cui viene memorizzato
    // Lo spazio prima di %c serve per ignorare il carattere di invio rimasto nel buffer
    printf("Inserisci un carattere: ");
    scanf("%c", &carattere);
    fflush(stdin);

    // Richiesta di input per il numero double
    // scanf() è una funzione standard di libreria <stdio.h> che richiede 
    // due parametri, una prima della virgola e uno dopo
    // %lf specifica il formato per un double, &numero_grande è la variabile in cui viene memorizzato
    printf("Inserisci un numero decimale grande (double): ");
    scanf("%lf", &numero_grande);
    fflush(stdin);

    // Stampa del valore di ogni variabile
    // %d specifica il formato per un intero, numero_intero è il valore da stampare
    // printf() è una funzione standard di libreria <stdio.h> che utilizza, in questo caso,
    // due parametri, uno prima della virgola e uno dopo.
    // Quello prima della virgola è il testo da stampare, quello dopo è il valore  
    printf("\nIl numero intero inserito è: %d\n", numero_intero);

    // %f specifica il formato per un float, numero_decimale è il valore da stampare
    // %.2f limita la stampa a due cifre decimali
    // printf() è una funzione standard di libreria <stdio.h> che utilizza, in questo caso,
    // due parametri, uno prima della virgola e uno dopo.
    // Quello prima della virgola è il testo da stampare, quello dopo è il valore
    printf("Il numero decimale (float) inserito è: %f\n", numero_decimale);

    // %c specifica il formato per un carattere, carattere è il valore da stampare
    // printf() è una funzione standard di libreria <stdio.h> che utilizza, in questo caso,
    // due parametri, uno prima della virgola e uno dopo.
    // Quello prima della virgola è il testo da stampare, quello dopo è il valore
    printf("Il carattere inserito è: %c\n", carattere);

    // printf() è una funzione standard di libreria <stdio.h> che utilizza, in questo caso,
    // due parametri, uno prima della virgola e uno dopo.
    // Quello prima della virgola è il testo da stampare, quello dopo è il valore
    // %lf specifica il formato per un double, numero_grande è il valore da stampare
    // %.2lf limita la stampa a due cifre decimali
    printf("Il numero decimale grande (double) inserito è: %.lf\n", numero_grande);
    
}// Fine del programma