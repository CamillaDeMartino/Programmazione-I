#ifndef PROTOTIPI_H_INCLUDED
#define PROTOTIPI_H_INCLUDED

void conta_lettere(char a[], int *, int *, int *);
int massimo_righe (int a[][100], int n, int m, int massimo [10]);
void legge_da_tastiera(int a[][100], int, int );
int conta_mannagg( char *testo);
float media_array( float v[], int );
void sostituisci(float a[], int n_a, float b[], int n_b);
void fusione_array(int a[], int n_a, int b[], int n_b, int c[]);
void fusione_media ( int a[], int n_a, int b[], int n_b, int c[], int *media);
void somma_righe_colonne(int a[][100], int n , int m, int b[], int c[]);

int conta_are(char *testo);
int conta_c(int x);
void sostituire_carattere ( char testo[], char testo2[]);

void legge_da_tastiera_aD(double a[], int n);
void ord_inser(int a[], int n);
int secondo_massimo(int a[], int );
int massimo_somme(double a[][100], int n, int m);
void legge_da_tastiera_2D(int v[][100], int n, int m);
void numero_elementi(int a[][100], int n, int m, int chiave, int b[], int *n_b);

#endif // PROTOTIPI_H_INCLUDED
