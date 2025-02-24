-- Creazione del database
CREATE DATABASE IF NOT EXISTS LibriScuola;
USE LibriScuola;

-- Creazione della tabella STUPENDE
CREATE TABLE Studente (
    Matricola Integer AUTO_INCREMENT,
    Nome VARCHAR(50) NOT NULL,
    Cognome VARCHAR(50) NOT NULL,
    Classe VARCHAR(10) NOT NULL,
    Email VARCHAR(20) NOT NULL,

    PRIMARY KEY (Matricola)
)ENGINE=InnoDb;

-- Creazione della tabella LIBRO
CREATE TABLE Libro (
    ISBN CHAR(10) UNIQUE NOT NULL,
    Titolo VARCHAR(50) NOT NULL,
    Autore VARCHAR(50) NOT NULL,
    AnnoPubblicazione DATE NOT NULL,
    Genere VARCHAR(50) NOT NULL,

    PRIMARY KEY (ISBN)
)ENGINE=InnoDb;

-- Creazione della tabella BIBLIOTECARIO
CREATE TABLE Bibliotecario (
    ID Integer AUTO_INCREMENT,
    Nome VARCHAR(50) NOT NULL,
    Cognome VARCHAR(50) NOT NULL,
    Email VARCHAR(20) NOT NULL,

    PRIMARY KEY (ID)
)ENGINE=InnoDb;

-- Creazione della tabella PRESTITO
CREATE TABLE Prestito (
    ID Integer AUTO_INCREMENT,
    DataPrestito DATE NOT NULL,
    DataRestituzione DATE NOT NULL,
    ID_Libro CHAR(10) UNIQUE NOT NULL,
    ID_Studente Integer NOT NULL,
    ID_Bibliotecario Integer NOT NULL,

    PRIMARY KEY (ID),
    FOREIGN KEY (ID_Libro) REFERENCES Libro(ISBN),
    FOREIGN KEY (ID_Studente) REFERENCES Studente(Matricola),
    FOREIGN KEY (ID_Bibliotecario) REFERENCES Bibliotecario(ID)
)ENGINE=InnoDb;