#include <stdio.h>
#include <stdlib.h>
#include "Header.h"

//function che stabilisce quante possibili caselle il robot pu� percorrere a destra
//vede come input l'intera matrice e le coordinate del robot x, y
int caselle_destra(char labirinto[][16], int x, int y)
{
   int destra = 0;                        //iniziliazziamo la variabile destra che conter� quante sono le caselle in quella direzione

       while(labirinto[x][y+1]!= '*' )    //il corpo del while si svolger� finch� il robot(spostandosi a destra) non incontrer� una parete (*)
        {
        destra++;                         //incrementiamo la variabile in modo tale che possa contare la casella percorsa
        y++;                              //incrementiamo y, in tal modo il robot potr� spostarsi ancora a destra di una casella
        }
   return destra;                         //ritorna il numero di caselle che dunque ha a disposizione prima che arrivi alla parete
}

//function che stabilisce quante possibili caselle che il robot pu� percorrere a sinistra
//vede come input l'intera matrice e le coordinate del robot x, y
int caselle_sinistra(char labirinto[][16], int x, int y)
{
    int sinistra = 0;                   //iniziliazziamo la variabile sinistra che conter� quante sono le caselle in quella direzione

    while(labirinto[x][y-1] != '*')     //il corpo del while si svolger� finch� il robot(spostandosi a sinistra) non incontrer� una parete (*)
    {
        sinistra++;                     //incrementiamo la variabile in modo tale che possa contare la casella percorsa
        y--;                            //decrementiamo in questo caso y, in tal modo il robot potr� spostarsi ancora a sinistra di una casella

    }
    return sinistra;                    //ritorna il numero di caselle che dunque ha a disposizione prima che arrivi alla parete
}

//function che stabilisce quante possibili caselle il robot pu� compiere in avanti
//vede come input l'intera matrice e le coordinate del robot x, y
int caselle_avanti(char labirinto[][16], int x, int y)
{
    int avanti = 0;                     //iniziliazziamo la variabile avanti che conter� quante sono le caselle in quella direzione

    while(labirinto[x-1][y] != '*')     //il corpo del while si svolger� finch� il robot(spostandosi in avanti) non incontrer� una parete (*)
     {
        avanti++;                       //incrementiamo la variabile in modo tale che possa contare la casella percorsa
        x--;                            //decrementiamo in questo caso x, in tal modo il robot potr� spostarsi ancora in avanti di una casella
     }
    return avanti;                      //ritorna il numero di caselle che dunque ha a disposizione prima che arrivi alla parete
}

//function che stabilisce quante possibili caselle il robot pu� compiere indietro
//vede come input l'intera matrice e le coordinate del robot x, y
int caselle_indietro(char labirinto[][16], int x, int y)
{
    int indietro = 0;                   //iniziliazziamo la variabile indietro che conter� quante sono le caselle in quella direzione


    while(labirinto[x+1][y] != '*')     //il corpo del while si svolger� finch� il robot(spostandosi indietro) non incontrer� una parete (*)
        {
            indietro++;                 //incrementiamo la variabile in modo tale che possa contare la casella percorsa
            x++;                        //incrementiamo x, in tal modo il robot potr� spostarsi ancora indietro di una casella
        }
    return indietro;                    //ritorna il numero di caselle che dunque ha a disposizione prima che arrivi alla parete
}


