package EserciziSvolti;
import java.lang.*; // Importa la libreria standard di Java
import java.util.Scanner;


public class Esercizio01 {
    public static void main(String[] args) {

        // Creare un codice in Java che prende in input due numeri
        // e verifica che la somma tra i due numeri è un 
        // numero pari o dispari
        // TO DO...

        // Creo l'oggetto Scanner
        Scanner sc = new Scanner(System.in);

        // Prendo in input i due valori interi
        System.out.print("Prendo il primo numero intero");
        int val1 = sc .nextInt();
        System.out.print("Prendo il secondo numero intero");
        int val2 = sc .nextInt();

        // Creo la somma
        int somma = val1 + val2;

        // Verifico la somma se pari o dispari
        if (somma % 2 == 0) {
            System.out.print("La somma è pari");
        } 
        else{
            System.out.print("La somma è dispari");
        }
    }
}
