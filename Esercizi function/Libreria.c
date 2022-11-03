#include "Liberia.h"

float area_cerchio(float raggio)
{
    const float pi_greco=3.1415926F;
    float risultato=pi_greco*raggio*raggio;
    return risultato;
}

float area_corona(float r_magg, float r_min)
{
return area_cerchio(r_magg)-area_cerchio(r_min);
}

float prezzo_scontato(float prezzo, float sconto)
{
    return prezzo-prezzo/100.0*sconto;
}



float potenza(int base, int esponente)
{
    int i, z;
    if (esponente==0)
    return 1;
    else if(esponente==1)
    return base;
    else{
        z=base*base;
        for(i=3;i<=esponente;i++)
        z=z*base;
        return z;
    }}

int minimo (int x, int y)
{
if(x>y)
        return y;
else
    return x;
}


double somma_aD(double v[], int n)
{
 int i;
 double somma=0.0;

 for(i=0; i<n; i++)
 {
     somma=somma+v[i];
 }
 return somma;
}


void legge_da_tastiera(double v[], int n)
{
int i;
for (i=0 ; i<n; i++){
    printf( "Inserisci l'%d-esimo numero\n", i);
    scanf("%lf", &v[i]);
}
}

double media_aD(double v[], int n)
{
    int i;
    double media=0.0;
    for (i=0 ; i<n ; i++)
        media+=v[i];
return media/n;
}

void visualizza_aI(double v[], int n)
{
    int i;
    for(i=0; i<n; i++)
         printf (" il numero %d-esimo e' %lf\n",i, v[i]);
}
int somma_arrayI(int *a, int n)
{
    int i, somm=0;
    for (i=0; i<n; i++)
        somm=somm+ *(a+i);
    return somm;
}
int massimo_array(int a[], int n)
{
int i, max;
max=a[0];
for (i=1; i<n; i++){
    if (a[i]>max)
        max=a[i];
}
return max;
}

int minimo_array(int a[], int n)
{
    int min, i;
    min=a[0];
    for(i=0; i<n; i++)
        if(a[i]< min)
            min=a[i];
        return min;
}

int fattorialeI(int n)
{
    int fatt, i;
    fatt=1;
    if(n>1){
        for (i=2; i<=n; i++)
            fatt=fatt*i;
    }
return fatt;
}


float fattorialeF(int n)
{
    int i;
    float fatt=1.0F;
    if(n>1.0F){
        for (i=2.0F; i<=n; i++)
            fatt=fatt*(float)i;
}
return fatt;
}

void max_min_arrayI(int a[], int n, int *max, int *min)
{
  int i;
  *max = a[0];
  *min = a[0];
  for(i=1; i<n; i++){
    if(a[i] > *max)
        *max = a[i];
    else if (a[i] < *min)
        *min = a[i];
  }
}
void max_val_ind(float a[], int n, float *max_array, int *i_max)
{
    int i;
  *max_array = a[0];
  *i_max = 0;
  for (i=1; i<n; i++)
  {
      if(a[i]>*max_array){
        *max_array = a[i];
            *i_max = i;}
  }
}

void fusioneC (char a[], int n_a , char b[], int n_b, char c[])
{
 int i_a = 0, i_b = 0, i_c = 0;
 while (i_a < n_a && i_b < n_b )
 {
     if (a[i_a] < b[i_b])
        c[i_c++] = a[i_a++]; //incremento direttamente
        else
            c[i_c++] = b[i_b++];

 }
 while (i_a < n_a)
 {
     c[i_c++] = a[i_a++];
 }
 while (i_b < n_b)
 {
     c[i_c++] = b[i_b++];
 }
}

int uguaglianza_arrayC(char a[], char b[], int n)
{
    int i;
    for (i=0; i < n; i++)
        if (a[i] != b[i])
        return 0;

     return 1; //significa che non ho li ho mai trovato diversi

}


void legge_da_tastiera_a2D(double A[][100], int m, int n)
{
   int i, j;
    printf ("\n Inserisci gli elementi della matrice \n");
    for (i=0; i< m; i++)
        for (j=0; j<n; j++)
    {
        printf("Dammi l'elemento A[%d][%d]: ", i, j);
        scanf("%lf", &A[i][j]);
    }
}
void calcola_media_righe_a2D(double A[][100], int m, int n, double media_riga[])
{
    int i, j;
    double somma = 0.0;

    for(i=0; i<m;i++)
    {
        somma = 0.0; //alla riga successiva avrei la somma gia
        for (j=0; j<n; j++)
            somma += A[i][j];
            media_riga[i] = somma/n;

    }

}

