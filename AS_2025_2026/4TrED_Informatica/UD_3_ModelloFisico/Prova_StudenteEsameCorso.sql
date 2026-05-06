-- Creazione delle tabella
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

-- Inserimento dei dati
INSERT INTO studente (nome, cognome, classe)
VALUES
('Mario', 'Rossi', '5IA'),
('Luca', 'Bianchi', '5IA'),
('Anna', 'Verdi', '5IB'),
('Iris', 'Massara', '4TRED');

INSERT INTO corso (nome, ore)
VALUES
('Database', 40),
('Programmazione Web', 35),
('Sistemi e Reti', 45);

INSERT INTO esame (voto, dataEsame, studenteId, corsoId)
VALUES
(8, '2025-04-10', 1, 1),
(7, '2025-04-12', 2, 1),
(9, '2025-04-15', 1, 2),
(6, '2025-04-18', 3, 3);


-- QL
SELECT * 
FROM studente;


SELECT * 
FROM corso;


SELECT * 
FROM esame;


SELECT *
FROM esame AS e, studente AS s
WHERE e.studenteId = s.id;


SELECT *
FROM studente AS s
WHERE s.nome = 'Mario';