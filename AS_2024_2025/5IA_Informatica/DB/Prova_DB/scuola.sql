-- Creazione del database
CREATE DATABASE IF NOT EXISTS scuola;

-- Seleziona il database
USE scuola;

-- Creazione della tabella "studenti"
CREATE TABLE IF NOT EXISTS studenti (
    id_studente INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(50) NOT NULL,
    cognome VARCHAR(50) NOT NULL,
    data_nascita DATE,
    classe VARCHAR(10),
    email VARCHAR(100)
);

-- Creazione della tabella "docenti"
CREATE TABLE IF NOT EXISTS docenti (
    id_docente INT AUTO_INCREMENT PRIMARY KEY,
    nome VARCHAR(50) NOT NULL,
    cognome VARCHAR(50) NOT NULL,
    materia VARCHAR(100),
    email VARCHAR(100)
);

-- Creazione della tabella "corsi"
CREATE TABLE IF NOT EXISTS corsi (
    id_corso INT AUTO_INCREMENT PRIMARY KEY,
    nome_corso VARCHAR(100) NOT NULL,
    descrizione TEXT,
    id_docente INT,
    FOREIGN KEY (id_docente) REFERENCES docenti(id_docente)
);

-- Creazione della tabella "iscrizioni"
CREATE TABLE IF NOT EXISTS iscrizioni (
    id_iscrizione INT AUTO_INCREMENT PRIMARY KEY,
    id_studente INT,
    id_corso INT,
    data_iscrizione DATE,
    FOREIGN KEY (id_studente) REFERENCES studenti(id_studente),
    FOREIGN KEY (id_corso) REFERENCES corsi(id_corso)
);
