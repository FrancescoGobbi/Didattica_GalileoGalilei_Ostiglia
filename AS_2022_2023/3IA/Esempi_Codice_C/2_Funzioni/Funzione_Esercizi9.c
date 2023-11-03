#include <stdio.h>
#include <math.h>

/*
1) Scrivere una funzione che riceva in ingresso 
le coordinate x, y di due punti del piano 
cartesiano(quindi in totale due x e due y) 
e restituisca la loro distanza. 
N.B. Per la radice quadrata, come per la potenza, 
si dovrà usare la libreria math.h. 
Per la radice quadrata si deve usare la funzione 
sqrt("Inserire valore/variabile su cui fare 
la radice quadrata"). Il return ed il parametro 
della funzione sqrt() sono di tipo double 
[funzione: double sqrt(double arg);]. 
Consiglio: usate il cast per passare da un tipo, 
per esempio int o float, ed avere un double.
Consiglio: rivedere la funzione pow(), i parametri 
ed il return della funzione.
*/
double distanzaDuePunti(float x1, float y1, float x2, float y2);

/*
2) Scrivere una funzione che riceva in ingresso 
un numero float corrispondente al prezzo iniziale 
di un articolo e un numero intero s rappresentante 
il valore percentuale di sconto (cioè, se ad esempio
s = 20, significa che all'articolo si applica 
lo sconto del 20%) e restituisca il prezzo scontato
dell'articolo.
*/
float prezzoScontato(float prezzoIniziale, int sconto);

int main() {
    float x1 = 2.5;
    float y1 = 2;
    float x2 = 5.4;
    float y2 = 2.5;
    float prezzo = 120.56;
    int sconto = 22;

    double distanza = distanzaDuePunti(x1, y1, x2, y2);
    printf("Distanza tra due punti: %lf\n", distanza);

    float nuovoPrezzo = prezzoScontato(prezzo, sconto);
    printf("Il prezzo scontato è: %f\n", nuovoPrezzo);
}

double distanzaDuePunti(float x1, float y1, float x2, float y2) {
    double distanza = sqrt((double)(pow((x1-x2),2)) + (double)(pow((y1-y2),2)));
    return distanza;
}

float prezzoScontato(float prezzoIniziale, int sconto) {
    return prezzoIniziale - (prezzoIniziale/100*sconto);
}