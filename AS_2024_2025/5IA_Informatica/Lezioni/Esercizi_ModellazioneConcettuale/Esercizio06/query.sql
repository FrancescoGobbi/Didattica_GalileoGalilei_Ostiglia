-- Es1 : Visualizzare il nome e il cognome degli studenti che 
-- hanno preso in prestito un libro
SELECT S.Nome, S.Cognome
FROM Prestito AS P, Studente AS S
WHERE S.Matricola = P.ID_Studente
GROUP BY S.Matricola


-- Es2 : Trovare il numero totale di libri presi in prestito da ciascuno studente
SELECT S.Nome, COUNT(S.Matricola) AS NumeroPrestiti
FROM Prestito AS P, Studente AS S
WHERE S.Matricola = P.ID_Studente 
GROUP BY S.Matricola


-- Es3 : Visualizzare il titolo e l'autore dei libri presi 
-- in prestito da uno studente con un determinato cognome ('Rossi')
SELECT L.Titolo, L.Autore
FROM Libro AS L, Studente AS S, Prestito AS P
WHERE L.ISBN = P.ID_Libro AND S.Matricola = P.ID_Studente AND S.Cognome = 'Rossi'


-- Es4 : Trovare la media dei giorni di prestito dei libri
SELECT L.Titolo, 
FROM Libro AS L, Prestito AS P
WHERE L.ISBN = P.ID_Libro










-- Es5 : Visualizzare il nome e il cognome dei bibliotecari che hanno gestito prestiti di libri


-- Es6 : Trovare il numero di prestiti gestiti da ciascun bibliotecario


-- Es7 : Visualizzare il titolo dei libri che non sono mai stati presi in prestito


-- Es8 : Trovare il numero totale di libri presi in prestito per ciascun genere


-- Es9 : Visualizzare il nome e il cognome degli studenti che hanno preso in prestito più di 3 libri


-- Es10 : Trovare il titolo e l'autore del libro più vecchio presente nel database
