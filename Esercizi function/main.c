#include <stdio.h>

//calcola la circonferenza con le function
/*float circon(float);
int main()
{
float circonferenza, raggio_main;
printf("Inserire il raggio: ");
scanf("%f",&raggio_main);
circonferenza=circon(raggio_main);
printf("Il valore della circonferenza e': %f\n", circonferenza);
}
float circon(float raggio)
{
const float pi_greco=3.1415926F;
    float risultato;
    risultato=2.0*pi_greco* raggio;
    return risultato;
}*/

/*//Area circonferenza
float area_circon(float);
int main()
{
    float area, raggio_main;
    printf("Inserisci il raggio:  ");
    scanf("%f",&raggio_main);
    area=area_circon(raggio_main);
    printf("Il valore dell'area della circonferenza e': %f\n",area);
}
float area_circon(float raggio)
{
    const float pi_greco=3.1415926F;
    float risultato;
    risultato=pi_greco*raggio*raggio;
    return risultato;

}*/

/*//area corona circolare
float area_cerchio(float);
float area_corona(float r_min, float r_magg);
int main()
{
    float raggio_m, raggio_min, area;
    printf("Inserisci il raggio maggiore: \n");
    scanf("%f",&raggio_m);
    printf("Inserisci il raggio minore: \n");
    scanf(" %f", &raggio_min);
    area=area_corona(raggio_m, raggio_min);
    printf("Il valore della corona circolare e': %f\n", area);
}
float area_cerchio(float raggio)
{
    const float pi_greco=3.1415926F;
    float risultato=pi_greco*raggio*raggio;
    return risultato;
}
float area_corona(float r_magg, float r_min)
{
return area_cerchio(r_magg)-area_cerchio(r_min);
}*/

/*//Valore assoluto di un numero in float
float val_ass(float);
int main()
{
float n, valore_assoluto;
printf("Inserisci un numero: ");
scanf("%f", &n);
valore_assoluto=val_ass(n);
printf("Il valore assoluto del numero %f e': %f", n, valore_assoluto);
}
float val_ass(float x)
{
if (x>=0)
    return x;
        else
        return -x;
}*/

/*//errore relativo
float errore_relativo(float, float);
float val_ass(float);
int main()
{
 float x,y, err_rel;
 printf("Inserisci un numero: \n");
 scanf("%f",&x);
 printf("inserisci un secondo numero: \n");
 scanf(" %f", &y);
 err_rel=errore_relativo(x,y);
 printf("L'errore relativo e' %f", err_rel);
}
float val_ass(float x)
{
    if (x>=0)
        return x;
    else
        return -x;

}
float errore_relativo(float x, float y)
{
return val_ass(x-y)/val_ass(x);
}*/

/*//distanza dall'origine
float dist_orig(float,float);
int main()
{
 float x, y, distanza;
 printf("Inserisci l'ascissa: ");
 scanf("%f",&x);
 printf("Inserisci l'ordinata: ");
 scanf("%f",&y);
 distanza=dist_orig(x,y);
 printf("La distanza dall'orgine e': %f", distanza);
}
float dist_orig(float x, float y)
{
    return sqrt(x*x+y*y);
}
*/


/*//area corona circolare in più file
#include "Liberia.h"
int main()
{
    float raggio_m, raggio_min, area;
    printf("Inserisci il raggio maggiore: \n");
    scanf("%f",&raggio_m);
    printf("Inserisci il raggio minore: \n");
    scanf(" %f", &raggio_min);
    area=area_corona(raggio_m, raggio_min);
    printf("Il valore della corona circolare e': %f\n", area);
}
*/

//Scrivere una funzione che abbia come parametri il prezzo di vendita e la percentuale di sconto e che restituisca il prezzo scontato.

