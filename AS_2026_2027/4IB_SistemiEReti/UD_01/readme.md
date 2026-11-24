### Unità Didattica 01 — Architetture di rete e indirizzamento IPv4

**Classe 4IB · Sistemi e Reti · Anno scolastico 2026/2027**

L’unità descrive come le reti organizzano la comunicazione e come gli indirizzi IPv4 identificano reti e host. Dallo studio dei modelli a livelli si passa al calcolo degli indirizzi e alla suddivisione di una rete in sottoreti.

Argomenti dell’unità:

- [X] Host, client e server; architetture, protocolli, standard, servizi e interfacce.
- [X] Modello ISO/OSI e architettura TCP/IP: funzioni dei livelli e principali protocolli.
- [X] PDU, incapsulamento e instradamento; ruolo degli indirizzi MAC, IP e delle porte.
- [X] Struttura IPv4, classi storiche, indirizzi pubblici, privati e speciali.
- [X] Prefissi CIDR, netmask e operazione AND per individuare la rete.
- [X] Indirizzi di rete e broadcast, intervalli degli host e scelta del gateway.
- [X] Subnetting FLSM: bit di sottorete, nuova maschera e calcolo dei blocchi.
- [X] Messa in AND con la maschera del mittente, forwarding diretto e indiretto, ruolo di ARP e della forwarding table.
- [ ] Piano di indirizzamento, sovrapposizione dei blocchi CIDR e strumenti IPAM e Whois.

Organizzazione dei materiali:

- **Lezioni e schema risolutivo in PDF**: sono presenti direttamente in questa cartella e sviluppano la teoria con esempi guidati.
- **[Esercizi](Esercizi/)**: contiene le esercitazioni in PDF per applicare i concetti dell’indirizzamento IPv4.

Materiale disponibile:

- **[4IB_SistemiEReti_UD01_L1_ArchitettureRete.pdf](4IB_SistemiEReti_UD01_L1_ArchitettureRete.pdf)**: architetture, protocolli e standard; modelli OSI e TCP/IP, servizi dei livelli, PDU e incapsulamento; esempio del percorso di una richiesta web attraverso i router.
- **[4IB_SistemiEReti_UD01_LX_IP01.pdf](4IB_SistemiEReti_UD01_LX_IP01.pdf)**: struttura degli indirizzi IPv4, classi storiche e intervalli speciali; indirizzi pubblici e privati, CIDR, netmask e operazione AND; calcolo di rete, broadcast e indirizzi utilizzabili.
- **[4IB_SistemiEReti_UD01_LX_IP02.pdf](4IB_SistemiEReti_UD01_LX_IP02.pdf)**: subnetting a maschera fissa (FLSM), distinzione tra Net-ID, Subnet-ID e Host-ID; esempio guidato di suddivisione di una rete /24 in quattro sottoreti /26.
- **[4IB_SistemiEReti_UD01_LX_IP03.pdf](4IB_SistemiEReti_UD01_LX_IP03.pdf)**: messa in AND per capire se due host sono nella stessa subnet; forwarding diretto e indiretto passo per passo con ARP, default gateway e forwarding table; le sei fasi del piano di indirizzamento sull’esempio 192.168.10.0/24, sovrapposizione dei blocchi CIDR, strumenti IPAM e Whois, esercizi con soluzioni.

- **[4IB_SistemiEReti_EserciziIP_SchemaRisolutivo.pdf](4IB_SistemiEReti_EserciziIP_SchemaRisolutivo.pdf)**: schema operativo per risolvere esercizi IPv4 con maschere predefinite di classe A, B e C, senza subnetting; rete, broadcast, intervalli, numero di host e posizione degli indirizzi, con gateway riservato all’ultimo host valido secondo la convenzione del documento.
