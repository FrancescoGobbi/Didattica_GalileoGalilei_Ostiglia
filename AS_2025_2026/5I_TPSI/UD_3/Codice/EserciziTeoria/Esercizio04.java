import java.lang.*; // Importa la libreria standard di Java

public class Esercizio04 {
    public static void main(String[] args) {

        // Creare una classe associata a questo esercizio per la 
        // creazione di oggetti Esercizio04_Triangolo
        // che permetta la creazione di un oggetto Triangolo, 
        // con gli attributi basilari ed i metodi basilari e necessari
        // oltre a tutti i metodi necessari per calcolare l'area 
        // e il perimetro di un triangolo

        // Creare due oggetti Esercizio04_Triangolo e provare i vari metodi creati

        Esercizio04_Triangolo triangolo1 = new Esercizio04_Triangolo(3, 4, 5);
        Esercizio04_Triangolo triangolo2 = new Esercizio04_Triangolo(5, 12, 13);

        System.out.println("Triangolo 1:");
        System.out.println("Perimetro: " + triangolo1.calcolaPerimetro());
        System.out.println("Area: " + triangolo1.calcolaArea());

        System.out.println("Triangolo 2:");
        System.out.println("Perimetro: " + triangolo2.calcolaPerimetro());
        System.out.println("Area: " + triangolo2.calcolaArea());

    }
}
