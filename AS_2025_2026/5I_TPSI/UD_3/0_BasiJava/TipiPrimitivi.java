import java.lang.*; // Importa la libreria standard di Java 

public class TipiPrimitivi {
    public static void main (String[] args) {
        int x = 5; // Dichiarazione e inizializzazione di una variabile intera
        double y = 3.14; // Dichiarazione e inizializzazione di una variabile a virgola mobile
        float z = 2.5f; // Dichiarazione e inizializzazione di una variabile a virgola mobile di tipo float (nota la 'f' alla fine)
        boolean check = true; // Dichiarazione e inizializzazione di una variabile booleana
        char lettera = 'A'; // Dichiarazione e inizializzazione di una variabile di tipo carattere

        // Caratteristiche dei tipi primitivi:
        // 1. Sono tipi di dati predefiniti in Java.
        // 2. Non sono oggetti, ma contengono direttamente i valori.
        // 3. Hanno dimensioni fisse e non possono essere nulli.
        // 4. Sono più efficienti in termini di memoria e prestazioni rispetto agli oggetti.

        // Stampa dei valori delle variabili
        // Utilizza l'operatore di concatenazione (+) per combinare stringhe e variabili
        // La concatenazione avviene da sinistra a destra, quindi le variabili vengono convertite in stringhe e concatenate con il testo

        System.out.println("Valore di x: " + x); // Stampa il valore di x
        System.out.println("Valore di y: " + y); // Stampa il valore i y
        System.out.println("Valore di z: " + z); // Stampa il valore di z
        System.out.println("Valore di check: " + check); // Stampa il valore di check
        System.out.println("Valore di lettera: " + lettera); // Stampa il valore di lettera
    }
}
