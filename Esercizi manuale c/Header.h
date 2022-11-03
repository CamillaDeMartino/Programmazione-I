#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

int traslazione ( float, float );
float distanza_due_punti (float, float, float, float);
void f(void);
int funzione(int, int *);
void equazioni (int, int, float *, float *);
int p(int , int );
void prelievo( int *);
void deposito (int *);

void concatenazione (char a[], int , char b[], int , char c[]);
void trasporta (int a[][10], int n, int m, int b[][10]);
void legge_da_tastiera2D(int a[][100], int n, int m);
void somma_matrici(int a[][10], int b[][10], int n, int m, int c[][10]);
int somma (int a[][10], int , int );
int somma_righe(int a[][10], int n, int m, int k[20]);
int somma_colonne(int a[][10], int n, int m, int k[20]);
void massimo_righe(int a[][10], int n, int m);
int somma_righept2 (int a[][100], int n, int m, int k[100]);

#endif // HEADER_H_INCLUDED
