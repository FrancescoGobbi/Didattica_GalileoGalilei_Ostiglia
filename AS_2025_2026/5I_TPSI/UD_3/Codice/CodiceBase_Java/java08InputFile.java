import java.io.BufferedReader; // Importa la classe BufferedReader per leggere il contenuto di un file in modo efficiente
import java.io.FileReader; // Importa la classe FileReader per leggere il contenuto di un file
import java.lang.*; // Importa la libreria standard di Java

public class java08InputFile {
    public static void main(String[] args) {
        // Per leggere e scrivere su file in Java, possiamo utilizzare le classi BufferedReader, FileReader, FileWriter e PrintWriter, che fanno parte del pacchetto java.io.
        // Queste classi ci permettono di leggere e scrivere dati su file in modo efficiente e semplice.  

        // Esempio di lettura da un file
        String nomeFile = "fileInputTestuale.txt"; // Specifica il nome del file da leggere
        try {
            BufferedReader br = new BufferedReader(new FileReader(nomeFile)); // Crea un oggetto BufferedReader per leggere il contenuto del file specificato
            String linea; // Variabile per memorizzare ogni linea letta dal file
            while ((linea = br.readLine()) != null) { // Legge il file riga per riga fino a quando non raggiunge la fine del file (null)
                System.out.println(linea); // Stampa la riga letta dal file sulla console
            }
            br.close(); // Chiude il BufferedReader per liberare le risorse
        } 
        catch (Exception e) { // Gestisce eventuali eccezioni che possono verificarsi durante la lettura del file
            System.out.println("Errore nella lettura del file: " + e.getMessage()); // Stampa un messaggio di errore se si verifica un'eccezione
        }
    }
}
