import java.lang.*; // Importa la libreria standard di Java 

public class esercizio3 {
    public static void main(String[] args){
        // Creo un oggetto di tipo myRobot e lo associo alla variabile mr2
        myRobot mr2 = new myRobot();

        // Stampo il valore del parametro x dell'oggetto mr2 della classe myRobot, che è inizializzato a 0
        System.out.println("Valore di mr2: " + mr2.getIntero());
       
        // Prendo l'intero in input e lo associo al parametro x dell'oggetto mr2 della classe myRoboot
        mr2.leggiIntero();

        // Stampo il valore del parametro x dell'oggetto mr2 della classe myRobot, che è stato modificato con il valore letto da tastiera
        System.out.println("Il valore di mr2 è: " + mr2.getIntero() );
    }  
}
