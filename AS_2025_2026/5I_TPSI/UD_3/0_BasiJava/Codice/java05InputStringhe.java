import java.lang.*; // Importa la libreria standard di Java 
import java.util.Scanner; // Importa la classe Scanner per leggere input da tastiera

public class java05InputStringhe {
    public static void main(String[] args) {
        // Per leggere input da tastiera in Java, possiamo utilizzare la classe Scanner,
        // questa fa parte del pacchetto java.util.
        // La classe Scanner ci permette di leggere diversi tipi di input,
        //tra cui: stringhe, numeri interi, numeri a virgola mobile, ecc.
        
        // Creo un oggetto Scanner per leggere l'input da tastiera
        Scanner sc = new Scanner(System.in);

        // Chiedo all'utente di inserire una stringa
        System.out.print("Inserisci una stringa: "); // Stampa un messaggio per chiedere all'utente di inserire una stringa
        String inputStringa = sc.nextLine(); // Legge una riga di testo inserita dall'utente e la memorizza nella variabile inputStringa
        // La riga termina quando l'utente preme il tasto Invio, e tutto ciò che è stato digitato prima di quel momento viene considerato come input.

        // Stampa la stringa inserita dall'utente
        System.out.println("Stringa inserita in input: " + inputStringa); // Stampa la stringa inserita dall'utente

        // Chiudo lo scanner per liberare le risorse
        sc.close(); // Chiudo lo scanner e liberare le risorse associate ad esso
    }
}