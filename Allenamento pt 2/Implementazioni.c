#include <stdio.h>
#include <string.h>
void conta_lettere(char a[], int *conta_l, int *conta_c, int *conta_v)
{
    int i = 0;
    *conta_c = 0;
    *conta_l = 0;
    *conta_v = 0;

    while ( a[i] != '\0' && a[i] != '\n')
    {
        (*conta_l)++;
        (*conta_c)++;

        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
           {
               (*conta_v)++;
               (*conta_c)--;
           }

           if(a[i] == ' ')
           {
               (*conta_c)--;
               (*conta_l)--;
           }

            i++;

}
}

void legge_da_tastiera( int a[][100], int n, int m)
{
    int i, j;
    for( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf( "Inserisci elemento [%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

int massimo_righe (int a[][100], int n, int m, int massimo [10])
{
    int i,j;

    for ( i = 0; i < n; i++)
    {
        massimo[i] = a[i][0];
        for( j = 0; j < m ; j++)
        {
            if(a[i][j] > massimo [i])
                massimo[i] = a[i][j];
        }
    }
}

int conta_mannagg( char *testo)
{
    char *temp = strtok(testo, " ");
    int i = 0;
    while (temp != '\0')
    {
    if ( strlen(temp) == 3 )
        i++;
        temp = strtok('\0', " ");
    }
    return i;
}

float media_array( float v[], int n )
{
    int i;
    float somma = 0.0F;

for ( i = 0; i < n; i++)
{
   somma += v[i];
}
return somma/((float)n);
}

void sostituisci(float a[], int n_a, float b[], int n_b)
{
   int i;
   float media_a = media_array(a,n_a);
   float media_b = media_array(b, n_b);
   for (i = 0; i < n_a; i++)
   {
       if (a[i] > media_a)
        a[i] = media_a;
   }

   for ( i = 0; i < n_b; i++)
   {
       if (b[i] > media_b)
        b[i] = media_b;
   }
}

void fusione_array(int a[], int n_a, int b[], int n_b, int c[])
{
    int i_c, i_a = 0, i_b = 0;

    for ( i_c = 0; i_c < n_a+n_b; i_c++)
    {
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
}

void fusione_media ( int a[], int n_a, int b[], int n_b, int c[], int *media)
{
    fusione_array(a,n_a,b,n_b,c);
     *media  = media_array(c, n_a + n_b);
}


void somma_righe_colonne(int a[][100], int n , int m, int b[], int c[])
{
    int i,j;
    int somma_righe = 0;
    int somma_colonne = 0;

    for ( i = 0; i < n; i++)
    {
        somma_righe = 0;
        for (j = 0; j < m; j++)
            somma_righe += a[i][j];
            b[i] = somma_righe;
    }

    for (j = 0; j < m ; j++)
    {
        somma_colonne = 0;
        for( i = 0; i < n; i++)
            somma_colonne += a[i][j];
            c[j] = somma_colonne;
    }
}


int conta_are(char *testo)
{
    int i = 0;
    char *temp = strtok(testo, " ");

    while (temp != '\0')
    {
        if(strlen(temp) >= 3)
        {

        if (strcmp(&temp[strlen(temp) - 3], "are") == 0)
         i++;
        }
    temp = strtok('\0', " ");
    }
        return i;
}



int conta_consonanti(char *testo)
{
    char *temp = strtok(testo, " ");
    int i, n_consonanti;
    int max = 0;
    while ( temp != '\0')
    {
        n_consonanti = 0;
        for( i = 0; i < strlen(temp); i++)
        {
            if (conta_c(temp[i]))
                n_consonanti++;
        }
            if( n_consonanti > max)
                max = n_consonanti;

            temp = strtok('\0', " ");
    }
    return max;
}

int conta_c(int x)
{
    if ( x != 'a' && x != 'e' && x != 'i' && x != 'o' && x != 'u')
    {
       return 1;
    }
    return 0;
}



void sostituire_carattere ( char testo[100], char testo2[100])
{
    int i=0 , n = strlen(testo2);
    strcpy(testo2,testo);
    while(testo[i] != '\0')
    {
        if(testo[i] == ' ')
            testo2[i] == '\n';
      i++;
    }

 for(char *token = strtok(testo2,'\n' ) ; token != NULL; token = strtok(NULL,'\n') )
    printf( "%s\n", token);

}


void legge_da_tastiera_aD(float a[], int n)
{
    int i;
    for( i = 0; i < n; i++)
    {
        printf( "Inserisci l'%d-simo elemento: ", i );
        scanf("%f", &a[i]);
    }
}

void ord_inser(int a[], int n)
{
    int el_da_ins, i, j;

    for ( i = 1; i < n; i++)
    {
        el_da_ins = a[i];
        j = i-1;
        while ( j >= 0 && el_da_ins < a[j])
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = el_da_ins;
    }
}


int secondo_massimo(int a[], int n)
{
   int max, max2, i;
   if( a[0] > a[1])
    {
    max = a[0];
    max2 = a[1];
    }
    else
    {
     max = a[1];
     max2 = a[0];
    }


    for ( i = 2; i < n; i++)
    {
        if(a[i] > max)
        {
            max2 = max;
            max = a[i];
        }
        else
            max2 = a[i];
    }
    return max2;
}


int massimo_somme(double a[][100], int n, int m)
{
    int i, j, massimo=0, somma=0;

  for(i = 0; i < n ; i++ )
  {
      massimo += a[i][0];
  }

     for( i = 1; i < m; i++)
     {

         for(j = 0; j < n; j++)
         {
             somma += a[j][i];
         }
         if(somma > massimo)
            massimo = somma;
            somma = 0;
     }
     return massimo;
}

void legge_da_tastiera_2D(double v[][100], int n, int m)
{
    int i,j;

    for( i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf( "Inserisci l'[%d][%d]-simo elemento:  ",i,j );
            scanf(" %lf", &v[i][j]);
        }
    }
}


void numero_elementi(int a[][100], int n, int m, int chiave, int b[], int *n_b)
{
    int i, i_b = 0, j, cont = 0;
    for( i = 0; i < n; i++)
    {
        for( j = 0; j < m; j++)
        {
            if ( a[i][j] >= chiave)
            {
                cont++;
            }
        }
         b[i_b++] = cont;
        cont = 0;
    }
    *n_b = i_b;
}
