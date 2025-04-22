-- 1) Distributore
INSERT INTO Distributore (NomeDistributore, NascitaDistributore, EmailDistributore, NumeroDistributore) VALUES
  ('Universal Pictures',  '1912-06-08', 'info@universal.it',       '+39 06 12345678'),
  ('Warner Bros.',        '1923-04-04', 'contact@warner.it',       '+39 02 87654321'),
  ('Paramount Pictures',  '1912-05-08', 'paramount@film.it',       '+39 011 3456789'),
  ('Sony Pictures',       '1929-05-08', 'sony@pictures.it',        '+39 051 2345678'),
  ('20th Century Fox',    '1935-06-14', 'fox@20th.it',             '+39 041 9876543');


-- 2) Film (10 titoli, distribuiti fra i 5 distributori)
INSERT INTO Film (NomeFilm, Categoria, DataUscita, Durata, Descrizione, IDDistributore) VALUES
  ('Jurassic Park',   'Avventura',    '1993-06-11', 127, 'Un parco a tema con dinosauri clonati',              1),
  ('Inception',       'Fantascienza', '2010-07-16', 148, 'Un ladro che ruba segreti nei sogni',               2),
  ('Forrest Gump',    'Drammatico',   '1994-07-06', 142, 'La vita di Forrest Gump attraverso decenni',        3),
  ('The Matrix',      'Fantascienza', '1999-03-31', 136, 'La scoperta della realtà simulata',                 2),
  ('Avatar',          'Fantascienza', '2009-12-18', 162, 'Missione sul pianeta Pandora',                      4),
  ('Titanic',         'Drammatico',   '1997-12-19', 195, 'Storia d’amore sul tragico transatlantico',        3),
  ('Il Padrino',      'Crimine',      '1972-03-24', 175, 'La famiglia mafiosa Corleone',                     3),
  ('Interstellar',    'Fantascienza', '2014-11-07', 169, 'Viaggio attraverso buchi neri',                     2),
  ('Gladiator',       'Storico',      '2000-05-05', 155, 'Un generale romano vendica la famiglia',           1),
  ('La La Land',      'Musical',      '2016-12-09', 128, 'Amore e sogni a Los Angeles',                      4);


-- 3) Proiezione (3 appuntamenti per ciascun film → 30 righe)
INSERT INTO Proiezione (DataProiezione, OraProiezione, IDFilm) VALUES
  -- Jurassic Park (IDFilm = 1)
  ('2025-05-01','11:00:00',1), ('2025-05-01','18:30:00',1), ('2025-05-02','20:45:00',1),
  -- Inception (2)
  ('2025-05-01','14:00:00',2), ('2025-05-03','16:30:00',2), ('2025-05-04','21:00:00',2),
  -- Forrest Gump (3)
  ('2025-05-02','11:30:00',3), ('2025-05-03','19:00:00',3), ('2025-05-05','20:00:00',3),
  -- The Matrix (4)
  ('2025-05-02','13:00:00',4), ('2025-05-04','17:30:00',4), ('2025-05-06','22:00:00',4),
  -- Avatar (5)
  ('2025-05-03','10:00:00',5), ('2025-05-05','15:00:00',5), ('2025-05-06','19:45:00',5),
  -- Titanic (6)
  ('2025-05-03','12:30:00',6), ('2025-05-07','18:00:00',6), ('2025-05-07','21:30:00',6),
  -- Il Padrino (7)
  ('2025-05-04','14:15:00',7), ('2025-05-08','20:00:00',7), ('2025-05-09','22:15:00',7),
  -- Interstellar (8)
  ('2025-05-04','16:45:00',8), ('2025-05-09','19:00:00',8), ('2025-05-10','21:00:00',8),
  -- Gladiator (9)
  ('2025-05-05','11:00:00',9), ('2025-05-10','18:30:00',9), ('2025-05-10','20:45:00',9),
  -- La La Land (10)
  ('2025-05-06','14:00:00',10),('2025-05-08','17:00:00',10),('2025-05-09','19:30:00',10);


