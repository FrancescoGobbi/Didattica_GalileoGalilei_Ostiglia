-- Creazione del database
CREATE DATABASE IF NOT EXISTS ScuolaDefinitivo;
USE ScuolaDefinitivo;

-- Creazione della tabella STUDENTE
CREATE TABLE Studente (
    Matricola Integer AUTO_INCREMENT,
    Nome VARCHAR(50) NOT NULL,
    Cognome VARCHAR(50) NOT NULL,
    Classe VARCHAR(10) NOT NULL,

    PRIMARY KEY (Matricola)
)ENGINE=InnoDb;

-- Creazione della tabella DOCENTE
CREATE TABLE Docente (
    ID Integer AUTO_INCREMENT,
    Nome VARCHAR(50) NOT NULL,
    Cognome VARCHAR(50) NOT NULL,
    Specializzazione VARCHAR(100) NOT NULL,

    PRIMARY KEY (ID)
)ENGINE=InnoDb;

-- Creazione della tabella CORSO
CREATE TABLE Corso (
    ID Integer AUTO_INCREMENT,
    Nome VARCHAR(20) NOT NULL,
    Descrizione VARCHAR(100),
    OraInizioCorso TIME NOT NULL,
    OraFineCorso TIME NOT NULL,
    ID_Docente INT NOT NULL,

    PRIMARY KEY (ID),
    FOREIGN KEY (ID_Docente) REFERENCES Docente(ID) 
)ENGINE=InnoDb;

-- Creazione della tabella ISCRIZIONE (relazione molti-a-molti tra STUDENTE e CORSO)
CREATE TABLE Iscrizione (
    ID Integer AUTO_INCREMENT,
    ID_Studente INT NOT NULL,
    ID_Corso INT NOT NULL,
    Data_Iscrizione DATE NOT NULL,      

    PRIMARY KEY (ID),
    FOREIGN KEY (ID_Studente) REFERENCES Studente(Matricola),
    FOREIGN KEY (ID_Corso) REFERENCES Corso(ID) 
)ENGINE=InnoDb;
