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

        // Tipologia degli oggetti creati
        System.out.println("Tipo dell'oggetto inputStringa: " + inputStringa.getClass().getName()); // Stampa il tipo dell'oggetto inputStringa, che è String
        System.out.println("Tipo dell'oggetto sc: " + sc.getClass().getName()); // Stampa il tipo dell'oggetto sc, che è Scanner
        
        // Posso usare instanceof per verificare se un oggetto è di un certo tipo
        if (inputStringa instanceof String) {
            System.out.println("inputStringa è una stringa"); // Stampa un messaggio se inputStringa è un'istanza della classe String
        }
        if (sc instanceof Scanner) {
            System.out.println("sc è uno scanner"); // Stampa un messaggio se sc è un'istanza della classe Scanner
        }

        // N.B. Riferimento di memoria degli oggetti
        // In Java, quando creiamo un oggetto, stiamo effettivamente creando un riferimento a un'area di memoria dove l'oggetto è memorizzato.
        // Ad esempio, quando creiamo un oggetto Scanner, stiamo creando un riferimento a un'area di memoria dove l'oggetto Scanner è memorizzato. 
        // Quando utilizziamo il riferimento per accedere ai metodi dell'oggetto, stiamo effettivamente accedendo all'oggetto memorizzato in quella posizione di memoria.   
    }
}