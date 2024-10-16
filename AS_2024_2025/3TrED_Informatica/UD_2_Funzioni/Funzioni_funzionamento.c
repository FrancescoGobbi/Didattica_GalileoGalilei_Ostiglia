#include <stdio.h>

// Dichiarazione delle funzioni
/**
 * @brief Funzione che non prende nulla in input e non restituisce nulla (Stamperà e basta)
 * 
 */
void funzioneTest0();

/**
 * @brief Funzione di test che prende un input (che decidiamo di salvare dentro x) e lo restituisce, senza fare modifiche
 * 
 * @param x
 * @return int 
 */
int funzioneTest1(int x);

int main() {
    int x = 5;
    printf("Sono nel main()\n\n");
    
    // Chiamata alla funzioneTest0()
    funzioneTest0();

    printf("Sono tornato nel main()\n\n");

    // Chiamata alla funzioneTest1()
    x = funzioneTest1(x); // Slavo dentro x il valore di ritorno della funzione funzioneTest1() passando x ad essa

    printf("Sono tornato nuovamente nel main()\n\n");
}

// Definizione delle funzioni
void funzioneTest0() {
    printf("Sono dentro la funzioneTest0()\n\n");
}

int funzioneTest1(int x) {
    printf("Sono dentro la funzioneTest1()\n\n");
    return x; // Retituisco semplicemente il valore
}