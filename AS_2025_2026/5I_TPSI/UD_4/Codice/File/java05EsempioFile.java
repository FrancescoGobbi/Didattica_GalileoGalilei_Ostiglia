import java.io.BufferedReader;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.io.PrintWriter;
import java.lang.*;

/*
Codice per la lettura di un file di testo .txt e modificare il testo del file per far si che ogni parola inizi
con la lettera maiuscola.
Esempio "ciao come va?" diventa "Ciao Come Va?".
Il file deve quindi essere modificato e mettere ogni singola parola contenuta nel file con la prima lettera maiuscola.
*/

public class java05EsempioFile {
    public static void main(String[] args) {
        String nomeFile = "divinaCommedia.txt"; // Nome del file da leggere
        String nomeFileModificato = "divinaCommediaModificata.txt"; // Nome del file modificato
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

                /*
                N.B. substring() è un metodo della classe String che restituisce una sottostringa di una stringa,
                prendendo come argomenti gli indici di inizio e fine della sottostringa (fine esclusa).

                N.B. toUpperCase() è un metodo della classe String che restituisce una nuova stringa con tutti i caratteri
                convertiti in maiuscolo. 

                N.B. String.join() è un metodo della classe String che unisce gli 
                elementi di un array di stringhe in una singola stringa,
                utilizzando un delimitatore specificato come argomento.
                */
            }

            // Riporto tutto il testo nel precedente file, quindi sovrascrivo il file originale con il nuovo file modificato
            // Per fare questo, leggo il file modificato e scrivo il suo contenuto nel file originale
            // Chiudo intanto i file di lettura e scrittura, per poi riaprirli per leggere il file modificato e scrivere nel file originale
            in.close();
            out.close();
            fw.close();
            f.close();

            FileReader f2 = new FileReader(nomeFileModificato); // Crea un oggetto FileReader per leggere il contenuto del file modificato
            BufferedReader in2 = new BufferedReader(f2); // Crea un oggetto BufferedReader per leggere il contenuto del file modificato
            FileWriter fw2 = new FileWriter(nomeFile); // Crea un oggetto FileWriter per scrivere il contenuto modificato nel file originale
            PrintWriter out2 = new PrintWriter(fw2); // Crea un oggetto PrintWriter per scrivere il contenuto modificato nel file originale
            riga = in2.readLine(); // Leggo la prima riga del file modificato
            while (riga != null) { // Finché ci sono righe da leggere (riga non è null) continua a leggere il file modificato
                out2.println(riga); // Scrivo la riga modificata nel file originale
                riga = in2.readLine(); // Leggo la prossima riga del file modificato
            }
            // Chiudo
            in2.close();
            out2.close();
            fw2.close();
            f2.close();

        } catch (IOException e) {
            System.out.println("Errore durante la lettura o scrittura del file");
        }
    }
}
