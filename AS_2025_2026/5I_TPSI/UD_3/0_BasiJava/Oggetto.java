import java.lang.*; // Importa la libreria standard di Java

public class Oggetto {
    public static void main(String[] args) {
        /*
        In Java, un oggetto è un'istanza di una classe. 
        Una classe è un modello o una struttura che definisce le proprietà (attributi) e i comportamenti (metodi) di un oggetto.
        Un oggetto rappresenta un'entità concreta che può essere manipolata nel programma.
        */

        // Esempio di creazione di un oggetto
        String stringa = "Ciao, come stai?"; // La variabile saluto è un oggetto di tipo String, che rappresenta una sequenza di caratteri

        // Caratteristiche degli oggetti in Java:
        // 1. Gli oggetti sono istanze di classi, che definiscono le loro proprietà e comportamenti.
        // 2. Gli oggetti possono avere stati (valori delle proprietà) e comportamenti (metodi).
        // 3. Gli oggetti possono interagire tra loro attraverso i metodi e le proprietà.

        // Stampa del valore dell'oggetto saluto
        System.out.println(stringa); // Stampa il valore dell'oggetto saluto

        // Utilizzo di un metodo dell'oggetto String
        int lunghezzaStringa = stringa.length(); // Il metodo length() restituisce la lunghezza della stringa stringa
        System.out.println("La lunghezza della stringa è: " + lunghezzaStringa); // Stampa la lunghezza della stringa stringa
        // Il '+' nella stampa viene utilizzato per concatenare la stringa "La lunghezza della stringa è: " con il il valore dela variabile primitiva lunghezzaStringa, che è un intero rappresentante la lunghezza della stringa.
    }
}
