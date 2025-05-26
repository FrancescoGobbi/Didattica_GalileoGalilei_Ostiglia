-- Creazione del Database: Simulazione Esame 2 - 9 Maggio 2025
CREATE DATABASE IF NOT EXISTS Simulazione2_9_Maggio_2025;
USE Simulazione2_9_Maggio_2025;

-- Creazione delle tabelle per il sistema di gestione delle biciclette
CREATE TABLE Cliente (
    CodiceFiscale VARCHAR(16) CHECK (CHAR_LENGTH(CodiceFiscale) = 16),
    Nome VARCHAR(50),
    Cognome VARCHAR(50),
    Email VARCHAR(100),
    NumeroTelefono VARCHAR(20),

    PRIMARY KEY (CodiceFiscale)
)ENGINE=InnoDB;

CREATE TABLE Stazione (
    ID INT AUTO_INCREMENT,
    NomeStazione VARCHAR(100),
    Città VARCHAR(50),
    Indirizzo VARCHAR(100),

    PRIMARY KEY (ID)
)ENGINE=InnoDB;

CREATE TABLE Bicicletta (
    ID INT AUTO_INCREMENT,
    Modello VARCHAR(50),
    Targa VARCHAR(20),
    StatoBatteria INT CHECK (StatoBatteria BETWEEN 0 AND 100),
    StatoBicicletta VARCHAR(20) CHECK (StatoBicicletta IN ('Disponibile', 'In Riparazione', 'Non Disponibile')),
    Longitudine DECIMAL(9,6) CHECK (Longitudine BETWEEN -180.0 AND 180.0),
    Latitudine DECIMAL(9,6) CHECK (Latitudine BETWEEN -90.0 AND 90.0),
    IDStazione INT,

    PRIMARY KEY (ID),
    FOREIGN KEY (IDStazione) REFERENCES Stazione(ID)
)ENGINE=InnoDB;

CREATE TABLE Prenotazione (
    ID INT AUTO_INCREMENT,
    IDCliente VARCHAR(16),
    IDBicicletta INT,
    DataPrenotazione DATETIME,
    DataInizioPrenotazione DATETIME,
    DataFinePrenotazione DATETIME,
    StazionePartenza INT, 
    StazioneArrivo INT,

    PRIMARY KEY (ID),
    FOREIGN KEY (IDCliente) REFERENCES Cliente(CodiceFiscale),
    FOREIGN KEY (IDBicicletta) REFERENCES Bicicletta(ID),
    FOREIGN KEY (StazionePartenza) REFERENCES Stazione(ID),
    FOREIGN KEY (StazioneArrivo) REFERENCES Stazione(ID)
)ENGINE=InnoDB;

CREATE TABLE Spostamento (
    ID INT AUTO_INCREMENT,
    IDPrenotazione INT,
    PartenzaID INT,
    ArrivoID INT,
    DataOraInizio DATETIME,
    DataOraFine DATETIME,
    StazionePartenza INT, 
    StazioneArrivo INT,

    PRIMARY KEY (ID),
    FOREIGN KEY (IDPrenotazione) REFERENCES Prenotazione(ID),
    FOREIGN KEY (StazionePartenza) REFERENCES Stazione(ID),
    FOREIGN KEY (StazioneArrivo) REFERENCES Stazione(ID)
)ENGINE=InnoDB;

-- Tabella per tracciare la posizione delle biciclette
-- Tabella diciamo in più per avere una cronologia dei tracciamenti per ogni bicicletta, rispetto alla tabella Spostamento che tiene traccia di un singolo spostamento
CREATE TABLE Tracciamento (
    ID INT AUTO_INCREMENT,
    IDBicicletta INT,
    Data DATETIME,
    Longitudine DECIMAL(9,6) CHECK (Longitudine BETWEEN -180.0 AND 180.0),
    Latitudine DECIMAL(9,6) CHECK (Latitudine BETWEEN -90.0 AND 90.0),

    PRIMARY KEY (ID),
    FOREIGN KEY (IDBicicletta) REFERENCES Bicicletta(ID)
)ENGINE=InnoDB;