void legge_da_tastiera_ap2D(double *A, int n_col, int m, int n)
{
   int i, j;
    printf ("\n Inserisci gli elementi della matrice \n");
    for (i=0; i< m; i++)
        for (j=0; j<n; j++)
    {
        printf("Dammi l'elemento A[%d][%d]: ", i, j);
        scanf("%lf", (A + i*n_col + j));
    }
}
void calcola_media_righe_ap2D(double *A, int n_col, int m, int n, double media_riga[])
{
    int i, j;
    double somma = 0.0;

    for(i=0; i<m;i++)
    {
        somma = 0.0; //alla riga successiva avrei la somma gia
        for (j=0; j<n; j++)
            somma += *(A + i*n_col +j);
            media_riga[i] = somma/n;

    }
}

//stringhe
int matching_migliore(char *chiave, char *testo)
{
 int i, m,n, punteggio, punteggio_max=0, indice;
 n = strlen(chiave);
 m = strlen(testo);
 for (i = 0; i <= m-n; i++){
    punteggio = punteggio_matching(chiave, &testo[i], n);
    if (punteggio > punteggio_max)
    {
        punteggio_max = punteggio;
        indice = i;
    }
 }
    return indice;
}

int punteggio_matching(char *a, char *b, int n) //dove la a è la chiave e b il testo
{
  int i, n_caratteri_uguali=0;
  for (i = 0; i < n; i++)
  if(a[i] == b[i])
    n_caratteri_uguali++;

  return n_caratteri_uguali;
}

void conta_tutto(char *testo, int *conta_c, int *conta_p, int *conta_l)
{
 int i, flag = 0;
 *conta_c = 0;
 *conta_p = 0;
 *conta_l = 0;
 while (testo[i] != '\0')
{
 (*conta_c)++; //se io lo facessi senza parentesi prendo l'informazione della locazione successiva
 if(testo[i] == '\n')
      (*conta_l)++;

      if(testo[i] == ' ' || testo[i] == '\t')
        flag = 0;
      else
         if (flag == 0)
      {
          flag = 1;
          //(*conta_p)++;
      }
        i++;
 }
}

 /*int conta_tutto_strtok(char *testo)
 {
  char separatori[] = {' ', '\n', '\t', '\0'};
  int cont = 0;
  while(token = strtok( '\0', separatori)  != '\0');
    cont++;
    return cont;
 }
*/

 void max_val( char a[], int n)
 {
     int i, i_max = 0;
     char massimo = a[0];

     for (i = 1; i<n; i++)
        if (a[i] > massimo)
     {
         massimo = a[i];
         i_max = i;
     }
     return i_max;
 }

/* void ord_sel_max(char a[], int n)
 {
     int i;
     for (i = n-1; i>0; i--)
     {
         scambiare_c(&a[i], &a[max_val(a, i+1)] );
     }
 }*/

 void scambiare_c(char *a, char *b)
 {
      char temp;
      temp = *a;
      *a = *b;
      *b = temp;
 }

 //ordianmento su stringhe
 void ord_sel_max_S(char elenco[][50], int n)
 {
     int i;
     for (i = n-1; i>0; i--)
     {
        scambiare_S(elenco[i], elenco[max_val_S(elenco, i+1)]);
     }
 }

 int max_val_S(char a[][50], int n)
 {
     int i, i_max = 0;
     for (i =1; i<n; i++)
        if(strcmp (a[i], a[i_max]) >0 )
     {
         i_max = i;
     }
     return i_max;
 }

 void scambiare_S(char *a, char *b)
 {
     char temp[100];
     strcpy (temp,a);
     strcpy (a,b);
     strcpy (b, temp);
 }

 void ord_sel_max_Sp(char *elenco[], int n)
 {
     int i;
     for (i = n-1; i>0; i--)
     {
        scambiare_Sp(&elenco[i], &elenco[max_val_Sp(&elenco[0], i+1)]);
     }
 }

 int max_val_Sp(char *a[], int n)
 {
     int i, i_max = 0;
     for (i = 1; i < n; i++)
        if(strcmp(a[i], a[i_max]) >0 )
     {
         i_max = i;
     }
     return i_max;
 }

 void scambiare_Sp(char **a, char **b)
 {
     char *temp;
     temp = *a;
     *a = *b;
     *b = temp;
 }
