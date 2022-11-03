
#define HEADER_H_INCLUDED
typedef enum {False,True} Logical;

int ric_bic( char chiave, char elenco[], int );

int ric_bic_ric(char , char [], int , int);
int ric_bic_ric2(char , char [], int );
Logical ric_bin_ricTF(char ,char [],int);

int fattoriale_ric(int n);
int somma_ric(int n);

int somma_a_ricAI(int [], int);
int somma_a_ricI(int [], int);

int somma_a_ricDI(int [], int, int );
int somma_a_ricDI2(int [], int );


void legge_da_tastiera(int [], int );
int max_a_ricI(int [], int );
int max_a_ricAI(int [], int );
int massimo(int , int );

int max_a_ricDI (int [], int, int);
int max_a_ricDI2 (int [], int);

int fib_ric_el(int );

//esercizi
int num_pari_ric(int [], int);
int strlen_ric(char *);
int appartiene_ric(int [],int,int);
int uguaglianza_str_ric(char *,char *);
int string_matching_ric(char *, char *);
void ord_ins_ric(int [], int);
