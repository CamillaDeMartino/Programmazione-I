#ifndef LIBERIA_H_INCLUDED
#define LIBERIA_H_INCLUDED
#include <string.h>

float area_cerchio(float);
float area_corona(float, float);
float prezzo_scontato(float, float);
float potenza(int, int);
int minimo(int, int);
 void legge_da_tastiera(double[], int);
 double somma_aD(double[], int);
 double media_aD(double [], int);
 void visualizza_aI(double [], int);
int somma_arrayI(int[], int);
 int massimo_array(int[], int);
 int minimo_array(int[], int);
 int fattorialeI(int);
 float fattorialeF(int);
void max_min_arrayI(int [], int, int *, int *);
 void max_val_ind(float [], int, float *, int *);
 void fusioneC (char [], int, char [], int, char[]);
 int uguaglianza_arrayC(char [], char[], int);
 void legge_da_tastiera_a2D(double[][100], int, int);
 void calcola_media_righe_a2D(double [][100], int, int, double[]);

 void legge_da_tastiera_ap2D(double *, int, int, int);
 void calcola_media_righe_ap2D(double *, int, int, int, double[]);
 //stringhe
 int matching_migliore(char *, char *);
 int punteggio_matching(char *, char *, int);

 void conta_tutto(char *, int *, int *, int *);
 int conta_tutto_strtok (char *);

 //ordinamento
 void ord_sel_max( char a[], int);
 void max_val(char a[], int);

 void scambiare_c(char *, char *);

 void ord_sel_max_S( char[][50], int);
 void scambiare_S(char *, char *);
 int max_val_S(char[][50], int);

 void ord_sel_max_Sp(char *elenco[], int n);
 int max_val_Sp(char *a[], int n);
 void scambiare_Sp(char **a, char **b);



#endif // LIBERIA_H_INCLUDED