#include "Liberia.h"
int main()
{
 /*float sconto,prezzo;
 printf("Inserire il prezzo: \n");
 scanf(" %f", &prezzo);
 printf("Inserire lo sconto: \n");
 scanf(" %f", &sconto);
 printf("Sconto di %3.2f euro", prezzo_scontato(prezzo,sconto));
*/

/*int base, esponente;
printf("Inserisci la base: \n");
scanf("%d", &base);
printf("Inserisci l'esponente: \n");
scanf("%d", &esponente);
printf("La potenza e' %8.4f", potenza(base, esponente));
*/

//Scrivere una funzione che, ricevuti in ingresso due numeri interi, restituisca il valore minimo.
//Utilizzare la funzione per visualizzare il minimo di ciascuna delle seguenti coppie di valori:

/*int x,y;
printf("Inserisci due valori: \n");
scanf(" %d" " %d", &x, &y);
printf("Il valore minimo e' %d",minimo(x,y));
*/

/*//somma elementi di un array
double a[100];
int n;

printf("Dammi la dimensione dell'array (<100)\n");
scanf("%d", &n);

legge_da_tastiera(a,n);
printf ("La media degli elementi e' %d", media_aD(a,n));
*/

/*//Somma array già scritti
int a[]={ 2, 15, 1, -1, 22, 0, -2 };
int i, somma;
somma=0;
for( i=0; i<7; i++)
    somma=somma+a[i];
    printf("La somma e' %d\n", somma);
    for( i=0; i<7; i++)
        printf("L'array e' %d\n", a[i]);
*/
/*//versione con puntatori
int a[]={ 2, 15, 1, -1, 22, 0, -2 };
int i, somma;
somma=0;
for( i=0; i<7; i++)
    somma=somma_arrayI(a,7);
    printf("La somma e' %d\n", somma);
        printf("L'array e' \n");
        visualizza_aI(a,7);
*/


/*//somma elementi array da tastiera
int a[100], i,n_elementi, somma=0;
printf("Inserisci la dimensione dell'array (<=100) \n");
scanf(" %d", &n_elementi);
for (i=0; i<n_elementi; i++){
printf("Inserisci l'%d-esimo elemento ",i);
scanf("%d", &a[i]);
somma=somma_arrayI(a,n_elementi);}
printf("La somma degli element e' %d\n", somma);
printf("L'array e' \n ");
visualizza_aI(a,n_elementi);
*/

/*//Massimo elemento array
int a[]= {2, 15, 1, -1, 22, 0, -2};

printf("L'elemento massimo e' %d\n", massimo_array(a,7));
printf("l'array e' \n");
visualizza_aI(a,7);
*/

/*//Minimo elementi array
int a[]= {2, 15, 1, -1, 22, 0, -2};
printf("L'elementi minimo e' %d\n", minimo_array(a,7));
printf("l'array e' \n");
visualizza_aI(a,7);
*/

/*//fattoriale per n che va da 1 a 14 sia in int che float
int n, f_int;
float f_float;
printf(" Valore di n     fattorialeI     fattorialeF\n");
for(n=1; n<=14; n++)
{
    f_int=fattorialeI(n);
    f_float=fattorialeF(n);
    printf("%7d %15d %15.0f \n", n, f_int, f_float);
}*/

//max e min contemporaneamente

/*int a[100], massimo, minimo, n_elementi;
printf(" Inserire il numero di elementi (<=100): \n");
scanf("%d", &n_elementi);
legge_da_tastiera(a, n_elementi);
max_min_arrayI(a,n_elementi, &massimo, &minimo);
printf("Il massimo degli elementi e': %d\n", massimo);
printf("Il minimo degli elementi e': %d\n", minimo);
printf("L'array e' \n");
visualizza_aI(a,n_elementi);
*/

/*//massimo e indice array
float a[] = {1.0F, 0.0F, 5.8F, 3.0F},max;;
int n = 4, i_max;
max_val_ind(a,n, &max, &i_max);
printf("Il massimo e' %.2f in posizione %d\n ", max, i_max);
*/

/*//massimo e indice array per selezione
float a[] = {1.0F, 0.0F, 5.8F, 3.0F, 10.0F, 0.0F, 8.0F, 4.8F},max;
int n = 3, i_max; //sto considerando solo una porzione
max_val_ind(&a[3],n, &max, &i_max); //porzione a partire dal terno elemento
printf("Il massimo e' %.2f in posizione %d\n ", max, i_max);
*/

/*//versione alternativa
float a[] = {1.0F, 0.0F, 5.8F, 3.0F, 10.0F, 0.0F, 8.0F, 4.8F},max;
int i_max;
int i_in = 2; //voglio partire dal primo  indice
int i_fin = 9; // voglio fermarmi al terzo indice
max_val_ind(&a[i_in], i_fin-i_in, &max, &i_max); //parto dall'indice scelto
printf("Il massimo e' %.2f in posizione %d\n ", max, i_in+ i_max);
*/

/*//Algoritmo di fusione versione alternativa usando un while
int i;
char a[] = {'a', 'b', 'f', 'g'};
int n_a = 4;
char b[] = {'c', 'd', 'h', 'i', 'z'};
int n_b = 5;
char c[n_a + n_b];

fusioneC(a, n_a, b, n_b, c);

for (i=0; i < n_a + n_b; i++)
    printf("\n il carattere %d - %c", i, c[i]);

    */

/*//Uguaglianza array
int i;
char a[] = {'a', 'b', 'f', 'g'};
int n = 4;
char b[] = {'c', 'd', 'h', 'i'};
if (uguaglianza_arrayC(a,b,n))
    printf ("\n gli arrai sono uguali");
else
    printf ("\n gli array sono diversi");

*/

/*//Matrici: media di ogni riga
double A[100][100], media_riga[100];
int m,n ;
printf("Inserisci il numero di righe (<= 100): ");
scanf ("%d", &m);
printf("Inserisci il numero di colonne (<= 100): ");
scanf ("%d", &n);

//legge_da_tastiera_a2D(A, m ,n );
//calcola_media_righe_a2D(A, m, n, media_riga);

visualizza_aI(media_riga, m);
//con puntatori
legge_da_tastiera_ap2D(&A[0][0], 100, m ,n );
calcola_media_righe_ap2D(&A[0][0], 100, m , n, media_riga);
visualizza_aI(media_riga, m);

printf("\n");
*/

/*//best matching
int indice_bm, i;
char mio_testo[50], mia_chiave[20];

printf("inserire il testo: ");
gets(mio_testo);

printf("inserire la chiave: ");
gets(mia_chiave);


indice_bm = matching_migliore(mia_chiave, mio_testo);

puts("Risultato del best matching\n");
printf("inizio sottostringa :%d\n sottostringa di best matching: ", indice_bm);

for(i=0; i< strlen(mia_chiave); i++)  //l'indice che ritorna della sottostringa
    putchar(mio_testo[indice_bm+i]);  //dall'indice del best matching ci spostiamo di i per stampare tuttta la sottostringa
*/

/*//conta il numero di caratteri e parole
char testo [100], i; //separatori[] = {' ', '\n', '\t', '\0'}, *token;
int numero_caratteri, numero_parole, numero_linee;

printf("Inserire il testo:\n");
 i=0;
  while ((testo[i] = getchar()) != EOF )
    i++;
  testo[i] = '\0';  //per uscire premi ctrlz e poi invio

conta_tutto(testo, &numero_caratteri, &numero_parole, &numero_linee);

printf ("conta_tutto:\n numero caratteri= %d\n numero di parole = %d\n numero di linee=%d\n", numero_caratteri, numero_parole, numero_linee);
*/

/*//elenco su stringhe ordinamento

int n, i;
char elenco[][50] = {"pippo", "paperino", "pluto", "gastone", "archimede"};
n = 5;

printf ( "Elenco non ordinato \n");

for (i = 0; i < n; i++)
{
    printf("%s \n", elenco[i]);
}
ord_sel_max_S( elenco,n);

printf ("Elenco ordinato\n");

for (i = 0; i<n; i++)
{
    printf("%s \n", elenco[i]);
}
*/



//elenco di puntatori a caratteri
int n, i;
char *elenco[] = {"pippo", "paperino", "pluto", "gastone", "archimede"};
n = 5;

printf ( "Elenco non ordinato \n");

for (i = 0; i < n; i++)
{
    printf("%s \n", elenco[i]);
}
ord_sel_max_Sp( elenco,n);

printf ("Elenco ordinato\n");

for (i = 0; i<n; i++)
{
    printf("%s \n", elenco[i]);
}
}




