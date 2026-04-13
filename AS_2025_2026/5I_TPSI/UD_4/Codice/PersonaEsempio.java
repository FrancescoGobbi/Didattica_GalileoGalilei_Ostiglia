public class PersonaEsempio { 

    //variabili di istanza (campi dati) 
    public String nome; 
    public String codiceFiscale; 

    public PersonaEsempio(String nome, String codiceFiscale){
        this.nome = nome;
        this.codiceFiscale = codiceFiscale;
    }

    //metodi (campi operazione) 
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