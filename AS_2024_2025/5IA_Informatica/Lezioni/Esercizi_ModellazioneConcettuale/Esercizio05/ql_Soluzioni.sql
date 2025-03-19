-- Q1 : Trovare tutti i nomi ed i cognomi dei docenti
SELECT D.nome AS 'NomeDocente', D.cognome AS 'CognomeDocente'
FROM Docente AS D

-- Q2 : Trovare tutti i nomi ed i cognomi degli Studenti
SELECT S.Nome, S.Cognome
FROM Studente AS S;

-- Q3 : Trovare tutti i nomi ed i cognomi degli Studenti che frequentano il corso di Informatica
SELECT S.Nome, S.Cognome
FROM Studente AS S, Iscrizione AS I, Corso AS C
WHERE S.Matricola = I.ID_Studente AND I.ID_Corso = C.ID
        AND C.Nome = 'Informatica';

-- Q4 : Trovare tutti i nomi ed i cognomi degli Studenti che frequentano il corso di Informatica e sono iscritti al corso di Matematica
SELECT S.Nome, S.Cognome
FROM Studente AS S, Iscrizione AS I, Corso AS C
WHERE S.Matricola = I.ID_Studente AND I.ID_Corso = C.ID
        AND C.Nome = 'Informatica' AND S.Matricola IN (
                                    SELECT S.Matricola
                                    FROM Studente AS S, Iscrizione AS I, Corso AS C
                                    WHERE S.Matricola = I.ID_Studente AND I.ID_Corso = C.ID
                                        AND C.Nome = 'Matematica'
                                );

-- Q5 : Trovare tutti i nomi ed i cognomi dei docenti che fanno o hanno fatto un corso di Matematica
SELECT D.Nome, D.Cognome
FROM Docente AS D, Corso AS C
WHERE D.ID = C.ID_Docente AND C.Nome = 'Matematica';

-- Q6 : Trovare tutti i ragazzi che si sono iscritti prima del 2024-10-02
SELECT S.Nome, S.Cognome
FROM Studente AS S, Iscrizione AS I
WHERE S.Matricola = I.ID_Studente AND I.Data_Iscrizione < '2024-10-02';