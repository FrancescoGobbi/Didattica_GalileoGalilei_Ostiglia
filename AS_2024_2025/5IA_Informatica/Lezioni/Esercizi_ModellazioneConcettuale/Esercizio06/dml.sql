USE LibriScuola;

INSERT INTO Studente (Nome, Cognome, Classe, Email) VALUES ('Mario', 'Rossi', '5IA', 'prova@gmail.com');
INSERT INTO Studente (Nome, Cognome, Classe, Email) VALUES ('Luca', 'Bianchi', '5IA', 'luca@gmail.com');
INSERT INTO Studente (Nome, Cognome, Classe, Email) VALUES ('Giovanni', 'Verdi', '5IA', 'Giovanni@gmail.com');
INSERT INTO Studente (Nome, Cognome, Classe, Email) VALUES ('Paolo', 'Neri', '5IA', 'Paolo@gmail.com');
INSERT INTO Studente (Nome, Cognome, Classe, Email) VALUES ('Paolo2', 'Neri2', '5IA', 'Paolo2Neri2@galileiostiglia.edu.it');

INSERT INTO Libro (ISBN, Titolo, Autore, AnnoPubblicazione, Genere) VALUES ('1234567890', 'Harry Potter - La Pietra Filosofale', 'J.K. Rowling', '1997-06-26', 'Fantasy');
INSERT INTO Libro (ISBN, Titolo, Autore, AnnoPubblicazione, Genere) VALUES ('1234567891', 'Harry Potter - La Camera dei Segreti', 'J.K. Rowling', '1998-07-02', 'Fantasy');
INSERT INTO Libro (ISBN, Titolo, Autore, AnnoPubblicazione, Genere) VALUES ('1234567892', 'Harry Potter - Il Prigioniero di Azkaban', 'J.K. Rowling', '1999-07-08', 'Fantasy');
INSERT INTO Libro (ISBN, Titolo, Autore, AnnoPubblicazione, Genere) VALUES ('1234567893', 'Harry Potter - Il Calice di Fuoco', 'J.K. Rowling', '2000-07-08', 'Fantasy');
INSERT INTO Libro (ISBN, Titolo, Autore, AnnoPubblicazione, Genere) VALUES ('1234567894', 'Harry Potter - L''Ordine della Fenice', 'J.K. Rowling', '2003-06-21', 'Fantasy');
INSERT INTO Libro (ISBN, Titolo, Autore, AnnoPubblicazione, Genere) VALUES ('1234567895', 'Harry Potter - Il Principe Mezzosangue', 'J.K. Rowling', '2005-07-16', 'Fantasy');
INSERT INTO Libro (ISBN, Titolo, Autore, AnnoPubblicazione, Genere) VALUES ('1234567896', 'Harry Potter - I Doni della Morte', 'J.K. Rowling', '2007-07-21', 'Fantasy');

INSERT INTO Bibliotecario (Nome, Cognome, Email) VALUES ('Giuseppe', 'Verdi', 'Giuseppe@gmail.com');
INSERT INTO Bibliotecario (Nome, Cognome, Email) VALUES ('Antonio', 'Rossi', 'Antonio@gmail.com');
INSERT INTO Bibliotecario (Nome, Cognome, Email) VALUES ('Giovanni', 'Bianchi', 'Giovanni@gmail.com');

INSERT INTO Prestito (DataPrestito, DataRestituzione, ID_Libro, ID_Studente, ID_Bibliotecario) VALUES ('2022-01-01', '2022-01-15', '1234567890', 1, 1);
INSERT INTO Prestito (DataPrestito, DataRestituzione, ID_Libro, ID_Studente, ID_Bibliotecario) VALUES ('2022-01-01', '2022-01-15', '1234567891', 2, 2);
INSERT INTO Prestito (DataPrestito, DataRestituzione, ID_Libro, ID_Studente, ID_Bibliotecario) VALUES ('2022-01-01', '2022-01-15', '1234567892', 3, 3);
INSERT INTO Prestito (DataPrestito, DataRestituzione, ID_Libro, ID_Studente, ID_Bibliotecario) VALUES ('2022-01-01', '2022-01-15', '1234567893', 4, 1);
INSERT INTO Prestito (DataPrestito, DataRestituzione, ID_Libro, ID_Studente, ID_Bibliotecario) VALUES ('2022-01-01', '2022-01-15', '1234567894', 1, 2);
INSERT INTO Prestito (DataPrestito, DataRestituzione, ID_Libro, ID_Studente, ID_Bibliotecario) VALUES ('2022-01-01', '2022-01-15', '1234567895', 2, 3);
INSERT INTO Prestito (DataPrestito, DataRestituzione, ID_Libro, ID_Studente, ID_Bibliotecario) VALUES ('2022-01-01', '2022-01-15', '1234567896', 3, 1);
