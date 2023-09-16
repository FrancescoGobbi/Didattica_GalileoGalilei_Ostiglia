/*
Creare delle funzioni in C che eseguano questi compiti:
1) Prendere in input all'utente un carattere maiuscolo (esempio lett = 'A')
2) Trasformare il carattere in maiuscolo in minuscolo (Esempio lett = 'A' --> lett = 'a')
3) Stampare tutte le lettere dell'elafabeto da lett alla 'z'. (Chiaramente in minuscolo)

Creare anche un main() che richiami queste 3 funzioni e verificare la correttezza dell'output.
*/

#include <stdio.h>

char inputMaiuscola();

char letteraMinuscola(char n);

void stampaAlfabeto(char n);

int main() {
    char lett = inputMaiuscola();
    lett = letteraMinuscola(lett);
    stampaAlfabeto(lett);
    printf("%c\n", lett);
}

// Controlloc he la lettera sai in maiuscolo
char inputMaiuscola(){
    char lett;
    do{
        printf("Inserisci una lettera: ");
        scanf("%c", &lett);
    }while(lett<65 || lett>90);
    return lett;

}

char letteraMinuscola(char n) {
    return n+32; // porto la lettera in minuscolo
}

// Stampo il resto dell'alfabeto
void stampaAlfabeto(char n) {
    for(n; n<='z'; n++) {
        printf("%2c", n);
    }
    printf("\n");
}