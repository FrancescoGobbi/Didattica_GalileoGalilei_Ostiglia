-- =========================================================
-- DDL: creazione del database e delle tabelle
-- =========================================================
CREATE TABLE autore (
  id INT PRIMARY KEY AUTO_INCREMENT,
  nome VARCHAR(50) NOT NULL,
  cognome VARCHAR(50) NOT NULL,
  nazionalita VARCHAR(50)
);

CREATE TABLE libro (
  id INT PRIMARY KEY AUTO_INCREMENT,
  titolo VARCHAR(100) NOT NULL,
  annoPubblicazione INT NOT NULL,
  genere VARCHAR(50) NOT NULL,
  autoreId INT NOT NULL,
  FOREIGN KEY (autoreId) REFERENCES autore(id)
);

CREATE TABLE prestito (
  id INT PRIMARY KEY AUTO_INCREMENT,
  dataPrestito DATE NOT NULL,
  dataRestituzione DATE,
  nomeStudente VARCHAR(50) NOT NULL,
  cognomeStudente VARCHAR(50) NOT NULL,
  classe VARCHAR(10) NOT NULL,
  libroId INT NOT NULL,
  FOREIGN KEY (libroId) REFERENCES libro(id)
);

-- =========================================================
-- DML: inserimento dei dati
-- =========================================================

INSERT INTO autore (nome, cognome, nazionalita) VALUES
  ('Italo', 'Calvino', 'Italiana'),
  ('George', 'Orwell', 'Britannica'),
  ('Jules', 'Verne', 'Francese'),
  ('Agatha', 'Christie', 'Britannica'),
  ('Primo', 'Levi', 'Italiana');

INSERT INTO libro (titolo, annoPubblicazione, genere, autoreId) VALUES
  ('Il barone rampante', 1957, 'Romanzo', 1),
  ('1984', 1949, 'Distopico', 2),
  ('La fattoria degli animali', 1945, 'Satira', 2),
  ('Viaggio al centro della Terra', 1864, 'Avventura', 3),
  ('Assassinio sull Orient Express', 1934, 'Giallo', 4),
  ('Se questo e un uomo', 1947, 'Memoriale', 5);

INSERT INTO prestito
(dataPrestito, dataRestituzione, nomeStudente, cognomeStudente, classe, libroId)
VALUES
  ('2025-03-01', '2025-03-15', 'Marco', 'Rossi', '3IA', 1),
  ('2025-03-02', NULL, 'Sara', 'Bianchi', '3IA', 2),
  ('2025-03-05', '2025-03-20', 'Luca', 'Verdi', '4IA', 3),
  ('2025-03-08', NULL, 'Giulia', 'Neri', '4IB', 4),
  ('2025-03-10', '2025-03-25', 'Anna', 'Gialli', '5IA', 5),
  ('2025-03-12', NULL, 'Paolo', 'Romano', '5IA', 6),
  ('2025-03-15', '2025-03-28', 'Elena', 'Costa', '3IA', 2),
  ('2025-03-18', NULL, 'Davide', 'Ferrari', '4IA', 1);

-- =========================================================
-- QL: esercizi da svolgere
-- =========================================================

-- Esercizio 1
-- Visualizzare tutti gli autori presenti nella tabella autore,
-- mostrando nome, cognome e nazionalita.
SELECT nome, cognome, nazionalita
FROM autore;


-- Esercizio 2
-- Visualizzare titolo, anno di pubblicazione e genere
-- di tutti i libri presenti nella tabella libro.
SELECT titolo, annoPubblicazione, genere
FROM libro;


-- Esercizio 3
-- Visualizzare tutti i libri di genere Romanzo oppure Avventura.
SELECT titolo, annoPubblicazione, genere
FROM libro
WHERE genere = 'Romanzo' OR genere = 'Avventura';


-- Esercizio 4
-- Visualizzare i libri pubblicati prima del 1950,
-- mostrando titolo e anno di pubblicazione.
SELECT titolo, annoPubblicazione
FROM libro
WHERE annoPubblicazione < 1950;


-- Esercizio 5
-- Visualizzare nome e cognome degli studenti della classe 3IA
-- che hanno effettuato un prestito.
SELECT nomeStudente, cognomeStudente
FROM prestito
WHERE classe = '3IA';


-- Esercizio 6
-- Visualizzare tutti i prestiti non ancora restituiti.
-- Un prestito non ancora restituito ha dataRestituzione uguale a NULL.
SELECT nomeStudente, cognomeStudente, titolo, dataPrestito
FROM prestito AS p, libro AS l
WHERE p.libroId = l.id AND p.dataRestituzione IS NULL;


-- Esercizio 7
-- Visualizzare titolo del libro, nome e cognome dello studente
-- che lo ha preso in prestito.
-- Usare l'equi join tra libro e prestito.
SELECT titolo, nomeStudente, cognomeStudente
FROM libro AS l, prestito AS p
WHERE l.id = p.libroId;


-- Esercizio 8
-- Visualizzare titolo del libro, nome e cognome dell'autore.
-- Usare l'equi join tra libro e autore.
SELECT titolo, nome, cognome
FROM libro AS l, autore AS a
WHERE l.autoreId = a.id;


-- Esercizio 9
-- Visualizzare titolo del libro, autore, studente e classe
-- per ogni prestito registrato.
-- Usare l'equi join tra autore, libro e prestito.
SELECT titolo, nome, cognome, nomeStudente, cognomeStudente, classe
FROM autore AS a, libro AS l, prestito AS p
WHERE a.id = l.autoreId AND l.id = p.libroId;


-- Esercizio 10 --> Esercizio avanzato, non riesco nel compito
-- Contare quanti libri sono presenti per ogni genere.
-- Mostrare il genere e il numero di libri.
SELECT genere, COUNT(id) AS numero_libri
FROM libro
GROUP BY genere;