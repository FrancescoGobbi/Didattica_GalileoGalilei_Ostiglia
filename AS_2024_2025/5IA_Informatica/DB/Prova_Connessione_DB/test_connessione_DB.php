<?php
$servername = "localhost";
$username = "root";
$password = "root"; // La password di default di MAMP
$dbname = "mio_primo_db";

// Crea la connessione
$conn = new mysqli($servername, $username, $password, $dbname);

// Controlla la connessione
if ($conn->connect_error) {
    die("Connessione fallita: " . $conn->connect_error);
}
echo "Connessione al database avvenuta con successo!";
?>
