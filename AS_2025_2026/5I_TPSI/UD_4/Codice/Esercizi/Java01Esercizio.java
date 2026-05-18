import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.lang.*;

/*
Creare una classe in Java che legga un file .txt, quindi file testuale presente nella cartella e 
stampi a video il suo contenuto, quindi il testo contenuto nel file.

ESEMPIO: "Ciao come va?"
In questo caso, il testo contenuto nel file è "Ciao come va?" e quindi
il programma deve stampare a video "Ciao come va?".
*/

public class Java01Esercizio {
    public static void main(String[] args) {
        // Nome del file .txt da leggere 
        String nomeFile = "DivinaCommedia_Paradiso_Canto1.txt";

        // Apro la sezione critica
        try {
            FileReader f = new FileReader(nomeFile); // Crea un oggetto FileReader per leggere il contenuto del file specificato
            BufferedReader in = new BufferedReader(f); // Crea un oggetto BufferedReader per leggere il contenuto del file specificato
            
            // Prima leggo la prima riga del file
            String riga = in.readLine();
            int i = 1;
            // Loop per leggere le altre righe del file
            while(riga != null){
                System.out.println("Riga "+ i + " : "+ riga);
                i++;
                //System.out.println(riga);
                // Devo passare alla riga successiva
                riga = in.readLine();
            }

            // Chiudo il file
            in.close();
            f.close();
        } 
        catch (IOException e) {
            System.out.println("Errore durante la lettura o scrittura del file");
        }
    }
}
