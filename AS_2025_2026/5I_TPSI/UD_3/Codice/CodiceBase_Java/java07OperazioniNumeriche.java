import java.lang.*; // Importa la libreria standard di Java
import java.util.Scanner; // Importa la classe Scanner per leggere input da tastiera 

public class java07OperazioniNumeriche {
    public static void main(String[] args) {
        
        // Creo un oggetto Scanner per leggere l'input da tastiera
        Scanner sc = new Scanner(System.in);

        // Chiedo all'utene due numeri interi
        // Chiedo all'utente di inserire un numero intero
        System.out.print("Inserisci un numero intero: "); // Stampa un messaggio per chiedere all'utente di inserire un numero intero
        int inputIntero1 = sc.nextInt(); // Legge un numero intero inserito dall'utente e lo memorizza nella variabile inputIntero

        // Chiedo all'utente di inserire un numero intero
        System.out.print("Inserisci un numero intero: "); // Stampa un messaggio per chiedere all'utente di inserire un numero intero
        int inputIntero2 = sc.nextInt(); // Legge un numero intero inserito dall'utente e lo memorizza nella variabile inputIntero

        // Eseguo le operazioni tra le variabili insiete in input
        int somma = inputIntero1 + inputIntero2;
        int differenza = inputIntero1 - inputIntero2;
        int prodotto = inputIntero1 * inputIntero2;
        int divisione = inputIntero1 / inputIntero2;
        int modulo = inputIntero1 % inputIntero2;

        // Stampo il risultato delle operazioni eseguite
        System.out.println("Il risultato della somma è: " + somma);
        System.out.println("Il risultato della differenza è: " + differenza);
        System.out.println("Il risultato del prodotto è: " + prodotto);
        System.out.println("Il risultato della divisione è: " + divisione);
        System.out.println("Il risultato del modulo è: " + modulo);
    }
}