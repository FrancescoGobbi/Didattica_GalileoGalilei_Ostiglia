import java.io.BufferedReader;
import java.io.FileReader;
import java.lang.*;
import java.util.Scanner;

/*
Codice in Java per leggere un file di testo e contare il numero di occerrenze di un parola
presa in input dall'utente, sempre sul file da leggere è "divinaCommedia.txt".
Il codice considera solo le parole, quindi toglie gli eventuali spazi tra parole e
la punteggiatura che può esserci a fine di ogni parola, come ad esempio la virgola, il punto, il punto e virgola, ecc.
*/

public class java04EsempioFile {
    public static void main(String[] args) {
        String nomeFile = "divinaCommedia.txt"; // Nome del file da leggere
        int cnt = 0; // Variabile per contare il numero di match trovati
        // Input da tastiera per la parola da cercare
        System.out.print("Inserisci la parola da cercare: ");
        // Creo un oggetto Scanner per leggere l'input da tastiera
        Scanner sc = new java.util.Scanner(System.in);
        // Prendo la parola da cercare in input dall'utente
        String parolaDaTrovare = sc.nextLine();
        int i; // Variabile per scorrere i caratteri della riga

        try {
            FileReader f = new FileReader(nomeFile); // Crea un oggetto FileReader per leggere il contenuto del file specificato
            BufferedReader in = new BufferedReader(f); // Crea un oggetto BufferedReader per leggere il contenuto del file specificato

            // Leggo la prima riga del file
            String riga = in.readLine(); // Variabile per memorizzare ogni linea letta dal file
            while (riga != null) { // Finché ci sono righe da leggere (riga non è null) continua a leggere il file
                // Devo crare un Array di String
                // Per contenere tutte le parole della riga, per poi scorrerle e confrontarle con la parola da trovare
                String[] parole = riga.split("[\\s,.;:!?]+"); // Divide la riga in parole usando lo spazio come delimitatore
                int j; // Variabile per scorrere le parole della riga, quindi per scorrere il vettore di parole
                for (j = 0; j < parole.length; j++) { // Scorro gli indici del vettore di String, ovvero delle parole della riga
                    if (parole[j].equals(parolaDaTrovare)) { // Se la parola è quella da trovare, incrementa il conteggio
                        cnt++; // Incrementa il conteggio delle occorrenze della parola
                    }

                    /*
                    N.B. regex è una stringa che rappresenta un'espressione regolare, ovvero un modello di ricerca per le stringhe.
                    In questo caso, "[\\s,.;:!?]+" è un'espressione regolare che indica di dividere la riga in parole usando come delimitatori
                    qualsiasi sequenza di spazi bianchi (\\s) o (usando la ,) di caratteri di punteggiatura 
                    (virgola, punto, punto e virgola, due punti, punto esclamativo, punto interrogativo). 
                    Il simbolo + indica che possono esserci uno o più di questi delimitatori consecutivi tra le parole.
                    IN REALTA' la vera regex da utilizzare è [\s,.;:!?]+ ,
                    però in Java, per rappresentare il carattere di escape \, bisogna scrivere \\ , quindi la regex diventa [\\s,.;:!?]+ .

                    N.B. split() è un metodo della classe String che divide una stringa in un array di sottostringhe,
                    utilizzando un delimitatore specificato come argomento. 
                    In questo caso, " " (spazio) è il delimitatore, quindi la riga viene divisa in parole separate da spazi.

                    N.B. equals() è un metodo della classe String che 
                    confronta il contenuto di due stringhe, restituendo true se sono uguali e false altrimenti.
                    Quindi oggettoStringa.equals(oggettoStringa2) confronta il contenuto delle due stringhe, 
                    non i loro riferimenti in memoria.
                    */
                }
                riga = in.readLine(); // Leggo la prossima riga
            }
            // Chiudo i flussi di lettura del file
            in.close();
            f.close();

            System.out.println("Numero totale di '" + parolaDaTrovare + "' nel file: " + cnt);

        } catch (Exception e) {
            System.out.println("Errore durante la lettura del file: " + e.getMessage());
        }
        
    }
}
