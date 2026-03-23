import java.lang.*; // Importa la libreria standard di Java
import java.util.Scanner;

public class Esercizio02 {
    public static void main(String[] args) {

        // Creare un codice in Java che prenda in input 2 valori interi N ed M
        // il programma deve verificare se N ed M sono numeri perfetti
        // Stampare i valori perfetti o la non presenza degli stessi
        // TO DO...

        // Numero Perfetto: la somma dei divisori propri del numero,
        // quindi escluso il numero stesso, è uguale al numero iniziale
        // Esempio: N = 6 --> perfetto, 1 + 2 + 3 = 6
        // Esempio: N = 8 --> NON perfetto, 1 + 2 + 4 = 7 diverso da 8
    
        // Dichiaro le variabili inziziali e necessarie
        int sommaDivN = 0; // Variabile per la somma dei divisori di N
        int sommaDivM = 0; // Variabile per la somma dei divisori di M
        int i; // Variabile di iterazione

        // Prendo in input due numeri interi N ed M
        Scanner sc = new Scanner(System.in);
        System.out.print("Inserisci il valore di N: ");
        int N = sc.nextInt();
        System.out.print("Inserisci il valore di M: ");
        int M = sc.nextInt();

        
        // Verifico se N è un numero perfetto
        for (i = 1; i < N; i++) {
            if (N % i == 0){
                sommaDivN = sommaDivN + i; // sommaDivN+=i;
            }
        }

        if (sommaDivN == N) {
            System.out.println("N è un numero perfetto!");
        }
        else{
            System.out.println("N NON è perfetto!");
        }
        
        // Verifico se M è un numero perfetto
        for (i = 1; i < M; i++) {
            if (M % i == 0){
                sommaDivM = sommaDivM + i; // sommaDivN+=i;
            }
        }

        if (sommaDivM == M) {
            System.out.println("M è un numero perfetto!");
        }
        else{
            System.out.println("M NON è perfetto!");
        }
    }
}
