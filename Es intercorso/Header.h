#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

int somma_naturali(int);
int somma_armonica(int);
int somma_quadratica(int);
int fattoriale (int);

//Array 1D
void legge_da_tastiera_aD(double v[] , int);
void visualizza_aD(int v[], int);
double somma_aD (double v[], int);
double media_aD (double v[], int);
int massimo_aD(double v[], int);
int minimo_aD(double v[], int);
void max_min_aD(double v[], int , int *, int *);
void max_val_ind(double v[], int, int *, int *);
int ind_max(double v[], int n);
int ricera_sequenziale( float v[], int, float);
void fusione_array ( char a[], int, char b[], int, char c[]);
int uguaglianza_array (char a[], char b[], int );

//array 2D
void legge_da_tastiera_a2D(double [][100], int, int );
int massimo_a2D(double [][100], int, int);
void min_val_a2D(double [][100], int, int, double* , int *, int *);
int media_a2D(double [][100], int, int );
void media_riga_a2D(double [][100], int , int , double media_riga[]);
int max_diag(double v[][100], int n);
int max_triangolo(double v[][100], int , int );
void media_avanti ( float a[], int , float b[]);
void media_avanti_p(float a[], int );

//Array e insiemi
void unione ( float a[], int , float b[], int, float c[], int *);
void intersezione (float a[], int, float b[], int, float c[], int *);
int inclusione (float a[], int, float b[], int);
void sottrazione(float a[], int , float b[], int , float c[], int *);
int uguaglianza_inisiemi(float a[], float b[], int );

//stringhe
void conta_tutto(char *testo, int *, int *, int *);
int string_matching(char chiave[], char testo[]);
int punteggio_matching(char chiave[], char testo[], int );
int matching_migliore(char *chiave, char *testo);

//ordinamento
void ord_inser(int a[], int);
void scambiare_c(int *a, int *b);
void min_val_ind(int a[], int , int *min_array, int *i_min);
void ord_sel_min(int a[], int );
void max_va_ind(int a[], int n, int *max_array, int *i_max);
void ord_sel_max(int a[], int n);


//ordinamento su stringhe
void scambiare_S(char *a, char *b);
int max_stringa(char a [][50], int n);
void ord_sel_max_S(char elenco [][50], int n);

#endif // HEADER_H_INCLUDED
