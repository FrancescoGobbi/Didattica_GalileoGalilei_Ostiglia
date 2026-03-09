import java.lang.*; // Importa la libreria standard di Java

public class java03Oggetto {
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

        // Stampa del valore dell'oggetto denominato stringa
        System.out.println(stringa); // Stampa il valore dell'oggetto stringa

        // Utilizzo di un metodo dell'oggetto String
        int lunghezzaStringa = stringa.length(); // Il metodo length() restituisce la lunghezza della stringa stringa
        System.out.println("La lunghezza della stringa è: " + lunghezzaStringa); // Stampa la lunghezza della stringa stringa
        // Il '+' nella stampa viene utilizzato per concatenare la stringa "La lunghezza della stringa è: " con il il valore dela variabile primitiva lunghezzaStringa, che è un intero rappresentante la lunghezza della stringa.

        // Utilizzo di un altro oggetto String
        String prova = "Oggi è il 9 Marzo 2026";

        // Stampa del valore dell'oggetto denominato prova
        System.out.println(prova);

        // Utilizzo di un metodo dell'oggetto String per convertire la stringa in maiuscolo
        // Non viene modificato l'oggetto prova, ma viene creato un nuovo oggetto String con il risultato della conversione in maiuscolo
        // Questo oggetto, però, non viene mai salvato e quindi non più accessibile!
        System.out.println(prova.toUpperCase());

        // Salvo il risultato della conversione in maiuscolo in un oggetto di tipo String
        String prova2 = prova.toUpperCase();
    }
}
