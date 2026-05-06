-- =========================================================
-- DDL: creazione del database e delle tabelle
-- =========================================================
CREATE TABLE studente (
  id INT PRIMARY KEY AUTO_INCREMENT,
  nome VARCHAR(50) NOT NULL,
  cognome VARCHAR(50) NOT NULL,
  classe VARCHAR(10) NOT NULL
);

CREATE TABLE corso (
  id INT PRIMARY KEY AUTO_INCREMENT,
  nome VARCHAR(50) NOT NULL,
  ore INT NOT NULL CHECK (ore > 0)
);

CREATE TABLE esame (
  id INT PRIMARY KEY AUTO_INCREMENT,
  voto INT NOT NULL CHECK (voto BETWEEN 1 AND 10),
  dataEsame DATE NOT NULL,
  studenteId INT NOT NULL,
  corsoId INT NOT NULL,
  FOREIGN KEY (studenteId) REFERENCES studente(id),
  FOREIGN KEY (corsoId) REFERENCES corso(id)
);

-- =========================================================
-- DML: inserimento dei dati
-- =========================================================

INSERT INTO studente (nome, cognome, classe) VALUES
  ('Mario', 'Rossi', '5IA'),
  ('Luca', 'Bianchi', '5IA'),
  ('Anna', 'Verdi', '5IB'),
  ('Giulia', 'Neri', '5IB'),
  ('Paolo', 'Gialli', '5IC');

INSERT INTO corso (nome, ore) VALUES
  ('Database', 40),
  ('Programmazione Web', 35),
  ('Sistemi e Reti', 45),
  ('Informatica Teorica', 30);

INSERT INTO esame (voto, dataEsame, studenteId, corsoId) VALUES
  (8, '2025-04-10', 1, 1),
  (7, '2025-04-12', 2, 1),
  (9, '2025-04-15', 1, 2),
  (6, '2025-04-18', 3, 3),
  (10, '2025-04-20', 4, 2),
  (8, '2025-04-22', 2, 3),
  (5, '2025-04-23', 5, 1),
  (9, '2025-04-24', 3, 2),
  (7, '2025-04-25', 4, 4);



-- QL: esercizio 1
-- Visualizzare nome, cognome e classe di tutti gli studenti.

SELECT nome, cognome, classe
FROM studente;


-- QL: esercizio 2
-- Visualizzare nome e cognome degli studenti della classe 5IA.

SELECT nome, cognome
FROM studente
WHERE classe = '5IA';


-- QL: esercizio 3
-- Visualizzare nome, cognome e voto di tutti gli esami sostenuti dagli studenti.

SELECT s.nome, s.cognome, e.voto
FROM studente AS s, esame AS e
WHERE s.id = e.studenteId;


-- QL: esercizio 4
-- Visualizzare nome e cognome degli studenti che hanno preso un voto almeno pari a 8.

SELECT s.nome, s.cognome, e.voto
FROM studente AS s, esame AS e
WHERE s.id = e.studenteId
  AND e.voto >= 8;


-- QL: esercizio 5
-- Visualizzare nome dello studente, cognome, nome del corso e voto ottenuto.

SELECT s.nome, s.cognome, c.nome AS corso, e.voto
FROM studente AS s, esame AS e, corso AS c
WHERE s.id = e.studenteId
  AND c.id = e.corsoId;


-- QL: esercizio 6
-- Visualizzare gli studenti della classe 5IB con il corso sostenuto e il voto ottenuto.

SELECT s.nome, s.cognome, c.nome AS corso, e.voto
FROM studente AS s, esame AS e, corso AS c
WHERE s.id = e.studenteId
  AND c.id = e.corsoId
  AND s.classe = '5IB';


-- QL: esercizio 7
-- Calcolare quanti esami sono stati registrati per ogni studente.

SELECT s.nome, s.cognome, COUNT(e.id) AS numero_esami
FROM studente AS s, esame AS e
WHERE s.id = e.studenteId
GROUP BY s.id, s.nome, s.cognome;


-- QL: esercizio 8
-- Calcolare la media dei voti di ogni studente.

SELECT s.nome, s.cognome, AVG(e.voto) AS media_voti
FROM studente AS s, esame AS e
WHERE s.id = e.studenteId
GROUP BY s.id, s.nome, s.cognome;


-- QL: esercizio 9
-- Visualizzare per ogni corso il numero di esami registrati,
-- mostrando solo i corsi con almeno due esami.

SELECT c.nome AS corso, COUNT(e.id) AS numero_esami
FROM corso AS c, esame AS e
WHERE c.id = e.corsoId
GROUP BY c.id, c.nome
HAVING COUNT(e.id) >= 2;


-- QL: esercizio 10
-- Per ogni classe e per ogni corso, calcolare la media dei voti,
-- mostrando solo i gruppi con media almeno pari a 8.

SELECT s.classe, c.nome AS corso, AVG(e.voto) AS media_voti
FROM studente AS s, esame AS e, corso AS c
WHERE s.id = e.studenteId
  AND c.id = e.corsoId
GROUP BY s.classe, c.id, c.nome
HAVING AVG(e.voto) >= 8;