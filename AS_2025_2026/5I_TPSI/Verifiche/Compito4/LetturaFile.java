import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class LetturaFile {
    public static void main(String[] args) {
        String f = "dati.txt";
        int a = 0;
        int b = 0;
        int c = 0;
        try {
            FileReader x = new FileReader(f);
            BufferedReader y = new BufferedReader(x);
            String s = y.readLine();
            while (s != null) {
                a++;
                c += s.length();
                String[] v = s.split("\\s+");
                b += v.length;
                System.out.println("Riga letta: " + s);
                s = y.readLine();
            }
            y.close();
            x.close();
            System.out.println("Valore di a: " + a);
            System.out.println("Valore di b: " + b);
            System.out.println("Valore di c: " + c);
        } catch (IOException e) {
            System.out.println("Errore durante la lettura del file.");
        }
    }
}
