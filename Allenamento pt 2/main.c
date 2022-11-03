#include <stdio.h>
#include "Prototipi.h"
#include <string.h>
/*void legge_array(int a[], int );
void quadrato(int a[], int , int b[]);
void cubo (int a[],int, int c[] );

int main()
{

Scrivere un programma che legge una sequenza di n interi e li memorizza in una array a,
ne calcola il quadrato di ciascuno e lo memorizza in una array b,
ne calcola il cubo, memorizzandolo in una array c,
infine visualizza il contenuto di b e di c

int a[100], b[100], c[100];
int i,n;
printf ( "Quanti elementi vuoi inserire?: ");
scanf("%d", &n);

legge_array(a,n);

quadrato(a,n,b);

for(i = 0; i < n; i++)
    printf ( "Il %d-simo al quadrato e': %d\n", i, b[i]);

cubo(a,n,c);

for(i = 0; i < n; i++)
    printf ( "Il %d-simo al cubo e': %d\n", i, c[i]);


return 0;
}

void legge_array(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf( "Inserisci l'elemento %d-simo: ",i );
        scanf("%d", &a[i]);
    }
}

void quadrato(int a[], int n, int b[])
{
    int i;
    for (i = 0; i < n; i++)
    {
        b[i] = a[i]*a[i];
    }
}

void cubo(int a[], int n, int c[] )
{
    int i;
    for (i = 0; i < n; i++)
    {
        c[i] = a[i]*a[i]*a[i];
    }
}
*/


/*Scrivere un programma in linguaggio C che riceve in ingresso una sequenza di N numeri
interi. I numeri sono memorizzati in un vettore. Il valore N è inserito dall’utente, ma il
vettore può contenere al massimo 30 numeri. Terminato l’inserimento della sequenza di
numeri, il programma deve verificare se gli elementi del vettore sono tutti uguali tra loro.
*/
/*
void legge_da_tastiera(int v[], int);
int uguali(int v[], int n);

int main ()
{

  int n, a[30];

  printf ( "Inserisci il size dell'array (<30): " );
  scanf("%d", &n);

legge_da_tastiera(a,n);

if ( uguali(a,n) )
    printf ( "Gli elementi sono uguali\n" );
else
{printf( "Gli elementi sono divesri\n" );}

    return 0;
}

void legge_da_tastiera(int v[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf ("Inserire l'%d-simo elemento: ", i);
        scanf("%d", &v[i]);
    }
}

int uguali(int v[], int n)
{
    int i, uguali = 1;

    for( i = 1; i < n; i++)
    {

        if(v[i] != v[i-1] )
             uguali = 0;
      }

        return uguali;
}

*/

/*Scrivere un programma in linguaggio C che riceve in ingresso una sequenza di N numeri
interi. I numeri sono memorizzati in un vettore. Il valore N è inserito dall’utente, ma
il vettore può contenere al massimo 30 numeri. Terminato l’inserimento della sequenza
di numeri, il programma deve verificare se il vettore contiene una sequenza di numeri
ordinata in modo strettamente crescente*/
/*
void legge_da_tastiera(int v[], int );
int array_ordinato(int v[], int);

int main ()
{
    int n, a[30];

    printf( "Inserisci il size dell'array (<30): " );
    scanf("%d", &n);

    legge_da_tastiera(a,n);

    if (array_ordinato(a,n))
        printf ( "Array ordinato\n" );
    else
        printf ( "Array non ordinato\n" );

    return 0;
}

void legge_da_tastiera(int v[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf ("Inserire l'%d-simo elemento: ", i);
        scanf("%d", &v[i]);
    }
}

int array_ordinato(int v[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if(v[i] < v[i+1])
            return 1;
            else
                return 0;
    }
}
*/

/*Scrivere un programma in linguaggio C che legge N numeri interi da tastiera e li memorizza in un vettore. Il numero N viene inserito dall’utente ed è minore di 20. Il programma
deve generare un secondo vettore che compatta i numeri contenuti nel primo vettore. In
particolare:
• ogni numero che compare ripetuto nel primo vettore, deve comparire una sola volta
nel secondo vettore
• ogni numero uguale a zero presente nel primo vettore non deve comparire nel secondo
vettore*/

/*void legge_da_tastiera(int a[], int );
void compattare(int a[], int n, int b[], int *);

int main ()
{

    int n;
    printf("Inserire la lunghezza dell' array: ");
    scanf("%d",&n);
    int a[20];
    int b[n];
    int i,i_b;

    legge_da_tastiera(a,n);

    compattare(a,n,b,&i_b);

    for (i = 0; i < i_b; i++)
    {
        printf("Elemento %d e' %d\n", i, b[i]);
    }

    return 0;
}
    void legge_da_tastiera(int a[], int n)
    {
        int i;
        for (i = 0; i < n; i++)
    {
        printf("Inserisci l' %d-simo elemento ", i );
        scanf("%d", &a[i]);
    }
    }

    void compattare (int a[], int n, int b[], int *i_b)
{
    int flag,j;
    int i=0;
    *i_b = 0;
    if (a[i]!=0)
    {
        b[*i_b] = a[i];
        (*i_b)++;
    }

    for (i=1; i<n; i++)
    {
        flag = 0;
        for (j = 0; j < i; j++) {
            if (a[i] == a[j] || a[i]==0)
            {
                flag = 1;
            }
        }
        if (flag ==0)
        {
            b[*i_b] = a[i];
            (*i_b)++;
        }
    }

}*/

/*Scrivere un programma che crei un array di 9 interi forniti dall’utente e
determini (se c’e’) la posizione del primo elemento che e’ minore della
somma degli elementi che lo precedono e la posizione del primo elemento
che e’ minore della somma degli elementi che lo seguono. */

