#define HEADER_H_INCLUDED

struct prodotto{                        //creiamo una scruct per poter gestire in maniera tabellare tutti i prodotti del magazzino
    int codice;                         //ogni prodotto è identificato da un codice
    char nome[20];                      //da un nome che trattiamo come un array di caratteri (stringa)
    char specifica[50];                 //da una specifica (caratteristica del prodotto) trattata come stringa
    int scorta;                         //da una scorta
    float costo;                        //dal costo

};
typedef struct prodotto Prodotto;       //l'uso dell'istruzione typedef e del tipo struttura consente di creare un nuovo tipo di dato
                                        //il nuovo dato Prodotto potrà essere utilizzato nel corso del programma
void visualizza_prodotti(Prodotto []);  //function che stampa la struttura iniziale del magazzino, dunque ogni campo della struttura
void scorta(Prodotto[]);                //function che calcola la scorta restate per ogni prodotto, in base alle vendite
void scelta_utente(int, Prodotto []);   //function che consente all'utente di scegliere quale operazione svolgere
void sotto_scorta(Prodotto[]);          //function che riporta i prodotti (e le le loro carattertiche) sotto scorta (prodotti minori di 5)
void ordinamento(Prodotto[]);           //function che ordina in maniera crescente i prodotti(da quelli più venduti a quelli meno venduti)
void classifica(Prodotto []);           //stampa la classifica derivante dall'ordinamento
