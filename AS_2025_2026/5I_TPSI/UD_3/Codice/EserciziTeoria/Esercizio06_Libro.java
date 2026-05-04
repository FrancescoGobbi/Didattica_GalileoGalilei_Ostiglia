public class Esercizio06_Libro {
    // Attributi della classe Esercizio06_Libro
    private String titolo; // Attributo per memorizzare il titolo del libro
    private String autore; // Attributo per memorizzare l'autore del libro
    private int annoPubblicazione; // Attributo per memorizzare l'anno di pubblicazione del libro
    private int numeroPagine; // Attributo per memorizzare il numero di pagine del libro

    // Costruttore della classe Esercizio06_Libro per inizializzare gli attributi
    public Esercizio06_Libro(String titolo, String autore, int annoPubblicazione, int numeroPagine) {
        this.titolo = titolo;
        this.autore = autore;
        this.annoPubblicazione = annoPubblicazione;
        this.numeroPagine = numeroPagine;
    }

    // Metodi della classe Esercizio06_Libro per ottenere i valori degli attributi
    public String getTitolo() {
        return this.titolo;
    }  

    public String getAutore() {
        return this.autore;
    }

    public int getAnnoPubblicazione() {
        return this.annoPubblicazione;
    }

    public int getNumeroPagine() {
        return this.numeroPagine;
    }

    // Metodi della classe Esercizio06_Libro per modificare i valori degli attributi
    public void setTitolo(String titolo) {
        this.titolo = titolo;
    }   

    public void setAutore(String autore) {
        this.autore = autore;
    }

    public void setAnnoPubblicazione(int annoPubblicazione) {
        this.annoPubblicazione = annoPubblicazione;
    }

    public void setNumeroPagine(int numeroPagine) {
        this.numeroPagine = numeroPagine;
    }

    // Metodo per stampare tutte le informazioni del libro in modo leggibile
    public void stampaInformazioni() {
        // Metodo per stampare tutte le informazioni del libro in modo leggibile, quindi senza return
        // vado a stampare direttamente nel metodo
        System.out.println("Titolo: " + this.titolo);
        System.out.println("Autore: " + this.autore);
        System.out.println("Anno di Pubblicazione: " + this.annoPubblicazione);
        System.out.println("Numero di Pagine: " + this.numeroPagine);
    }
}
