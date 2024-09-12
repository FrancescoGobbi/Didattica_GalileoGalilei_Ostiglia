/*
creare una funzione che prenda in input una stringa e conta 
quante doppie sono presenti nell stringa

funzione che prende in input una stringa e una sottostringa
la funzione deve modificare la stringa andando a ricopiare di volta in volta
tutte le lettere della sottostringa (es: stringa="galileo" sottostringa:"ciao" -> ciaocia)
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int const DIM = 32;

int contaDoppie(char []);

void initStr(char*, int);

void inputString(char*);

void copiaString(char _str[], char sub[]);

int main(){
    char str[DIM];
    char sub[DIM];
    
    initStr(str, DIM);
    inputString(str);
    initStr(sub, DIM);
    inputString(sub);
    
    int x = contaDoppie(str);
    printf("le doppie sono %d\n", x);
    
    copiaString(str, sub);
    printf("La nuova stringa str è: %s\n", str);
}

void initStr(char *str, int dim) {
    int i;
    for(i=0; i<dim; i++) {
        *(str) = '\0';
        str++; // Sposto il puntatore alla cella successiva
    }
}

void inputString(char *str) {
    printf("Inserisci una stringa: ");
    scanf("%s", str);
}

int contaDoppie(char str[]){
    
    int i = 0;
    int cnt = 0;
    
    while(str[i] != '\0'){
        if(str[i] == str[i+1] && str[i] != str[i-1] && str[i] != str[i+2]){
          cnt++;   
        }
        i++;
    }
    
    return(cnt);
}

void copiaString(char str[], char sub[]){
    int i = 0, j;

    while(str[i]!='\0') {
        for(j=0; sub[j]!='\0' && str[i]!='\0'; j++) {
            str[i] = sub[j];
            i++;
        }
    }
}
