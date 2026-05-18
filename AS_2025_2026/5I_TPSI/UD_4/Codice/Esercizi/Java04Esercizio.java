import java.lang.*;
import java.util.Scanner;

/*
Crea una classe in Java che legga una string in input e la modifichi facendo in modo
che ogni parola al suo interno abbia la prima lettera in maiuscolo e il resto della parola in minuscolo.

ESEMPIO: "ciao come va?" diventa "Ciao Come Va?".
*/

public class Java04Esercizio {
    public static void main(String[] args) {
        // Creo l'oggetto scanner
        Scanner sc = new Scanner(System.in);

        System.out.println("Inserisci una stringa: ");
        String linea = sc.nextLine(); // Prendo in input la stringa

        // La linea ha spazi
        // Tobbiamo tagliare la linea in base agli spazi
        String[] parole = linea.split(" ");
        int i;  
        for(i = 0; i < parole.length ; i++){
            parole[i] = (parole[i].substring(0,1)).toUpperCase() + parole[i].substring(1, parole[i].length());
        }

        // Ricostruisco la Stringa finale
        String finale = String.join(" ", parole);
        System.out.println("La frase ora è: " + finale);
    }
}
