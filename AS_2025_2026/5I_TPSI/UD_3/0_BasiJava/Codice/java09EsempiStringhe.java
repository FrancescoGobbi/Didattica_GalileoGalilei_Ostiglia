public class java09EsempiStringhe {
    public static void main(String[] args){
        String prova = "john";
        System.out.println(prova);
        System.out.println(prova.length());
        System.out.println(prova.charAt(1));
        // Modifico l'oggetto prova concatenandolo con se stesso e convertendolo in maiuscolo
        prova = prova.toUpperCase().concat(prova);
        System.out.println(prova);
        // Stampo l'ultimo carattere della stringa prova
        System.out.println(prova.charAt(prova.length()-1));
    }
}
