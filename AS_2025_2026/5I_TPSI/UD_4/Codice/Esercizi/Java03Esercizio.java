import java.io.BufferedReader;
import java.io.FileReader; // Importa la classe BufferedReader per leggere il contenuto di un file in modo efficiente
import java.io.FileWriter; // Importa la classe FileReader per leggere il contenuto di un file
import java.io.IOException; // Importa la classe FileWriter per scrivere su un file
import java.io.PrintWriter; // Importa la classe IOException per gestire le eccezioni durante la lettura e scrittura dei file
import java.lang.*; // Importa la classe PrintWriter per scrivere su un file in modo più semplice e efficiente

/*
Creare una classe in Java che legga un file .txt, quindi file testuale presente nella cartella e
modifichi il file testuale per far si che ogni parola inizi con la lettera maiuscola.

ESEMPIO "ciao come va?" diventa "Ciao Come Va?".
Il file deve quindi essere modificato e mettere ogni singola parola contenuta nel file con la
prima lettera maiuscola.
*/

public class Java03Esercizio {
    public static void main(String[] args) {
        String nomeFile = "DivinaCommedia_Paradiso_Canto1.txt"; // Nome del file .txt da leggere e modificare
        String nomeFileModificato = "DivinaCommedia_Paradiso_Canto1_Modificato.txt"; // Nome del file modificato
        try {
            FileReader f = new FileReader(nomeFile); // Crea un oggetto FileReader per leggere il contenuto del file specificato
            BufferedReader in = new BufferedReader(f); // Crea un oggetto BufferedReader per leggere il contenuto del file specificato
            
            FileWriter fw = new FileWriter(nomeFileModificato); // Crea un oggetto FileWriter per scrivere il contenuto modificato in un nuovo file
            PrintWriter out = new PrintWriter(fw); // Crea un oggetto PrintWriter per scrivere il contenuto modificato nel nuovo file

            // Leggo la prima riga del file
            String riga = in.readLine(); // Variabile per memorizzare ogni linea letta dal file
            while (riga != null) { // Finché ci sono righe da leggere (riga non è null) continua a leggere il file
                // Modifico la riga per mettere ogni parola con la prima lettera maiuscola
                String[] parole = riga.split(" "); // Divide la riga in parole usando lo spazio come delimitatore
                int i;
                for (i = 0; i < parole.length; i++) {
                    // Creo una nuova stringa con la prima lettera maiuscola e il resto della parola invariato
                    parole[i] = parole[i].substring(0, 1).toUpperCase() + parole[i].substring(1);
                }
                // Scrivo la riga modificata nel file nuovo
                out.println(String.join(" ", parole));
                // Leggo la prossima riga
                riga = in.readLine();
            }

            // Riporto tutto il testo nel precedente file, quindi sovrascrivo il file originale con il nuovo file modificato
            // Per fare questo, leggo il file modificato e scrivo il suo contenuto nel file originale
            // Chiudo intanto i file di lettura e scrittura, per poi riaprirli per leggere il file modificato e scrivere nel file originale
            in.close();
            out.close();
        } 
        catch (IOException e) {
            e.printStackTrace();
        }
    }
}
