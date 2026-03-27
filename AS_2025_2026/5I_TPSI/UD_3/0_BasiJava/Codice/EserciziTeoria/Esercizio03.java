import java.lang.*; // Importa la libreria standard di Java

public class Esercizio03 {
    public static void main(String[] args) {

        // Creare una classe associata a questo esercizio per la 
        // creazione di oggetti Esercizio03_Persona
        // che permetta la creazione di un oggetto persona, 
        // con gli attributi basilari ed i metodi basilari e necessari
        // Creare gli oggetti all'interno di questa classe con 
        // il main() e provare i vari metodi creati

        // Creo un oggetto Esercizio03_Persona
        Esercizio03_Persona persona1 = new Esercizio03_Persona("Mario", "Rossi", 30);

        // Stampo i valori degli attributi dell'oggetto persona1
        System.out.println("Nome: " + persona1.getNome());
        System.out.println("Cognome: " + persona1.getCognome());
        System.out.println("Età: " + persona1.getEta());

        // Stampo in una sola riga i valori degli attributi dell'oggetto persona1
        System.out.println("La persona è: " + persona1.getNome() + " " + persona1.getCognome() + " e ha " + persona1.getEta() + " anni.");

        // Modifico i valori degli attributi dell'oggetto persona1
        persona1.setNome("Luigi");
        persona1.setCognome("Verdi");
        persona1.setEta(25);

        // Stampo i nuovi valori degli attributi dell'oggetto persona1
        System.out.println("La persona è: " + persona1.getNome() + " " + persona1.getCognome() + " e ha " + persona1.getEta() + " anni.");
    
        System.out.println(persona1.getDati());
    }
}
