#include <math.h>
#include <stdio.h>

int traslazione ( float x, float a)
{
 return x+a;
}

float distanza_due_punti (float x1, float x2, float y1, float y2 ){
float d;
d = sqrt((x2-x1) * (x2-x1))+ ((y2-y1)*(y2-y1));
return d;
}

void f(void) {
static int cnt = 1;
++cnt;
if (cnt % 2 == 0)
printf("cnt:%d\n",cnt);
else
printf("cnt:%d\n",cnt);
}

int funzione(int a, int *s)
{
static int cnt ;
++cnt;
if (cnt % 2 == 0)
    *s = a+cnt;
}

int equazione ( int x){

return (pow(x,3)+ 3 * x +5) / (8*x + 1);
}

void equazioni(int x, int y, float *result_1, float *result_2)
{

 *result_1 = (pow(x,3)+ 3 * x +5) / (8*x + 1);
 *result_2 =  (pow(y,4) / (1 + y));

}

int p(int m, int n)
{
int i; long p = 1;
for(i = 0; i <= n; ++i){
    p *= m;}
    return p;
}

void prelievo( int *soldi )
{
    int x;
    printf( "Quanti soldi vuoi prelevare?\n" );
    scanf(" %d", &x);
    if ( x < *soldi)
        printf( "Non hai depositato abbastanza soldi\n\n");
    else
        *soldi -= x;

}

void deposito( int *soldi)
{
    int y;
    printf( "Quanti soldi vuoi depositare?\n\n");
    scanf(" %d", &y);
    *soldi += y;
}


void concatenazione (char a[], int n, char b[], int m, char c[])
{
    int i_a = 0,i_b = 0, i_c;
    for ( i_c  = 0;  i_c < n+m; i_c++)
    {
        if(i_a < n && i_b < m){
        if (i_c%2 == 0)
            c[i_c] = b[i_b++];
        else
            c[i_c] = a[i_a++];
        }
            else if(i_a >= n)
                c[i_c] = b[i_b++];

            else
                c[i_c] = a[i_a++];
    }

}

void trasporta (int a[][10], int n, int m, int b[][10])
{
    int i,j;
    for(i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
           b[j][i] = a[i][j];
    }
}

void legge_da_tastiera2D(int a[][100], int n, int m)
{
    int i,j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
        printf ( "Inserire il [%d][%d] numero: ", i,j);
        scanf(" %d", &a[i][j]);
        }
    }
}



void somma_matrici(int a[][10], int b[][10], int n, int m, int c[][10])
{
    int i,j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
}

int somma (int a[][10], int p, int q)
{
    int somma = 0;
    int i, j;

    for(i = 1; i < p-1; i++)
    {
        for (j = 1; j < q-1; j++)
        {
            somma += a[i][j];
        }
    }
    return somma;
}

int somma_righe(int a[][10], int n, int m, int k[20])
{
    int i, j;
    int somma=0;

    for (i = 0; i < n; i++)
    {
        somma = 0;
        for ( j = 0; j < m; j++)
           {
            somma += a[i][j];
           }

            k[i] = somma;
    }
}

int somma_colonne(int a[][10], int n, int m, int k[20])
{
    int i,j, somma = 0;
    for ( j = 0; j < m; j++)
    {
       somma = 0;
       for ( i  = 0; i < n; i++)
       {
        somma += a[i][j];
       }
       k[j] = somma;
    }
}

void massimo_righe(int a[][10], int n, int m)
{
    int i,j, max[10];
    for ( i = 0; j < n; i++)
    {
       max[i] = 0;
       for ( j = 0; j < m; j++)
       {
        if (a[i][j] > max [i] )
            max[i] = a[i];
       }
       printf( "Il massimo della riga %d e' %d", i, max );
    }
}

int somma_righept2 (int a[][100], int n, int m, int k[100])
{
    int i,j, somma = 0;
    for( i = 0; i < n; i++)
    {
        somma = 0;
        for ( j = 0; j < m; j++)
        {
            somma += a[i][j];
        }
        k[i] = somma;
    }
}



