import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.lang.*;

/*
Creare una classe in Java che legga un file .txt, quindi file testuale presente nella cartella e
ricerchi nel file tutte le parole con la prima lettera della parola in maiuscolo
e stampi a video il numero di parole che hanno la prima lettera in maiuscolo.

ESEMPIO: "Ciao come va?"
In questo caso, la parola "Ciao" ha la prima lettera in maiuscolo, 
quindi il numero di parole con la prima lettera in maiuscolo è 1.
*/

public class Java02Esercizio {
    public static void main(String[] args) {
        String nomeFile = "DivinaCommedia_Paradiso_Canto1.txt"; // Nome del file .txt da leggere
        int contatore = 0; // Contatore per le parole con la prima lettera in maiuscolo

        // Apro la sezione critica
        try {
            FileReader f = new FileReader(nomeFile); // Crea un oggetto FileReader per leggere il contenuto del file specificato
            BufferedReader in = new BufferedReader(f); // Crea un oggetto BufferedReader per leggere il contenuto del file specificato  

            // Prima leggo la prima riga del file
            String riga = in.readLine();
            // Loop per leggere le altre righe del file
            while(riga != null){
                // Divido la riga in parole usando lo spazio come delimitatore
                String[] parole = riga.split(" ");
                int i;
                for(i = 0; i < parole.length; i++){
                    // Controllo se la prima stringa ha una lunghezza maggsiore di 0 e 
                    // se la prima lettera è maiuscola
                    // Character.isUpperCase() è un metodo della classe Character che 
                    // restituisce true se il carattere specificato è una lettera maiuscola, 
                    //  altrimenti restituisce false.
                    if(parole[i].length() > 0 && Character.isUpperCase(parole[i].charAt(0))){
                        contatore++; // Incremento il contatore se la prima lettera è maiuscola
                    }
                }
                // Devo passare alla riga successiva
                riga = in.readLine();
            }
            // Chiudo il file
            in.close();
            f.close();
        } 
        catch (IOException e) {
            System.out.println("Errore nella lettura del file");
        }
        // Stampo il numero di parole con la prima lettera in maiuscolo
        System.out.println("Il numero di parole con la prima lettera in maiuscolo è: " + contatore);
    }
}
