-- Creazione del database
CREATE DATABASE IF NOT EXISTS CinemaSottoLeStelle;
USE CinemaSottoLeStelle;

-- 1) Distributore
CREATE TABLE Distributore (
  ID INT AUTO_INCREMENT,
  NomeDistributore VARCHAR(100) NOT NULL,
  NascitaDistributore DATE NOT NULL,
  EmailDistributore VARCHAR(30) NOT NULL,
  NumeroDistributore VARCHAR(20) NOT NULL,

  PRIMARY KEY (ID)
)ENGINE=InnoDb;

-- 2) Film
CREATE TABLE Film (
  ID INT AUTO_INCREMENT,
  NomeFilm VARCHAR(200) NOT NULL,
  Categoria VARCHAR(50) NOT NULL,
  DataUscita DATE NOT NULL,
  Durata INT NOT NULL, -- Magari teniamo in minuti
  Descrizione TEXT NOT NULL,
  IDDistributore INT NOT NULL,

  PRIMARY KEY (ID),
  FOREIGN KEY (IDDistributore) REFERENCES Distributore(ID)
)ENGINE=InnoDb;

-- 3) Proiezione
CREATE TABLE Proiezione (
  ID INT AUTO_INCREMENT,
  DataProiezione DATE NOT NULL,
  OraProiezione TIME NOT NULL,
  IDFilm INT NOT NULL,
  PRIMARY KEY (ID),
  FOREIGN KEY (IDFilm) REFERENCES Film(ID)
)ENGINE=InnoDb;

-- 4) Spettatore
CREATE TABLE Spettatore (
  CodiceFiscale CHAR(16) CHECK (CHAR_LENGTH(CodiceFiscale) = 16), -- Controllo lunghezza sul Codice Fiscale
  Nome VARCHAR(50) NOT NULL,
  Cognome VARCHAR(50) NOT NULL,
  NumeroTelefono VARCHAR(20) NOT NULL,
  Email VARCHAR(30) NOT NULL,

  PRIMARY KEY (CodiceFiscale)
)ENGINE=InnoDb;

-- 5) Prenotazione
CREATE TABLE Prenotazione (
  ID INT AUTO_INCREMENT,
  DataPrenotazione DATETIME DEFAULT CURRENT_TIMESTAMP, -- Prenotazione con data e ora, con default
  PostiSelezionati INT NOT NULL,
  IDProiezione INT NOT NULL,
  IDSpettatore CHAR(16) NOT NULL,

  PRIMARY KEY (ID),
  FOREIGN KEY (IDProiezione) REFERENCES Proiezione(ID),
  FOREIGN KEY (IDSpettatore) REFERENCES Spettatore(CodiceFiscale)
)ENGINE=InnoDb;