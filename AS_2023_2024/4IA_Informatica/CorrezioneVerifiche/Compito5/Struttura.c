#include <stdio.h>
#include <stdlib.h>

// Definizione della struttura 'Dipendente'
typedef struct {
    char nome[50];
    int eta;
    char ruolo[50];
    float stipendio_mensile;
    int ore_lavorate_mese;
    float bonus_annuale;
} Dipendente;

float funzione1(Dipendente *);

void funzione2(Dipendente *);

float funzione3(char []);

float funzione4(Dipendente *);

float funzione5(char []);

int main() {
    // Creazione di una variabile di tipo 'Dipendente'
    Dipendente *dipendente = malloc(sizeof(Dipendente));

    // Assegnazione di valori ai membri della struttura
    strcpy(dipendente->nome, "Mario Rossi");
    dipendente->eta = 35;
    dipendente->stipendio_mensile = 2500.0;
    dipendente->ore_lavorate_mese = 160;
    dipendente->bonus_annuale = 500.0;

    // Calcolo del salario annuale
    float salario_annuale = funzione1(dipendente);

    // Stampa dei valori dei membri della struttura e del salario annuale
    printf("Nome: %s\n", dipendente->nome);
    printf("Eta: %d anni\n", dipendente->eta);
    printf("Stipendio mensile: %.2f Euro\n", dipendente->stipendio_mensile);
    printf("Ore lavorate al mese: %d\n", dipendente->ore_lavorate_mese);
    printf("Bonus annuale: %.2f Euro\n", dipendente->bonus_annuale);
    printf("Salario annuale: %.2f Euro\n", salario_annuale);
}

float funzione1(Dipendente *dip) {
    return dip->stipendio_mensile * 12 + dip->bonus_annuale;
}

void funzione2(Dipendente *dip) {
    if(dip->eta > 40) {
        if(strcmp(dip->ruolo, "Capo")==0) {
            dip->stipendio_mensile = 3500.56;
        } 
        else if(strcmp(dip->ruolo, "operaio")==0) {
            dip->stipendio_mensile = 1800.45;
        }
        else {
            dip->stipendio_mensile = 1600.34;
        }
    }
    else {
        dip->stipendio_mensile = 1200.46;
    }
}


float funzione3(char str[]) {
    FILE * file = fopen(str, "rb");
    Dipendente *dip = malloc(sizeof(Dipendente));
    float val = 0;
    int val2 = 0;

    while(fread(dip, sizeof(Dipendente), 1, file)) {
        val += dip->stipendio_mensile * 12 + dip->bonus_annuale;
        val2++;
    }

    return val/val2;
}

float funzione4(Dipendente *dip) {
    return dip->stipendio_mensile / dip->ore_lavorate_mese;
}

float funzione5(char str[]) {
    Dipendente * dip = malloc(sizeof(Dipendente));
    FILE *file = fopen(str, "rb");
    int sommaEta = 0;
    int numPersone = 0;

    while(fread(dip, sizeof(Dipendente), 1, file)) {
        if(strcmp(dip->ruolo, "manager")==0) {
            sommaEta += dip->eta;
            numPersone++;
        }
    }

    fclose(file);
    free(dip);
    return (float)sommaEta/numPersone;
}