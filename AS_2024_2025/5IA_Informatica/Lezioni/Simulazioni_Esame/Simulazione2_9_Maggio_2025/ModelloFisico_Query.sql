-- Esercizio 4a: 
-- Elenca i clienti che hanno effettuato almeno una prenotazione nell’ultima settimana, 
-- intesa la settimana odierna;
SELECT c.CodiceFiscale, c.Nome, c.Cognome
FROM Cliente AS c, Prenotazione AS p
WHERE c.CodiceFiscale = p.IDCliente
AND p.DataPrenotazione >= DATE_SUB(CURDATE(), INTERVAL 7 DAY)
GROUP BY c.CodiceFiscale -- Per non avere duplicati, raggruppiamo per cliente
ORDER BY c.CodiceFiscale;

-- Alternativa
SELECT DISTINCT c.CodiceFiscale, c.Nome, c.Cognome
FROM Cliente c, Prenotazione p
WHERE c.CodiceFiscale = p.IDCliente
AND p.DataPrenotazione >= DATE_SUB(CURDATE(), INTERVAL 7 DAY)
ORDER BY c.CodiceFiscale;


-- Esercizio 4b:
-- Per ogni stazione, visualizza il numero di biciclette attualmente disponibili;

SELECT s.NomeStazione, COUNT(*) AS NumBicicletteDisponibili
FROM Stazione AS s, Bicicletta AS b
WHERE s.ID = b.IDStazione AND b.StatoBicicletta = 'Disponibile'
GROUP BY s.ID;

-- Esercizio 4c:
-- Trova i 5 clienti che hanno effettuato il maggior numero di prenotazioni, ordinati in ordine decrescente.
SELECT c.CodiceFiscale, c.Nome, c.Cognome, COUNT(p.ID) AS NumPrenotazioni
FROM Cliente AS c, Prenotazione AS p
WHERE c.CodiceFiscale = p.IDCliente
GROUP BY c.CodiceFiscale, c.Nome, c.Cognome
ORDER BY NumPrenotazioni DESC
LIMIT 5;