/*
void legge_da_tastiera(int a[], int);
int array_min(int a[], int n);
int array_min2(int a[], int n);
int main ()
{
   int a[9];
   int n = 9, indice_prec, indice_succ;

  legge_da_tastiera(a,n);

  indice_prec = array_min(a,n);

  printf ( "L'indice piu' piccolo della somma dei n precedenti e': %d\n", indice_prec );

  indice_succ = array_min2(a,n);

  printf ( "L'indice piu' piccolo della somma dei n successivi e': %d\n", indice_succ );
    return 0;
}


void legge_da_tastiera(int a[], int n)
    {
        int i;
        for (i = 0; i < n; i++)
    {
        printf("Inserisci l' %d-simo elemento ", i );
        scanf("%d", &a[i]);
    }
    }


int array_min(int a[], int n)
{
    int i, i_prec = -1, somma = 0;
    for (i = 1; i < n; i++)
    {
        if (a[i] < somma)
        {
             i_prec = i;
             return i_prec;
        }
        somma += a[i];
    }

}

int array_min2(int a[], int n)
{
    int ind_succ = -1 , sum = 0, i;

    for( i = n-1 ; i >= 0; i--)
    {

        if(a[i] < sum)
        {ind_succ = i;
            sum += a[i];
        }
    }

    if ( ind_succ >= 0)
        return ind_succ;
}
*/

int main ()
{
/*
Scrivere un programma in linguaggio C che legga una frase introdotta da tastiera. La
frase è terminata dall’introduzione del carattere di invio. La frase contiene sia caratteri
maiuscoli che caratteri minuscoli, e complessivamente al più 100 caratteri. Il programma
dovrà stampare su schermo le seguenti informazioni:
• per ognuna delle lettere dell’alfabeto, il numero di volte che la lettera compare nella
stringa
• il numero di consonanti presenti nella stringa
• il numero di vocali presenti nella stringa.
*/
/*char testo[100];
int  n_lettere, n_consonanti, n_vocali;

printf ( "Inserisci il testo: " );
gets(testo);

conta_lettere(testo, &n_lettere, &n_consonanti, &n_vocali);
printf( "Il testo contiene\nNumero di lettere: %d\nConsonanti: %d\nVocali: %d\n", n_lettere, n_consonanti, n_vocali );
*/

/*//sviluppa una function che prende in input una stringa di un testo e rstituisce in output le parole con tre lettere

char testo [100];

printf( "Inserire testo : " );
gets(testo);

printf( "Le parole sono: %d\n", conta_mannagg(testo) );
*/


/*//conta il massimo di vocali

char testo[100];
printf( "Inserisci il testo: " );
gets(testo);

printf( "Parole che terminano in are sono %d\n", conta_are(testo));
*/


/*//conta consonanti

char testo[100];

printf ( "Inserire il testo: ");
gets(testo);

printf( "Il numero massimo di consonanti e' %d\n", conta_consonanti(testo));

*/

/*Scrivere un programma in linguaggio C che legga una frase introdotta da tastiera. La frase
è terminata dall’introduzione del carattere di invio e contiene complessivamente al più 100
caratteri. Il programma deve svolgere le seguenti operazioni:
• visualizzare la frase inserita
• costruire una nuova frase in cui tutte le occorrenze del carattere ’.’ sono sostituite
con il carattere di ritorno di linea ’\n’. Il programma deve memorizzare la nuova
frase in una opportuna variabile
• visualizzare la nuova frase.*/

/*char testo[100];
char testo_nuovo[200];
int i;
printf( "Inserisci il testo:\n" );
gets(testo);

printf("Nuovo testo\n");

sostituire_carattere(testo,testo_nuovo);
*/

/*Scrivere un programma che acquisisce da tastiera una sequenza di 10 interi,
li memorizza in un array e,infine,
ordina gli elementi contenuti nell’array */

/*int a[100];
int i, n;

printf( "Inserisci il size dell'array: " );
scanf("%d", &n);

legge_da_tastiera_aD(a,n);

printf( "Array ordinato\n" );
ord_inser(a,n);

for(i = 0; i < n; i++)
{
    printf( "%d", a[i]);
}

*/


/*viluppare una function C che, dati come parametri di input un array di int e il suo
size, determina e restituisce come parametro di output il secondo più grande
elemento dell’array (N.B.: non bisogna seguire l’idea di ordinare prima l’array)*/

/*
int a[] = {6, 1, 2, 3, 4, 5};
int n = 6;

printf( "Il secondo numero piu' grande e': %d\n", secondo_massimo(a,n) );
*/


/*Sviluppare una function C che, dati come parametri di input un array 2D di double,
il numero delle righe e il numero delle colonne, determina e restituisce come parametro di output
 il massimo tra le somme degli elementi di ogni colonna*/

double a[100][100];
int n,m;

printf( "Inserisci il numeri di righe: " );
scanf("%d", &n);
printf( "Inserisci il numero di colonne: " );
scanf("%d", &m);

legge_da_tastiera_2D(a,n,m);

printf( "La somma massima tra colonne e' %d\n", massimo_somme(a,n,m) );

/*
int a[100][100], b[100];
int n, m, i, n_b, chiave;

printf( "Inserisci il numero di righe: " );
scanf("%d", &n);
printf( "Inserisci il numero di colonne: " );
scanf("%d", &m);

legge_da_tastiera_2D(a,n,m);

 printf( "\nInserisci la chiave da ricercare: " );
 scanf("%d", &chiave);

 numero_elementi(a,n,m,chiave,b,&n_b);

 for ( i = 0; i < n_b; i++)
 {
     printf( "Numero di elementi nella riga %d maggiori della chiave chiave: %d\n", i+1, b[i] );
 }*/

return 0;
}