-- 4) Spettatore (10 utenti)
INSERT INTO Spettatore (CodiceFiscale, Nome, Cognome, NumeroTelefono, Email) VALUES
  ('RSSMRA85T10H501U','Maria',     'Rossi',       '+39 3471234567','maria.rossi@example.com'),
  ('BNCLNZ90A01F205X','Lorenzo',   'Bianchi',     '+39 3487654321','lorenzo.bianchi@test.it'),
  ('VRDLGI78B22C573Y','Luigi',     'Verdi',       '+39 3495556667','luigi.verdi@mail.it'),
  ('PLLMRT92C15D345Q','Alessandra','Poli',        '+39 3331112222','alessandra.poli@libero.it'),
  ('MRNLCD88L54F892R','Carlo',     'Marinelli',   '+39 3344445555','carlo.marinelli@its.it'),
  ('GPTRCF75S12A123P','Federico',  'Gasperini',   '+39 3356667777','federico.gasperini@prova.it'),
  ('LMBRND91E22B789T','Beatrice',  'Lombardi',    '+39 3368889999','beatrice.lombardi@mail.com'),
  ('CNTGPU89M03C012A','Antonio',   'Conti',       '+39 3370001111','antonio.conti@mail.com'),
  ('FRNDTN95R17D456B','Stefania',  'Ferrandina',  '+39 3382223333','stefania.ferrandina@test.com'),
  ('ZPCNDR87G05C678X','Davide',    'Zappacosta',  '+39 3394445555','davide.zappacosta@example.it');


-- 5) Prenotazione (~50 righe di esempio)
INSERT INTO Prenotazione (PostiSelezionati, IDProiezione, IDSpettatore) VALUES
  (2,  1, 'RSSMRA85T10H501U'), (4,  2, 'BNCLNZ90A01F205X'),
  (1,  3, 'VRDLGI78B22C573Y'), (3,  4, 'PLLMRT92C15D345Q'),
  (2,  5, 'MRNLCD88L54F892R'), (5,  6, 'GPTRCF75S12A123P'),
  (1,  7, 'LMBRND91E22B789T'), (2,  8, 'CNTGPU89M03C012A'),
  (3,  9, 'FRNDTN95R17D456B'), (2, 10, 'ZPCNDR87G05C678X'),
  (1, 11, 'RSSMRA85T10H501U'), (2, 12, 'BNCLNZ90A01F205X'),
  (1, 13, 'VRDLGI78B22C573Y'), (4, 14, 'PLLMRT92C15D345Q'),
  (3, 15, 'MRNLCD88L54F892R'), (2, 16, 'GPTRCF75S12A123P'),
  (1, 17, 'LMBRND91E22B789T'), (5, 18, 'CNTGPU89M03C012A'),
  (2, 19, 'FRNDTN95R17D456B'), (3, 20, 'ZPCNDR87G05C678X'),
  (2, 21, 'RSSMRA85T10H501U'), (4, 22, 'BNCLNZ90A01F205X'),
  (1, 23, 'VRDLGI78B22C573Y'), (3, 24, 'PLLMRT92C15D345Q'),
  (2, 25, 'MRNLCD88L54F892R'), (1, 26, 'GPTRCF75S12A123P'),
  (3, 27, 'LMBRND91E22B789T'), (2, 28, 'CNTGPU89M03C012A'),
  (4, 29, 'FRNDTN95R17D456B'), (1, 30, 'ZPCNDR87G05C678X'),
  (1,  1, 'RSSMRA85T10H501U'), (2,  2, 'VRDLGI78B22C573Y'),
  (3,  3, 'PLLMRT92C15D345Q'), (4,  4, 'MRNLCD88L54F892R'),
  (2,  5, 'GPTRCF75S12A123P'), (1,  6, 'LMBRND91E22B789T'),
  (3,  7, 'CNTGPU89M03C012A'), (2,  8, 'FRNDTN95R17D456B'),
  (5,  9, 'ZPCNDR87G05C678X'), (1, 10, 'RSSMRA85T10H501U');
