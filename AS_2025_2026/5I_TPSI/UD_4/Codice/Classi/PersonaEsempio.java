public class PersonaEsempio { 

    //variabili di istanza (campi dati) 
    // N.B. le variabili di istanza sono private, 
    // cioè non accessibili direttamente dall'esterno della classe, 
    // ma solo attraverso i metodi get e set
    private String nome; 
    private String codiceFiscale; 

    // COSTRUTTORI
    // Costruttore di default (senza parametri)
    public PersonaEsempio() {

    }

    // Costruttore con parametri (overloaded constructor)
    public PersonaEsempio(String nome, String codiceFiscale){
        this.nome = nome;
        this.codiceFiscale = codiceFiscale;
    }

    // METODI
    //metodi get	
    public String getNome() { 
        return this.nome; 
    } 

    public String getCF() { 
        return this.codiceFiscale; 
    } 

    //metodi set	
    public void setNome(String nome) { 
        this.nome = nome; 
    } 

    public void setCF(String cf) { 
        this.codiceFiscale = cf; 
    } 

}