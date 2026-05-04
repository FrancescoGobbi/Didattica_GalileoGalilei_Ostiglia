import java.lang.*; // Importa la libreria standard di Java

public class Esercizio06 {
    public static void main(String[] args) {

        // Creare una classe in Java che rappresenti un oggetto "Libro" 
        // con i seguenti attributi: titolo, autore, anno di pubblicazione e numero di pagine.
        // La classe deve avere un costruttore che inizializza tutti gli attributi 
        // e deve avere un metodo che stampi tutte le informazioni del libro in modo leggibile.
        // Creare due oggetti "Libro" e stampare le loro informazioni utilizzando il metodo creato.

        Esercizio06_Libro libro1 = new Esercizio06_Libro("Il Signore degli Anelli", "J.R.R. Tolkein", 1954, 1216);
        Esercizio06_Libro libro2 = new Esercizio06_Libro("Harry Potter e la pietra filosofale", "J.K. Rowling", 1997, 309);

        System.out.println("Informazioni sul primo libro:");
        libro1.stampaInformazioni();

        System.out.println("\nInformazioni sul secondo libro:");
        libro2.stampaInformazioni();
    }
}