/*richiamando tutte le function relative alle caselle disponibili nelle 4 direzioni,
la function stabilisce quale risulta la direzione maggiore
e la seconda direzione di maggiore lunghezza nel caso in cui la prima non sia percorribile
le coordinate del robot e i massimi saranno passati come puntatori poich� cambieranno ad ogni passo, facilitando l'utilizzo*/
void massimo_caselle(char labirinto[][16], int *x, int *y, int *max1, int *max2 )
{
    int avanti = caselle_avanti(labirinto, *x, *y);
    int indietro = caselle_indietro(labirinto, *x, *y);
    int destra = caselle_destra(labirinto, *x, *y);
    int sinistra = caselle_sinistra(labirinto, *x, *y);
    int i, dir[] = {avanti, indietro, destra, sinistra};

     if(dir[0] > dir[1])            //uso dell'if else per inizializzare le due varibili massime
        {
          *max1 = dir[0];
          *max2 = dir[1];
        }
    else
        {
           *max1 = dir[1];
           *max2 = dir[0];
        }

  for(i = 2; i < 4; i++)                    //scorrere l'array per valutare se gli elementi restanti sono maggiori dei massimi individuati
   {
    if(dir[i] > *max1)
        {
           *max2 = *max1;
           *max1 = dir[i];
        }
    else if(dir[i] > *max2)
            *max2 = dir[i];
    }
}

//function che determina la legge con cui il robot si muove e ne restituisce il movimento grazie alle variabili a puntatori x e y
//nel 30% dei casi il robot si muove a caso in una delle quattro caselle vicine possibili
//nel 70% dei casi il robot si muove sempre di un passo verso la direzione maggiore(cio� che presenta il maggior numero di caselle)
//si stabiliscono per le seguenti function utilizzate i numeri da attribuire ad ogni direzione (avanti = 0, indietro = 1, destra = 2, sinistra = 3)
//la variabile direzione stabilisce la direzione precedente eseguita dal robot
void movimento_casuale(char labirinto[][16], int *x, int *y, int *direzione)
{

    int probabilita = 1 + rand()%100;                                   //la percentuale dei casi � determinata da una rand da 1 a 100
    printf("\nprobabilita' %d\n", probabilita);


     if(probabilita <= 30)                                              //se il numero generato � minore o uguale a 30 ci troviamo nel 30% dei casi
        movimento_30(labirinto, &*x, &*y, &*direzione);

    else                                                                //se il numero generato � maggiore di 30 ci troviamo nel 70% dei casi
        movimento_70(labirinto, &*x, &*y, &*direzione);


}

//funzione 30% dei casi
//si generea un numero casuale (da 0 a 3) corrispondente alle 4 direzioni tramine una rand
//una volta individuato il numero si decide di percorrere quella direzione di un passo, pareti permettendo
//la function restituisce le coordinate del robot date in input cambiate, in base al nuovo movimento generato
//la variabile dir segner�, ogni volta che la funzione viene chiamata, in quale direzione si � mosso il robot (la direzione precedente)
void movimento_30(char labirinto[][16],int *x, int *y, int *dir)
{
   int numero = rand()%4;

    switch(numero)
    {
        case 0:                                               //se il numero generato � 0 il robot si sposter� in avanti, pareti permettendo
                if(labirinto[(*x)-1][*y] != '*' && *dir != 1)
                    {
                    (*x)--;                                  //lo spostamento � ottenuto decrementando la riga
                    *dir = numero;                           //segneremo che il robot avr� compiuto la direzione 0 (avanti)
                    break;
                    }
                    else
                   {
                       movimento_30(labirinto, &*x, &*y, &*dir);
                       break;
                   }
        case 1 :                                            //se il numero generato � 1 il robot si sposter� indietro, pareti permettendo
                if(labirinto[(*x)+1][*y] != '*' && *dir != 0)
                   {
                    (*x)++;                                 //lo spostamento � ottenuto incrementando la riga
                    *dir = numero;                          //segneremo che il robot avr� compiuto la direzione 1 (indietro)
                    break;
                   }
                   else
                   {
                       movimento_30(labirinto, &*x, &*y, &*dir);
                       break;
                   }
        case 2 :                                            //se il numero generato � 2 il robot si sposter� a destra, pareti permettendo
                if(labirinto[*x][(*y)+1] != '*' && *dir != 3)
                  {
                    (*y)++;                                 //lo spostamento � ottenuto incrementando la colonna
                    *dir = numero;                          //segneremo che il robot avr� compiuto la direzione 2 (destra)
                    break;
                  }
                  else
                   {
                       movimento_30(labirinto, &*x, &*y, &*dir);
                       break;
                   }
        case 3:                                             //se il numero generato � 3 il robot si sposter� a sinistra, pareti permettendo
                if(labirinto[*x][(*y)-1] != '*' && *dir != 2)
                   {
                    (*y)--;                                 //lo spostamento � ottenuto decrementando la colonna
                    *dir = numero;                          //segneremo che il robot avr� compiuto la direzione 3 (sinistra)
                    break;
                   }
                   else
                   {
                       movimento_30(labirinto, &*x, &*y, &*dir);
                       break;
                   }
    }
}


