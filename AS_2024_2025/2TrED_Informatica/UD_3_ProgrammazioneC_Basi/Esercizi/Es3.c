/* Es3
Creare un programma in C che crei 4 variabili intere.
Chiedere all'utente di inserire in inpunt i 4 valori interi, uno all'interno di ogni variabile.
Il programma deve poi sommare tutti i valori e stampare il risultato finale.

N.B. Qui bisognerà utilizzare la funzione scanf(), della libreria <stdio.h>
Questa serve per chiedere in input all'utente un valore e di consegnuenza questo verrà salvato 
nella variabile a noi designata.

Esempio pratico:
scanf("%d", &x); // Prende un valore interno (perché si utilizza lo specificatore %d) in input
e questo viene salvato all'interno della variabile x, che sarà di tipo intero.

Altro esempio pratico: 
scanf("%f", &a); Prende un valore float (perché si utilizza lo specificatore %f) in input
e questo viene salvato all'interno della variabile a, che sarà di tipo float.

N.B. Ci deve essere coerenza ed omogenità tra degli specificatori di formato utilizzati ed
il tipo della variabile dove salvare il valore.

N.B. l'& serve per prendere in considerazione il riferimento di memoria, ovvero l'indirizzo di memoria,
della variabile dove salvare il valore. Ovvero, necessitiamo di conoscere il "luogo" di casa di tale
variabile per salvare il dato.
Faccio un esempio: quando il postino manda una lettera a voi, non conosce per forza chi siete e come vi chiamate,
ma conosce il luogo e quindi la via e numero di casa dove abitate.
Ecco, la lettera da consegnare è il valore in input che si vuole prendere, mentre l'indirizzo di memoria è
l'indirizzo di casa nostra, in cui il compilatore (la macchina) non interessa come noi abbiamo chiamato
la variabile, per esempio x o a o altro, a lui interessa dove questa variabile si trova per inserire/assegnare
il valore al suo interno.
*/

#include <stdio.h>
// TO DO...