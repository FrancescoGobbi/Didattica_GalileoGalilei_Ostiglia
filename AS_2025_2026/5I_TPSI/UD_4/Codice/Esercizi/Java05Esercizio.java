import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.lang.*;
import java.util.Scanner;

/*
Creare una classe in Java che legga un file di testo, .txt .
Il file .txt potrebbe non essere presente nella cartella.
Il programma prendere in input un intero n compreso tra 10 e 100. (Non è sezione critica)
Successivamente il programma dovrà chiedere in input all'utente n-parole/n-frasi e 
inserirle nel file di testo.
*/

public class Java05Esercizio {
    public static void main(String[] args) {
        // Nome del file
        String nomeFile = "Java05esercizio.txt";
        Scanner sc = new Scanner(System.in);
        int n;
        // Prendo in input la variabile n
        do{
            System.out.println("Inserisci un numero tra 10 e 100");
            n = sc.nextInt(); // Prendo un intero in input
        }while(n < 10 || n > 100);
    
        // Pulisco il buffer dello scanner
        // Altrimenti quando prendo in input la prossima linea non prenderò in input niente
        sc.nextLine();
        // Come in C, posso fare una scanf() a vuoto oppure utilizzare fflush(stdin) per pulire 
        // il buffer dello scanner

        // Entriamo nella sezione critica
        try{
            FileWriter fw = new FileWriter(nomeFile); // Crea un oggetto FileWriter per scrivere il contenuto modificato in un nuovo file
            PrintWriter out = new PrintWriter(fw); // Crea un oggetto PrintWriter per scrivere il contenuto modificato nel nuovo file

            int i;
            for(i = 0; i<n; i++){
                System.out.println("Inserisci una stringa: ");
                String linea = sc.nextLine();

                // Inseriamo nel file la linea appena presa in input
                out.println(linea);
            }
            out.close();
            fw.close();

            // Leggo il file appena creato
        }
        catch (IOException e) {
            System.out.println("Errore durante la lettura o scrittura del file");
        }
    }
}
