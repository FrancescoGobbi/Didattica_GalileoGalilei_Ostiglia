import java.lang.*; // Importa la libreria standard di Java

class Esercizio03_Persona {
    // Attributi della classe Esercizio03_Persona
    private String nome; // Attributo per memorizzare il nome della persona
    private String cognome; // Attributo per memorizzare il cognome della persona
    private int eta; // Attributo per memorizzare l'età della persona

    // Costruttore della classe Esercizio03_Persona per inizializzare gli attributi
    public Esercizio03_Persona(String nome, String cognome, int eta) {
        this.nome = nome;
        this.cognome = cognome;
        this.eta = eta;
    }

    // Metodi della classe Esercizio03_Persona
    // Metodi per ottenere i valori degli attributi
    public String getNome() {
        return this.nome;
    }

    public String getCognome() {
        return this.cognome;
    }

    public int getEta() {
        return this.eta;
    }

    public String getDati() {
        String valori = "Nome" + this.getNome() + ", Cognome: "+ this.getCognome() + ", età:" + this.getEta();
        return valori;
    }

    // Metodi per modificare i valori degli attributi
    public void setNome(String nome) {
        this.nome = nome;
    }

    public void setCognome(String cognome) {
        this.cognome = cognome;
    }

    public void setEta(int eta) {
        this.eta = eta;
    }
}
