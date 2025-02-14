-- Q1 : Trovare tutti i nomi ed i cognomi dei docenti
SELECT D.Nome AS 'NomeDocente', D.Cognome AS 'CognomeDocente'
FROM Docente AS D;

-- Q2 : Trovare tutti i nomi ed i cognomi degli Studenti
SELECT S.Nome AS 'Nome Studente', S.Cognome AS 'Cognome Studente'
FROM Studente AS S;

-- Q2.1 : Trovare tutti i nomi ed i cognomi degli Studenti che hanno per nome 'Mario'
SELECT S.Nome, S.Cognome
FROM Studente AS S
WHERE S.nome = 'Mario';

-- Q2.2 : Trovare gli Studenti che hanno per nome 'Mario'
SELECT *
FROM Studente AS S
WHERE S.Nome = 'Mario';

-- Q3 : Trovare tutti i nomi ed i cognomi degli Studenti che frequentano il corso di 'Informatica'
SELECT S.Nome AS 'Nome Studente', S.Cognome AS 'Cognome Studente'
FROM Studente AS S, Iscrizione AS I, Corso AS C
WHERE S.Matricola = I.ID_Studente AND I.ID_Corso = C.ID
        AND C.Nome = 'Informatica';

-- Q3.1 : Trovare tutti i nomi ed i cognomi degli Studenti che frequentano il corso di 'Storia'
SELECT S.Nome AS 'Nome Studente', S.Cognome AS 'Cognome Studente'
FROM Studente AS S, Iscrizione AS I, Corso AS C
WHERE S.Matricola = I.ID_Studente AND I.ID_Corso = C.ID
        AND C.Nome = 'Storia';

-- Q3.2 : Trovare gli Studenti che frequentano il corso di 'Informatica' (NON VA BENE)
SELECT *
FROM Studente AS S, Iscrizione AS I, Corso AS C
WHERE S.Matricola = I.ID_Studente AND I.ID_Corso = C.ID
        AND C.Nome = 'Informatica';

-- Q3.2 : Trovare gli Studenti che frequentano il corso di 'Informatica' (VA BENE)
SELECT S.Nome, S.Cognome, I.Data_Iscrizione
FROM Studente AS S, Iscrizione AS I, Corso AS C
WHERE S.Matricola = I.ID_Studente AND I.ID_Corso = C.ID
        AND C.Nome = 'Informatica';

-- Q4 : Trovare tutti i nomi ed i cognomi degli Studenti che frequentano il corso di Informatica e sono iscritti al corso di Matematica
SELECT S.Nome, S.Cognome
FROM Studente AS S, Iscrizione AS I, Corso AS C
WHERE S.Matricola = I.ID_Studente AND I.ID_Corso = C.ID
        AND C.Nome = 'Informatica' AND  S.Matricola IN (
                                                SELECT S.Matricola
                                                FROM Studente AS S, Iscrizione AS I, Corso AS C
                                                WHERE S.Matricola = I.ID_Studente AND I.ID_Corso = C.ID
                                                AND C.Nome = 'Matematica'
                                                );

-- DA GUARDARE PRIMA DI PASSARE ALLA QUERY SUCCESSIVA PER CAPIRE CHE TABELLA RISULTA DEL JOIN CON 5 TABELLE
-- Q4.1 : Trovare tutti i nomi ed i cognomi degli Studenti che frequentano il corso di Informatica e sono iscritti al corso di Matematica
SELECT *
FROM Studente AS S, Iscrizione AS I1, Iscrizione AS I2, Corso AS C1, Corso AS C2
WHERE S.Matricola = I1.ID_Studente AND S.Matricola = I2.ID_Studente AND I1.ID_Corso = C1.ID AND I2.ID_Corso = C2.ID
        AND C1.Nome = 'Informatica' AND C2.Nome = 'Matematica';

-- Q4.1 : Trovare tutti i nomi ed i cognomi degli Studenti che frequentano il corso di Informatica e sono iscritti al corso di Matematica
SELECT S.Nome, S.Cognome
FROM Studente AS S, Iscrizione AS I1, Iscrizione AS I2, Corso AS C1, Corso AS C2
WHERE S.Matricola = I1.ID_Studente AND S.Matricola = I2.ID_Studente AND I1.ID_Corso = C1.ID AND I2.ID_Corso = C2.ID
        AND C1.Nome = 'Informatica' AND C2.Nome = 'Matematica';

-- Q5 : Trovare tutti i nomi ed i cognomi dei docenti che fanno o hanno fatto un corso di Matematica
SELECT D.Nome, D.Cognome      
FROM Docente AS D, Corso AS C
WHERE D.ID = C.ID_Docente AND C.Nome = 'Matematica';

-- Q6 : Trovare tutti i ragazzi che si sono iscritti prima del 2024-10-02
SELECT S.Nome, S.Cognome
FROM Studente AS S, Iscrizione AS I
WHERE S.Matricola = I.ID_Studente AND I.Data_Iscrizione < '2024-10-02';

-- Q7 : Contare il numero totale di studenti
SELECT COUNT(*) AS 'Numero Studenti'   
FROM Studente;

-- Q8 : Trovare il numero di corsi tenuti da ciascun docente
SELECT D.Nome, D.Cognome, COUNT(C.ID) AS 'Numero Corsi'
FROM Docente AS D, Corso AS C
WHERE D.ID = C.ID_Docente

-- Q9 : Trovare il numero di studenti iscritti a ciascun corso
SELECT C.Nome, COUNT(I.ID_Studente) AS 'Numero Studenti'
FROM Corso AS C, Iscrizione AS I
WHERE C.ID = I.ID_Corso

-- Q10 : Trovare il numero medio di studenti per corso
SELECT AVG(NumeroStudenti) AS 'Numero Medio Studenti', C.Nome
FROM Corso AS C, Iscrizione AS i
WHERE C.ID = I.ID_Corso
GROUP BY C.ID