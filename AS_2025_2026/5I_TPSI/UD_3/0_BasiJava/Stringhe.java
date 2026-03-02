import java.lang.*; // Importa la libreria standard di Java 

public class Stringhe {
    public static void main(String[] args) {
        String saluto = "Ciao, come stai?"; // Dichiarazione e inizializzazione di una variabile di tipo String, quindi un OGGETTO che rappresenta una sequenza di caratteri
        String nome = "Ciao, io sto bene!"; // Dichiarazione e inizializzazione di un'altra variabile di tipo String, che rappresenta un'altra sequenza di caratteri

        // Caratteristiche delle stringhe in Java:
        // 1. Le stringhe sono oggetti in Java, NON tipi primitivi.
        // 2. Le stringhe sono immutabili, il che significa che una volta create, non possono essere modificate.
        // 3. Le stringhe possono essere concatenate utilizzando l'operatore + o il metodo concat().

        // Stampa dei valori delle stringhe
        System.out.println(saluto); // Stampa il valore di saluto
        System.out.println(nome); // Stampa il valore di nome

        // OPERAZIONI SULLE STRINGHE

        // Ottiene la lunghezza della stringa saluto
        int lunghezzaSaluto = saluto.length(); // Ottiene la lunghezza della string
        System.out.println("La lunghezza della stringa saluto è: " + lunghezzaSaluto);

        // Concatenazione di stringhe
        // Creo una nuova stringa messaggio concatenando saluto e nome
        String messaggio = saluto + " Mi chiamo " + nome + "."; // Concatenazione utilizzando l'operatore +
        System.out.println(messaggio); // Stampa il messaggio concatenato

        // Creo una nuova stringa messaggio2 concatenando saluto e nome utilizzando il metodo concat()
        String messaggio2 = saluto.concat(" Mi chiamo ").concat(nome).concat("."); // Concatenazione utilizzando il metodo concat()
        System.out.println(messaggio2); // Stampa il messaggio concatenato

        // Confronto di stringhe (confronto tra == e equals())
        String stringa1 = "Ciao";
        String stringa2 = "Ciao";
        String stringa3 = new String("Ciao"); // Crea un nuovo oggetto String con lo stesso contenuto di stringa1 e stringa2, ovvero "Ciao"
        System.out.println("stringa1 == stringa2: " + (stringa1 == stringa2)); // Confronto con l'operatore == (verifica se sono lo stesso oggetto)
        System.out.println("stringa1 == stringa3: " + (stringa1 == stringa3)); // Confronto con l'operatore == (verifica se sono lo stesso oggetto)
        System.out.println("stringa1.equals(stringa3): " + stringa1.equals(stringa3)); // Confronto con il metodo equals() (verifica se hanno lo stesso contenuto)
        System.out.println("stringa1.equals(stringa2): " + stringa1.equals(stringa2)); // Confronto con il metodo equals() (verifica se hanno lo stesso contenuto)
    
        // Sottostringa (substring)
        String sottostringa = saluto.substring(0, 4); // Ottiene la sottostringa da indice 0 a indice 4 (escluso) della stringa saluto
        System.out.println("La sottostringa di saluto è: " + sottostringa); // Stampa la sottostringa ottenuta
    
    
        // Sostituzione di caratteri (replace)
        String salutoSostituito = saluto.replace('a', 'o'); // Sostituisce tutte le occorrenze del carattere 'a' con il carattere 'o' nella stringa saluto
        System.out.println("Saluto con 'a' sostituito da 'o': " + salutoSostituito); // Stampa la stringa con i caratteri sostituiti
    
        // Conversione di stringhe in maiuscolo e minuscolo
        String salutoMaiuscolo = saluto.toUpperCase(); // Creo una nuova stringa salutoMaiuscolo convertendo la stringa saluto in maiuscolo
        String salutoMinuscolo = saluto.toLowerCase(); // Creo una nuova stringa salutoMinuscolo convertendo la stringa saluto in minuscolo
        System.out.println("Saluto in maiuscolo: " + salutoMaiuscolo); // Stampa la stringa in maiuscolo
        System.out.println("Saluto in minuscolo: " + salutoMinuscolo); // Stampa la stringa in minuscolo
    
        // Verifica se una stringa contiene una sottostringa (contains)
        boolean contieneStringa = saluto.contains("Ciao"); // Verifica se la stringa saluto contiene la sottostringa "Ciao"
        System.out.println("Saluto contiene 'Ciao': " + contieneStringa); // Stampa il risultato della verifica
    }
}
