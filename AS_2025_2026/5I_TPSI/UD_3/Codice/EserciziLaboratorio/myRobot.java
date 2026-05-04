import java.lang.*; // Importa la libreria standard di Java 
import java.util.Scanner; // Importa la classe Scanner per leggere input da tastiera

// Creo una classe myRobot che rappresenta un robot che può leggere un intero da tastiera e restituirlo
class myRobot{
    private int x; // Variabile di istanza per memorizzare l'intero letto da tastiera
    private Scanner sc; // Variabile di istanza per memorizzare l'oggetto Scanner che ci permette di leggere input da tastiera

    public myRobot(){ // Costruttore della classe myRobot
        x = 0; // Inizializzo il parametro x a 0
        sc = new Scanner(System.in); // Inizializzo l'oggetto Scanner per leggere input da tastiera e associarlo alla variabile di istanza sc
    }

    // Metodo per leggere un intero da tastiera e restituirlo
    public void leggiIntero(){ 
        System.out.print("Inserisci un intero: "); // Stampa un messaggio per chiedere all'utente di inserire un intero
        x = sc.nextInt(); // Legge un intero inserito dall'utente e lo memorizza nella variabile x dell'oggetto myRobot
    }

    // Metodo per ottenere il valore dell'oggetto 
    public int getIntero(){ 
        return x; // Restituisco il valore del parametro x dell'oggetto
    }
}