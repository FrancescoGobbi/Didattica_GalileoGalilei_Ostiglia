import java.lang.*; 
import java.util.Scanner;

public class Es1_provaC {
    public static void main(String[] args) {
        int n;
        int i;
        int num = 0;
        int s = 0;

        Scanner sc = new Scanner(System.in);

        do {
            System.out.print("Inserisci un valore: ");
            n = sc.nextInt();
        } while (n < 5 || n > 10);

        for (i = 1; i <= n; i++) {
            System.out.print("Inserisci un numero intero: ");
            int val = sc.nextInt();
            num = 0;
            int j;
            for (j = 1; j <= val; j++) {
                if (val % j == 0) {
                    num++;
                }
            }
            if (num == 2) { 
                    s += val;
                }           
        }
        System.out.println("La somma è: " + s);
    }
}

