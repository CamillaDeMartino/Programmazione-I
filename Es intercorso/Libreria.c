#include <stdio.h>
#include <string.h>
int somma_naturali (int numeri)
{
    int i, somma = 0;
    for (i = 1; i <= numeri; i++)
        somma += i;
    return somma;
}

int somma_armonica(int numeri)
{
    int i;
    float somma_a = 0;
    for (i = 1 ; i <= numeri; i++)
        somma_a += 1/((float)i);
    return somma_a;
}

int somma_quadratica(int numeri)
{
    int i;
    float somma_q = 0;
    for (i = 1; i <= numeri; i++)
        somma_q += 1/((float)i*i);
    return somma_q;
}

int fattoriale (int numero)
{
    int i, fatt = 1;
    if(numero > 1)
        for ( i = 2; i <= numero; i++ )
        fatt *= i;
    return fatt;

}
void visualizza_aD(int v[], int n)
{
   int i;
   for ( i = 0; i < n; i++)
    printf ("%d\n", v[i]);
}

void legge_da_tastiera_aD (double v[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf ( "Inserisci l'%d-simo numero:\n", i);
        scanf ( " %lf", &v[i]);
    }
}

double somma_aD(double v[], int n)
{
    int i;
    double somma = 0.0;
    for (i = 0; i < n; i++)
    somma += v[i];
    return somma;
}

double media_aD (double v[], int n)
{
    int i;
    double media = 0.0;
    for ( i = 0; i < n; i++ )
        media += v[i];
    return media/n;
}

int massimo_aD(double v[], int n)
{
    int i, max = v[0];
    for ( i = 1; i < n; i++)
    {
       if (v[i] > max)
       max = v[i];
    }
    return max;
}

int minimo_aD(double v[], int n)
{
    int i, min = v[0];
    for (i = 1; i < n; i++)
    {
        if(v[i] < min)
            min = v[i];
    }
    return min;
}

void max_min_aD(double v[], int n, int *max, int *min)
{
 int i;
 *max = v[0];
 *min = v[0];
 for ( i = 1; i < n; i++)
 {
     if ( v[i] > *max)
        *max = v[i];
     else if (v[i] < *min)
        *min = v[i];
 }
}

void max_val_ind(double v[], int n, int *max, int *ind)
{
    int i;
    *max = v[0];
    *ind = 0;
    for (i = 1; i < n; i++)
    {
        if (v[i] > *max){
            *max = v[i];
            *ind = i;
            }
    }
}

int ind_max(double v[], int n)
{
    int i, max = v[0];
    int i_max = 0;
    for (i = 1; i < n; i++)
        if ( v[i] > max){
         max = v[i];
         i_max = i;}
    return i_max;
}

int ricera_sequenziale( float v[], int n, float chiave)
{
    int i = 0;
    int trovato = 0;
    do
    {
        if ( chiave == v[i])
            {
            trovato = 1;
            }
            i++;
    }
    while ( !trovato && i<n);
    return trovato;
}

void media_avanti ( float a[], int n, float b[])
{
    int i;

    for (i = 0; i < n-1; i++)
    {
        b[i] = (a[i] + a[i+1])/2;
    }
    b[n-1] = (a[0] + a[n-1])/2;
}

void media_avanti_p(float a[], int n)
{
int i;
float temp = a[0];
for ( i = 0; i < n-1; i++)
{
    a[i] = (a[i] + a[i+1])/2;
}
a[n-1] = (a[n-1] + temp )/2;
}


void fusione_array ( char a[], int n_a, char b[], int n_b, char c[])
{
    int i_c, i_a = 0, i_b = 0;
    for (i_c = 0; i_c <= n_a + n_b; i_c++)
        if(i_a < n_a && i_b < n_b)
    {
        if (a[i_a] < b[i_b])
            c[i_c] = a[i_a++];
            else
                c[i_c] = b[i_b++];

    }
            else if (i_a >= n_a)
                c[i_c] = b[i_b++];
                else
                    c[i_c] = a[i_a++];

}

