-- Creazione del database
CREATE DATABASE IF NOT EXISTS scuola;
USE scuola;

-- Creazione della tabella STUDENTE
CREATE TABLE STUDENTE (
    ID_Studente INT AUTO_INCREMENT,
    Nome VARCHAR(50) NOT NULL,
    Cognome VARCHAR(50) NOT NULL,
    Matricola VARCHAR(10) UNIQUE NOT NULL,
    Classe VARCHAR(10) NOT NULL,

    PRIMARY KEY(ID_Studente)
);

-- Creazione della tabella DOCENTE
CREATE TABLE DOCENTE (
    ID_Docente INT AUTO_INCREMENT ,
    Nome VARCHAR(50) NOT NULL,
    Cognome VARCHAR(50) NOT NULL,
    Specializzazione VARCHAR(100) NOT NULL

    PRIMARY KEY(ID_Docente)
);

-- Creazione della tabella CORSO
CREATE TABLE CORSO (
    ID_Corso INT AUTO_INCREMENT PRIMARY KEY,
    Nome VARCHAR(100) NOT NULL,
    Descrizione TEXT,
    ID_Docente INT NOT NULL,
    FOREIGN KEY (ID_Docente) REFERENCES DOCENTE(ID_Docente) ON DELETE CASCADE ON UPDATE CASCADE
);

-- Creazione della tabella ISCRIZIONE (relazione molti-a-molti tra STUDENTE e CORSO)
CREATE TABLE ISCRIZIONE (
    ID_Iscrizione INT AUTO_INCREMENT PRIMARY KEY,
    ID_Studente INT NOT NULL,
    ID_Corso INT NOT NULL,
    Data_Iscrizione DATE NOT NULL,
    FOREIGN KEY (ID_Studente) REFERENCES STUDENTE(ID_Studente) ON DELETE CASCADE ON UPDATE CASCADE,
    FOREIGN KEY (ID_Corso) REFERENCES CORSO(ID_Corso) ON DELETE CASCADE ON UPDATE CASCADE,
    UNIQUE (ID_Studente, ID_Corso)  -- Unicità per evitare doppie iscrizioni
);
