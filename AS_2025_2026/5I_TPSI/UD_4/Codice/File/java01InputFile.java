import java.io.BufferedReader; // Importa la classe BufferedReader per leggere il contenuto di un file in modo efficiente
import java.io.FileReader; // Importa la classe FileReader per leggere il contenuto di un file
import java.lang.*; // Importa la libreria standard di Java

public class java01InputFile {
    public static void main(String[] args) {
        // Per leggere e scrivere su file in Java, possiamo utilizzare le classi BufferedReader, FileReader, FileWriter e PrintWriter, che fanno parte del pacchetto java.io.
        // Queste classi ci permettono di leggere e scrivere dati su file in modo efficiente e semplice.  

        // Esempio di lettura da un file
        String nomeFile = "fileInputTestuale.txt"; // Specifica il nome del file da leggere
        try {
            FileReader f = new FileReader(nomeFile);
            BufferedReader in = new BufferedReader(f); // Crea un oggetto BufferedReader per leggere il contenuto del file specificato
            int n = 0; // Contatore per il numero delle righe
            String linea = in.readLine(); // Variabile per memorizzare ogni linea letta dal file
            while (linea != null) { // Legge il file riga per riga fino a quando non raggiunge la fine del file (null)
                System.out.println(linea); // Stampa la riga letta dal file sulla console
                n++; // Incremento il numero delle righe
                linea = in.readLine(); // Leggo una nuova del file .txt
            }
            System.out.println("Il numero delle righe è:"+n); // Stampo il numero delle righe trovate nel file
            in.close(); // Chiude il BufferedReader per liberare le risorse
            f.close(); // Chiudo il FileReader per liberare le risorse
        } 
        catch (Exception e) { // Gestisce eventuali eccezioni che possono verificarsi durante la lettura del file
            System.out.println("Errore nella lettura del file: " + e.getMessage()); // Stampa un messaggio di errore se si verifica un'eccezione
        }
    }
}