int uguaglianza_array (char a[], char b[], int n)
{
    int i, uguale = 1;
    for (i = 0; i < n; i++)
        if(a[i] != b[i])
        uguale = 0;

return uguale;

}

void legge_da_tastiera_a2D(double v[][100], int n, int m)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf ( "Dammi l'elemento A[%d][%d]: ", i, j);
            scanf("%lf", &v[i][j]);
        }
    }
}

int massimo_a2D(double v[][100], int n, int m)
{
    int i, j;
    int max_2D = v[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (v[i][j] > max_2D)
                max_2D = v[i][j];
        }
    }
    return max_2D;
}


void min_val_a2D(double v[][100], int n, int m, double *min, int *i_min, int *j_min)
{
    int i, j;
    *min = v[0][0];
    *i_min = 0;
    *j_min = 0;

    for(i = 1; i < n; i++)
    {
        for(j = 1; j < m; j++)
        {
            if ( v[i][j] < *min)
            {
                *min = v[i][j];
                *i_min = i;
                *j_min = j;
            }
        }
    }
}

int media_a2D(double v[][100], int n, int m)
{
    int i, j;
    float somma = 0.F;
    for (i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            somma += v[i][j];
    }
    return somma/(float)(m*n);
}


void media_riga_a2D(double v[][100], int n, int m, double media_riga[])
{
    int i, j;
    double somma = 0.0;

    for (i = 0; i < n; i++)
    {
        somma = 0.0;
        for (j = 0; j < m; j++)
            somma += v[i][j];
        media_riga[i] = somma/n;
    }
}

int max_diag(double v[][100], int n)
{
    int i;
    int max = v[0][0];
    for (i = 1; i < n; i++)
        if( v[i][i] > max)
        max = v[i][i];
    return max;

}

int max_triangolo(double v[][100], int n, int m)
{
    int i, j;
    int max = v[0][0];
    for ( i = 0; i < n; i++)
    {
        for ( j = i; j < m; j++)
            if (v[i][j] > max)
            max = v[i][j];
    }
    return max;
}

void unione ( float a[], int n_a, float b[], int n_b, float c[], int *n_c)
{
    int i, i_c;
    for (i = 0; i< n_a; i++){
        c[i] = a[i];
        i_c = n_a - 1;
    }
    for ( i = 1; i < n_b; i++)
    {
        if (!ricera_sequenziale(a, n_a, b[i]))
        {
        i_c++;

        c[i_c] = b[i];
        }
    }
    *n_c = i_c+1;
}

void intersezione (float a[], int n_a, float b[], int n_b, float c[], int *n_c)
{
    int i_c, i;
    i_c = 0;
    for ( i = 0; i < n_a; i++)
    {
        if (ricera_sequenziale(b, n_b, a[i]))
        {
            c[i_c] = a[i];
            i_c++;
        }
    }
    *n_c = i_c ;
}

int inclusione (float a[], int n_a, float b[], int n_b)
{
    int i, incluso = 1;
    for (i = 0; i < n_a; i++)
    {
        if( !ricera_sequenziale( b,n_b,a[i]))
        {
            incluso = 0;
            break;
        }
    }
    return incluso;
}

void sottrazione(float a[], int n_a, float b[], int n_b, float c[], int *n_c)
{
    int i, i_c;
    i_c = 0;

    for (i = 0; i < n_a; i++)
    {
        if (!ricera_sequenziale(b,n_b, a[i]))
        {
            c[i_c] = a[i];
            i_c++;
        }
    }
    *n_c = i_c;
}

int uguaglianza_inisiemi(float a[], float b[], int n)
{
    int i;
    for ( i = 0; i < n; i++)
    {
        if(!ricera_sequenziale(b,n,a[i]))
            return 0;
    }
    return 1;
}




