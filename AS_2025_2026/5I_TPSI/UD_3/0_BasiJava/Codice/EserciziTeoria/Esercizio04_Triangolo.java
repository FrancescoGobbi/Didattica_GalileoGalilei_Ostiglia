public class Esercizio04_Triangolo {
    // Attributi della classe Esercizio04_Triangolo
    private double cateto1; // Attributo per memorizzare il primo cateto del triangolo
    private double cateto2; // Attributo per memorizzare il secondo cateto del triangolo
    private double ipotenusa; // Attributo per memorizzare l'ipotenusa del triangolo

    // Costruttore della classe Esercizio04_Triangolo per inizializzare gli attributi
    public Esercizio04_Triangolo(double cateto1, double cateto2, double ipotenusa) {
        this.cateto1 = cateto1;
        this.cateto2 = cateto2;
        this.ipotenusa = ipotenusa;
    }

    // Metodi della classe Esercizio04_Triangolo
    // Metodi per ottenere i valori degli attributi
    public double getCateto1() {
        return this.cateto1;
    }

    public double getCateto2() {
        return this.cateto2;
    }

    public double getIpotenusa() {
        return this.ipotenusa;
    }

    public String getDati() {
        String valori = "Cateto 1: " + this.getCateto1() + ", Cateto 2: "+ this.getCateto2() + ", Ipotenusa: " + this.getIpotenusa();
        return valori;
    }

    // Metodi per modificare i valori degli attributi
    public double calcoloAltezza() {
        return (double) ((this.cateto1 * this.cateto2) / this.ipotenusa); // Faccio un cast a double per evitare problemi di divisione tra interi
    }

    // Metodo per calcolare l'area del triangolo utilizzando l'altezza calcolata e uno dei cateti
    public double calcolaArea() {
        return (cateto1 * this.calcoloAltezza()) / 2;
    }

    // Metodo per calcolare il perimetro del triangolo
    public double calcolaPerimetro() {
        return this.cateto1 + this.cateto2 + this.ipotenusa;
    }
}
