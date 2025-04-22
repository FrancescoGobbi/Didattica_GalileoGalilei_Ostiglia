-- a) Elenco dei film proiettati, ordinato alfabeticamente per titolo
SELECT DISTINCT f.NomeFilm
FROM Film f, Proiezione p
WHERE f.ID = p.IDFilm
ORDER BY f.NomeFilm;


-- b) Classifica degli spettatori per numero di prenotazioni (dal più attivo)
SELECT s.CodiceFiscale, s.Nome, s.Cognome, COUNT(*) AS NumPrenotazioni
FROM Spettatore s, Prenotazione pr
WHERE s.CodiceFiscale = pr.IDSpettatore
GROUP BY s.CodiceFiscale, s.Nome, s.Cognome -- raggruppiamo per spettatore, prendo tutti i campi che vogliamo nell'output
ORDER BY NumPrenotazioni DESC;


-- c) Numero di proiezioni effettuate per ciascun film
-- Con il join, fatto con il where, escludiamo i film che non hanno proiezioni
SELECT f.NomeFilm, COUNT(p.ID) AS NumProiezioni
FROM Film f, Proiezione p
WHERE f.ID = p.IDFilm
GROUP BY f.NomeFilm;