void conta_tutto(char *testo, int *conta_c, int *conta_p, int *conta_l)
{
    int i = 0, in_parola = 0;
    *conta_c = 0; //conto i caratteri
    *conta_p = 0; //conto le parole
    *conta_l = 0; //conto le linee
    while (testo[i] != '\0')
    {
        (*conta_c)++;

        if(testo[i] == '\n'){
            (*conta_l)++;

        }

        if (testo[i] == ' ' || testo[i] == '\t' || testo[i] == '\n')
            {
            in_parola = 0;
            (*conta_c)--;
            }
        else if (in_parola == 0)
        {
            in_parola = 1;
            (*conta_p)++;
        }
            i++;
    }
}


int string_matching(char chiave[], char testo[])
{
    int i,n,m, conta_chiave = 0;
    n = strlen(chiave);
    m = strlen (testo);

    for(i = 0; i <= m-n; i++)
        if(strncmp(chiave, &testo[i], n) == 0)
        conta_chiave++;
    return conta_chiave;

}

int punteggio_matching(char *chiave, char *testo, int n)
{
    int i, punteggio = 0;

    for ( i = 0; i < n; i++)

        if(chiave[i] == testo[i])
            punteggio++;

    return punteggio;
}

int matching_migliore(char *chiave, char *testo)
{
    int n,m, i, indice = 0;
    int punteggio, punteggio_max = 0;
    n = strlen(chiave);
    m = strlen(testo);

    for( i = 0; i <= m-n; i++)
    {
        punteggio = punteggio_matching(chiave, &testo[i], n);
        if (punteggio > punteggio_max)
        {
            punteggio_max = punteggio;
            indice = i;
        }
    }
return indice;
}


void ord_inser(int a[], int n)
{
    int el_da_ins, i, j;

    for(i = 1; i < n; i++)
    {
        el_da_ins = a[i];
        j = i-1;
        while (j >= 0 && el_da_ins < a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = el_da_ins ;
    }
}

void scambiare_c(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void min_val_ind(int a[], int n, int *min_array, int *i_min)
{
    int i;
    *min_array = a[0];
    *i_min = 0;

    for(i = 1; i < n; i++)
    {
        if (a[i] < *min_array)
        {
            *min_array = a[i];
            *i_min = i;
        }
    }
}

void ord_sel_min(int a[], int n)
{
    int i, indice_min, minimo;
    for(i = 0; i < n-1; i++ )
    {
        min_val_ind(&a[i], n-i, &minimo, &indice_min);
        scambiare_c(&a[i], &a[indice_min + i]);

    }
}

void ord_sel_max(int a[], int n)
{
    int i, massimo, ind_max;

    for( i = n-1; i > 0; i--)
    {
        max_val_ind(a, i+1, &massimo, &ind_max);
        scambiare_c(&a[i], &a[ind_max]);
    }
}

void max_va_ind (int a[], int n, int *max_array, int *i_max)
{
    int i;
    *max_array = a[0];
    *i_max = 0;
    for ( i = 0; i < n; i++)
    {
        if (a[i] > *max_array)
        {
            *max_array =  a[i];
            *i_max = i;
        }
    }
}

void ord_sel_max_S(char elenco [][50], int n)
{
    int i, i_massimo;
    for (i = n-1; i > 0; i-- )
    {
       scambiare_S(elenco[i], elenco[max_stringa(elenco, i+1)]);
    }
}

int max_stringa(char a [][50], int n)
{
    int i;
    int i_massimo = 0;
    for (i = 1; i < n; i++)
    {
        if (strcmp (a[i], a[i_massimo]) > 0)
        {
            i_massimo = i;
        }
    }

        return i_massimo;
}

void scambiare_S(char *a, char *b)
{
    char temp[100];
    strcpy (temp,a);
    strcpy (a,b);
    strcpy (b,temp);
}