/*function 70% dei casi
anche in questo caso restituisce le coordinate del robot date in input cambiate, in base al nuovo movimento generato
la variabile dir segner� in quale direzione si � mosso il robot (la direzione precedente)*/
void movimento_70(char labirinto[][16], int *x, int *y , int *dir)
{
    int numero, massimo1, massimo2;                     //richiamo le funzioni che restitutivano il massimo per ogni direzioni
    int avanti = caselle_avanti(labirinto, *x, *y);
    int indietro = caselle_indietro(labirinto, *x, *y);
    int destra = caselle_destra(labirinto, *x, *y);
    int sinistra = caselle_sinistra(labirinto, *x, *y);
    int vettore[] = {avanti, indietro, destra, sinistra};       //poniamo in un vettore i massimi delle direzioni
    massimo_caselle(labirinto, &*x, &*y, &massimo1, &massimo2);

    if(direzioni_uguali(massimo1,vettore,&*dir))            //se ci sono pi� direzioni di massima lunghezza
       numero = casuale_massimo(massimo1,vettore, &*dir);  //il numero da associare alla direzione sar� determinato casualmente tra queste

    else
       numero = associa_massimo(massimo1, massimo2, vettore, *dir);  //altrimenti associamo il massimo alla direzione corrispondente

 switch(numero)          //uso del costrutto switch per permettere la scelta della direzione associata al rispettivo numero
 {                       //la presenza di una parete � gi� stata verificata precedentemente dalle function conta caselle
 case 0:                 //se il numero restituito da una delle due function � 0
        (*x)--;              //decrementiamo le righe per procedere in avanti
        *dir = numero;       //salvare la direzione compiuta
        break;
 case 1:
        (*x)++;               //se il numero � 1, incrementiamo le righe per spostarsi indietro
        *dir = numero;        //salvare la direzione compiuta
        break;

 case 2:
        (*y)++;              //numero 2, incrementiamo la colonna per procedere a destra
        *dir = numero;       //salvare la direzione
        break;

 case 3:
        (*y)--;              //numero 3, decrementiamo la colonna per spostarsi a sinistra
        *dir = numero;       //salviamo la direzione
        break;

 }
}


//fuction che segnaler� la presenza di pi� direzioni con la stessa lunghezza massima
//la direzione precedente che il robot ha percorso � riportata in input affinch� possa valutare se la direzione massima non sia il suo opposto
int direzioni_uguali(int max, int vettore[4], int *direzione)
{
    int i, uguali = 0;                                     //inizializziamo il contatore che verr� incrementato
                                                           // ogni volta che un elemento dell'array risulter� essere uguale al massimo, passato per input
    for (i = 0; i < 4; i++)                                //poich� scorriamo l'array che contiene le direzioni massime, i indica automaticamente il numero associato
    {                                                      //per i = 0, significa che la direzione considerata � in avanti e cos� ad ogni passo
        if(vettore[i] == max && i + *direzione != 1 && i + *direzione != 5)
            uguali++;                                      // le direzioni opposte sono 0 e 1 (0+1), 2 e 3 (2+3), la somma indica che la direzione uguale al massimo non deve essere opposta a quella precedente
    }


    if (uguali == 4 || uguali == 3 || uguali == 2)
        return 1;
    else                                                 //se vi � una sola direzione uguale al massimo, non � necessario questo controllo
        return 0;

}

