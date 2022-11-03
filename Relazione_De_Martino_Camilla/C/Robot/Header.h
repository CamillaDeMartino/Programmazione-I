#define HEADER_H_INCLUDED

int caselle_destra(char [][16], int , int );                     //contare le caselle disponibili a destra
int caselle_sinistra(char [][16], int , int );                   //contare le caselle disponibili a sinistra
int caselle_avanti(char [][16], int , int );                     //contare le caselle disponibili in avanti
int caselle_indietro(char [][16], int , int );                   //contare le caselle disponibili indietro
void massimo_caselle(char [][16], int *, int *, int *, int *);   //determinare quale direzione presenta il numero di caselle maggiori
void movimento_casuale(char [][16], int *, int *,int *);         //indicare la probabilità del 30% o 70%
void movimento_30(char[][16],int *, int *, int *);               //probabilità del 30%
void movimento_70(char [][16], int *, int *, int *);             //probabilità del 70%
int direzioni_uguali(int , int [] , int * );                     //verificare la presenza di più direzioni massime
int casuale_massimo(int, int [] ,int * );                        //sceglire una direzione casuale tra quelle con uno stesso massimo
int selezione_massimo(int [], int );                             //associare il massimo alla direzione corrispondente
int associa_massimo( int , int , int [], int );                  //controllare se una sola direzione è uguale al massimo e verificarne la percorribilità


