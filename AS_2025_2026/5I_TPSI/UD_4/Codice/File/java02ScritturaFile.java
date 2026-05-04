import java.io.FileWriter; // Importa la libreria standard di Java
import java.io.PrintWriter;
import java.lang.*;

public class java02ScritturaFile {
        public static void main(String[] args) {
        try {
            FileWriter f = new FileWriter("prova.txt");
            PrintWriter out = new PrintWriter(f);
            int i = 0;
            while(i<10){
                out.println("stringa "+i);
                i++;
            }

            out.println("Ciao, come va?");
            out.print("Io tutto bene! Tu?");
            out.close();
            f.close();
        }
        catch (Exception e) {
            System.out.print("Errore nell'apertura del file!");
        }
    }
}