//function che sceglie casualmente una delle direzioni (inserite nel vettore) che presentano lo stesso numero di caselle massime
int casuale_massimo(int massimo,int vettore[] ,int *direzione)
{
    int numeri[4], i, i_numeri = 0, indice, num = 0;

    for (i = 0; i < 4; i++)
    {
        if(vettore[i] == massimo && i + *direzione != 1 && i + *direzione != 5)    //anche qui viene verificata che la direzione non sia opposta a quella precedente
         {
             numeri[i_numeri] = i;                 //per i = 0 l'array salva che la prima direzione uguale al massimo � quella in avanti
             i_numeri++;                           //per i = 1 la seconda direzione uguale al massimo � indietro e cos� via
         }
    }
                                                 //l'indice i_numeri stabilisce automaticamente quali saranno le direzioni con lo stesso massimo
                                                 //scorrendo l'array numeri[], la nuova direzione sar� selezionata da un indice generato da una rand
     if(i_numeri == 4)                           //la casualit� � proporzionale al numero di direzioni uguali al massimo
        {                                        //in ogni caso la direzione e dunque il numero associato sar� determinata da una function
            indice = rand()%4;
            num = selezione_massimo(numeri,indice);
        }
    else if(i_numeri == 3)
        {
            indice = rand()%3;
            num = selezione_massimo(numeri,indice);
        }
    else if(i_numeri == 2)
        {
            indice = rand()%2;
            num = selezione_massimo(numeri,indice);
        }
    return num;
}

//function che associa l'elemento massimo, presente nell'array numeri selezionato dall'indice in input, alla sua relativa direzione
int selezione_massimo(int numeri[], int indice)
{
  if(numeri[indice] == 0)                      //l'indice permetter� di spostarsi nell'array numeri di tanti passi quanto il suo valore
            return 0;                          //se la direzione selezionata � avanti restituisce il numero associato 0
        else if(numeri[indice] == 1)
            return 1;                          //ritorna 1 se la direzione � indietro
        else if(numeri[indice] == 2)
            return 2;                          //ritorna 2 se la direzione � destra
        else
            return 3;                          //altrimenti se la direzione � sinistra ritorna 3
}


//function che associa il massimo in input ad una delle variabili presenti nel vettore in input
//ricordiamo che il vettore riporta il numero di caselle massime di ogni direzione e la variabile direzione, lo spostamento precedente
int associa_massimo(int massimo, int massimo2, int vettore[], int direzione)
 {
     int i, numero = 0, dir = 0;

     for(i = 0; i < 4; i++)                                                        //scorrendo l'array verifichiamo quale direzione � uguale al massimo
     {                                                                             //controlliamo inoltre che non sia opposta alla direzione precedente
         if(vettore[i] == massimo && i + direzione != 1 && i + direzione != 5)     // al passso i = 0, stiamo considerando il primo elemnto dell'array (avanti)
         {                                                                         //i dunque rappresenta il numero associato alla direzione (es. i = 3, direzione = sinistra)
             numero++;                                                             //incrementiamo la variabile numero poich� � stato trovato una direzione disponibile
             dir = i;                                                              //riportiamo il suo numero associato
         }
     }


     if(numero == 0)                                                              //se la direzione individuata non � percorribile, poich� opposta a quella precedente, si considera il secondo massimo
     {
         if(direzioni_uguali(massimo2,vettore,&direzione))                        //adoperiamo dunque gli stessi controlli effettuati sul primo massimo
            dir = casuale_massimo(massimo2,vettore,&direzione);                   //sceglieremo dunque una direzione casuale nel caso ci siamo pi� direzioni uguali al secondo massimo
         else
         {
             for(i = 0; i < 4; i++)                                               //altrimenti individuiamo quale direzione � uguale al secondo massimo
             {                                                                    //si nota che in questo caso non viene verificato se essa si opposta a quella precedente
                 if(vettore[i] == massimo2)                                       //infatti se il primo massimo risulta essere opposto alla direzione precedente, di conseguenza il secondo sar� diverso
                    dir = i;
             }

         }
     }
     return dir;
}




