import java.io.BufferedReader;
import java.io.FileReader;
import java.lang.*;

public class java03EsempioFile {

    public static void main(String[] args) {

        String nomeFile = "divinaCommedia.txt"; // Nome del file da leggere
        int cnt = 0; // Variabile per contare il numero di match trovati
        char carattereDaTrovare = 'a'; // Carattere da trovare e contare
        int i;
        try {
            FileReader f = new FileReader(nomeFile); // Crea un oggetto FileReader per leggere il contenuto del file specificato
            BufferedReader in = new BufferedReader(f); // Crea un oggetto BufferedReader per leggere il contenuto del file specificato

            // Leggo la prima riga del file
            String riga = in.readLine(); // Variabile per memorizzare ogni linea letta dal file
            while (riga != null) { // Finché ci sono righe da leggere (riga non è null) continua a leggere il file
                // Conta i punti '.' nella riga
                for (i = 0; i < riga.length(); i++) { // Scorre ogni carattere della riga presente
                    if (riga.charAt(i) == carattereDaTrovare) { // Se il carattere è quello da trovare, incrementa il conteggio
                        cnt++; // Incrementa il conteggio dei punti
                    }
                }
                riga = in.readLine(); // Leggo la prossima riga
            }
            in.close();
            f.close();

            System.out.println("Numero totale di " + carattereDaTrovare + " nel file: " + cnt);

        } 
        catch (Exception e) {
            System.out.println("Errore durante la lettura del file: " + e.getMessage());
        }
    }
}
