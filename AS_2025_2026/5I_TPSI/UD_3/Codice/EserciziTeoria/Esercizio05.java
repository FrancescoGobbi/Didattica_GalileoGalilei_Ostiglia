import java.lang.*; // Importa la libreria standard di Java
import java.util.Scanner;

public class Esercizio05 {
    public static void main(String[] args) {

        // Creare un codice in Java che prenda in input un numero 
        //intero positivo (verificare che l'input sia corretto) 
        //e stampi tutti i numeri primi minori o uguali a quel numero

        int val;
        int i;
        Scanner sc = new Scanner(System.in);

        // Verifico che l'input sia corretto, ovvero che sia un numero intero positivo
        do {
            System.out.print("Inserisci un numero intero positivo: ");
            val = sc.nextInt();
        } while (val <= 0);

        System.out.println("I numeri primi minori o uguali a " + val + " sono:");
        for (i = 2; i <= val; i++) {
            int counter = 0; // Contatore per il numero di divisori di i (azzero all'inizio di ogni iterazione)
            int j; // Variabile per contare i divisori di i
            for (j = 1; j <= i; j++) { // Conto il numero di divisori di i
                if (i % j == 0) { // Se j è un divisore di i
                    counter++; // Incremento il contatore dei divisori
                }
            }
            if (counter == 2) { // Un numero primo ha esattamente due divisori: 1 e se stesso
                System.out.print(i + " "); // Stampo il numero primo trovato
            }
        }
    }
}
