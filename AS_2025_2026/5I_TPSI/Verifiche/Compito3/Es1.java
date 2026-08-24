import java.lang.*; 
import java.util.Scanner;

public class Es1 {
    public static void main(String[] args) {
        int n;
        int i;
        int numero = 0; 
        Scanner sc = new Scanner(System.in);

        do {
            System.out.print("Inserisci un valore: ");
            n = sc.nextInt();
        } while (n < 5 || n > 10);  

        for (i = 0; i < n; i++) {
            System.out.print("Inserisci un numero intero: ");
            int val = sc.nextInt();
            if (i == 0) {
                numero = val;
            }
            if (val > numero) {
                numero = val;  
            }
        }
        System.out.println("Stampo il valore finale " + numero);
    }
}

