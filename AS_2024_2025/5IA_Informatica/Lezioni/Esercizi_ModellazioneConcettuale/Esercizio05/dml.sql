USE ScuolaDefinitivo;

-- Inserimento degli Studenti
-- Inserimento degli Studenti (una tupla per una query)
INSERT INTO Studente (Nome, Cognome, Classe) VALUES ('Mario', 'Rossi', '5IA');
INSERT INTO Studente (Nome, Cognome, Classe) VALUES ('Luca', 'Bianchi', '5IA');
-- Inserimento degli Studenti (più tuple in un'unica query)
INSERT INTO Studente (Nome, Cognome, Classe) VALUES 
                    ('Paolo', 'Verdi', '5IA'),
                    ('Giovanni', 'Neri', '5IA'),
                    ('Andrea', 'Gialli', '5IA');

-- Inserimento dei Docenti
INSERT INTO Docente (Nome, Cognome, Specializzazione) VALUES ('Giuseppe', 'Verdi', 'Matematica');
-- Inserimento degli Studenti (più tuple in un'unica query)
INSERT INTO Docente (Nome, Cognome, Specializzazione) VALUES 
                    ('Maria', 'Bianchi', 'Informatica'),
                    ('Luca', 'Rossi', 'Italiano'),
                    ('Giovanni', 'Neri', 'Storia');

-- Inserimento dei Corsi
INSERT INTO Corso (Nome, Descrizione, OraInizioCorso, OraFineCorso, ID_Docente) VALUES ('Matematica', 'Corso di Matematica', '10:30:00', '11:30:00', 1);
-- Inserimento degli Studenti (più tuple in un'unica query)
INSERT INTO Corso (Nome, Descrizione, OraInizioCorso, OraFineCorso, ID_Docente) VALUES 
                ('Informatica', 'Corso di Informatica', '10:30:00', '11:30:00', 2),
                ('Italiano', 'Corso di Italiano', '10:30:00', '11:30:00', 3),
                ('Storia', 'Corso di Storia', '10:30:00', '11:30:00', 4),
                ('Fisica', 'Corso di Fisica', '10:30:00', '11:30:00', 1);
INSERT INTO Corso (Nome, Descrizione, OraInizioCorso, OraFineCorso, ID_Docente) VALUES ('Matematica', 'Corso di Matematica', '11:30:00', '13:30:00', 1);

-- Inserimento delle Iscrizioni
INSERT INTO Iscrizione (ID_Studente, ID_Corso, Data_Iscrizione) VALUES (1, 1, '2024-10-01');
-- Inserimento degli Studenti (più tuple in un'unica query)
INSERT INTO Iscrizione (ID_Studente, ID_Corso, Data_Iscrizione) VALUES 
                    (1, 2, '2024-11-01'),
                    (2, 2, '2024-10-02'),
                    (3, 2, '2024-10-03'),
                    (4, 2, '2024-10-03'),
                    (5, 2, '2024-11-02');