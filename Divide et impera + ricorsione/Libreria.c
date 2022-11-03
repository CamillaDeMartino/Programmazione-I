#include <stdio.h>
#include <string.h>
typedef enum {False,True} Logical;


//divide et impera
int ric_bic( char chiave, char elenco [], int n)
{
    int mediano, primo = 0, ultimo = n-1;
    while(primo <= ultimo)
    {
        mediano = (primo + ultimo)/2;
        if(chiave == elenco[mediano])
            return mediano;
        else if (chiave < elenco[mediano])
            ultimo = mediano - 1;
        else primo = mediano + 1;
    }
    return -1;
}


//ricorsività con divide et impera
int ric_bic_ric(char chiave, char elenco[], int primo, int ultimo)
{
   int mediano;
   if( primo > ultimo)  //caso base
        return -1;
   else
   {
       mediano = (primo + ultimo)/2;
       if (chiave == elenco[mediano])
        return mediano;

       else if ( chiave < elenco[mediano])
         return ric_bic_ric(chiave, elenco, primo, mediano-1);

       else
        return ric_bic_ric(chiave,elenco,mediano+1, ultimo);
   }

}

int ric_bic_ric2(char chiave, char elenco[], int n)
{
  int mediano;
  if ( n == 0)
        return 0;
   else
  {
      mediano = (n-1)/2;
      if( chiave  == elenco[mediano])
        return 1;
      else if (chiave < elenco[mediano])
        return ric_bic_ric2(chiave, elenco, mediano);
      else
        return ric_bic_ric2(chiave, elenco+mediano+1, n-mediano-1);
  }
}

Logical ric_bin_ricTF(char chiave, char elenco[], int n)
{
   int mediano;
   if(n == 0)
   return False;
    mediano = (n-1)/2;
    if(chiave == elenco[mediano])
    return True;
    else if(chiave < elenco[mediano])
    return ric_bin_ricTF(chiave,elenco,mediano);
    else
    return ric_bin_ricTF(chiave,elenco+mediano+1,n-mediano-1) ;

}



int fattoriale_ric(int n)
{
    if ( n <= 1)

        return 1;
    else

        return n * fattoriale_ric (n -1);
}

int somma_ric(int n)
{
    if(n == 1)
        return 1;

    else
        return n + somma_ric(n-1);
}


int somma_a_ricAI(int a[], int n)
{
    if(n == 1)
        return a[0];

    else
        return a[n-1] + somma_a_ricAI(a, n-1);
}
int somma_a_ricI(int a[], int n)
{
    if(n == 1)
        return a[0];

    else
        return a[0] + somma_a_ricAI(a+1, n-1);
}

int somma_a_ricDI(int a[], int primo, int ultimo)
{
    int mediano;
    if(primo == ultimo)
        return a[primo];
    else
    {
        mediano = (primo + ultimo)/2;
        return somma_a_ricDI(a,primo,mediano) + somma_a_ricDI(a,mediano+1,ultimo);
    }
}

int somma_a_ricDI2(int a[], int n)
{
    int mediano;
    if(n == 1)
        return a[0];
    else
    {
        mediano = (n-1)/2;
        return somma_a_ricDI2(a,mediano+1)+somma_a_ricDI2(a+mediano+1, n-mediano-1);
    }

}



void legge_da_tastiera(int v[100], int n)
{
    int i;

    for( i = 0; i < n; i++)
    {
        printf( "Dammi l'%d-simo numero: ", i );
        scanf("%d", &v[i]);
    }
}

int max_a_ricI(int a[], int n)
{
    int result;

    if ( n == 1)
        return a[0];
    else
    {
      result = max_a_ricI(a, n-1);
      if( a[n-1] > result )
        return a[n-1];
      else
        return result;

    }
}


 int max_a_ricAI(int a[], int n)
 {
    if ( n == 1)
         return a[0];
    else
        return massimo(a[n-1], max_a_ricAI(a,n-1));

 }

int massimo (int x, int y)
{
    if(x >= y)
        return x;
    else
        return y;
}

int max_a_ricDI (int a[], int primo, int ultimo)
{
  int mediano;
  if (primo == ultimo)
        return a[primo];
  else
  {
      mediano = (primo + ultimo)/2;
      return massimo( max_a_ricDI(a,primo,mediano), max_a_ricDI(a, mediano+1, ultimo));
  }
}


int max_a_ricDI2 (int a[], int n)
{
    int mediano;
    if( n == 1)
        return a[0];
    else
    {   mediano = n/2; //puoi anch emttere mediano = n-1/2 però poi nel return cambia come la somma
        return massimo(max_a_ricDI2(a,mediano), max_a_ricDI2(a+mediano, n-mediano));
    }

}

int fib_ric_el(int n)
{
    if (n == 1 || n == 0)
        return n;
    else
        return fib_ric_el(n-1)+ fib_ric_el(n-2);
}

int num_pari_ric(int a[], int n)
{
    if (n == 0)
        return 0;
    else
    {
        if(a[0]%2 == 0)
            return 1 + num_pari_ric(a+1,n-1);
        else
            return 0 + num_pari_ric(a+1,n-1);
    }
}

int strlen_ric(char *str)
{
    if (*str == '\0')
        return 0;
    else
    {
    if (*str == '\n')
        return 0;
    else if (*str == ' ')
        return strlen_ric(str +1);
    else
        return 1 + strlen_ric(str +1);
    }
}

int appartiene_ric(int a[],int n,int chiave)
{
  if ( n == 0)
        return 0;
  else
  {
      if (a[n-1] == chiave)
        return 1;
      else
        return appartiene_ric(a,n-1,chiave);
  }
}

int uguaglianza_str_ric(char *str1 ,char *str2 )
{
    if ((*str1 == '\0' && *str2 != '\0') || (*str1 != 0 && *str2 == '\0'))
        return 0;

    else if (*str1 == '\0' && *str2 == '\0')
        return 1;
    else
    {
        if(*str1 == *str2)
            return uguaglianza_str_ric(str1 + 1, str2 + 1);
        else
            return 0;
    }

}

int string_matching_ric(char *testo, char *chiave)
{
    int ris;
    if (*(testo + strlen(chiave)-1) == '\0') //se non sono più allinate le due porzioni
        return 0;
    else
    {
        ris = strncmp(testo,chiave,strlen(chiave));
        if ( ris == 0)
            return 1 + string_matching_ric(testo + 1, chiave);
        else
            return string_matching_ric(testo+1, chiave);
    }
}

void ord_ins_ric(int a[], int n)
{
    int el_da_ins, j;
    if(n <= 1)
        return ;
    ord_ins_ric(a,n-1);
    el_da_ins = a[n-1];

    j = n - 2;

    while (j >= 0 && el_da_ins < a[j])
    {
        a[j +1] = a[j];
        j--;
    }
a[j +1] = el_da_ins;
}

