import java.lang.*; // Importa la libreria standard di Java 
import java.util.Scanner; // Importa la classe Scanner per leggere input da tastiera

public class java06InputValori {
    public static void main(String[] args) {
        // Per leggere input da tastiera in Java, possiamo utilizzare la classe Scanner,
        // questa fa parte del pacchetto java.util.
        // La classe Scanner ci permette di leggere diversi tipi di input,
        //tra cui: stringhe, numeri interi, numeri a virgola mobile, ecc.

        // Creo un oggetto Scanner per leggere l'input da tastiera
        Scanner sc = new Scanner(System.in);

        // Chiedo all'utente di inserire un numero intero
        System.out.print("Inserisci un numero intero: "); // Stampa un messaggio per chiedere all'utente di inserire un numero intero
        int inputIntero = sc.nextInt(); // Legge un numero intero inserito dall'utente e lo memorizza nella variabile inputIntero

        // Chiedo all'utente di inserire un numero a virgola mobile (double o float volendo)
        System.out.print("Inserisci un numero a virgola mobile: "); // Stampa un messaggio per chiedere all'utente di inserire un numero a virgola mobile
        double inputVirgolaMobile = sc.nextDouble(); // Legge un numero a virgola mobile inserato dall'utente e lo memorizza nella variabile inputVirgolaMobile
    
        // Stampa i valori inseriti dall'utente
        System.out.println("Numero intero inserito: " + inputIntero); // Stampa il numero intero inserito dall'utente
        System.out.println("Numero a virgola mobile inserito: " + inputVirgolaMobile); // Stampa il numero a virgola mobile inserito dall'utente

        // Convertire una stringa, presa in input, in un numero intero
        System.out.print("Inserisci un numero intero come stringa: "); // Stampa un messaggio per chiedere all'utente di inserire un numero intero come stringa 
        String inputStringaIntero = sc.nextLine(); // Legge una stringa inserita dall'utente e la memorizza nella variabile inputStringaIntero
        
        // Converto la stringa in un numero intero utilizzando il metodo parseInt della classe Integer
        int numeroIntero = Integer.parseInt(inputStringaIntero); // Converte la stringa in un numero intero
        // Integer.parseInt è un metodo statico (ovvero un metodo invocato sulla classe stessa e non sull'oggetto) della classe Integer che prende una stringa come argomento e restituisce il valore intero corrispondente. 
        //Se la stringa non può essere convertita in un numero intero valido, viene generata un'eccezione NumberFormatException.

        // Convertire una stringa, presa in input, in un numero con virgola mobile
        System.out.print("Inserisci un numero a virgola mobile come stringa: "); // Stampa un messaggio per chiedere all'utente di inserire un numero a virgola mobile come stringa
        String inputStringaVirgolaMobile = sc.nextLine(); // Legge una stringa inserita dall'utente e la memorizza nella variabile inputStringaVirgolaMobile
        
        // Converto la stringa in un numero a virgola mobile utilizzando il metodo parseDouble della classe Double
        double numeroVirgolaMobile = Double.parseDouble(inputStringaVirgolaMobile); // Converte la stringa in un numero a virgola mobile
        // Double.parseDouble è un metodo statico (ovvero un metodo invocato sulla classe stessa e non sull'oggetto) della classe Double che prende una stringa come argomento e restituisce il valore a virgola mobile corrispondente. 
        //Se la stringa non può essere convertita in un numero a virgola mobile valido, viene generata un'eccezione NumberFormatException.
    }
}