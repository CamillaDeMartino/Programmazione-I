#include <stdio.h>
#include <math.h>

int main()
{
/*//Determinare se un numero intero inserito dall’utente è divisibile per 3.//
int n;
printf("Inserisci un numero e vediamo se e' divisibile per 3:\n ");
scanf("%d",&n);
if((n%3)==0)
    printf("Il numero e' divisibile per tre");
else
    printf("Non e' divsibile per 3");
*/

/*//Determinare se un numero intero inserito dall’utente è pari o dispari//
int n;
printf("Inserisci un numero per identificare se è pari o dispari:\n ");
scanf("%d", &n);
if((n%2==0))
    printf("Il numero %d e' pari\n", n);
else
    printf("Il numero %d e' dispari\n", n);
*/

//Determinare il massimo tra due numeri inseriti dall’utente//
/*int n1, n2;
printf("Inserire il primo numero: \n");
scanf("%d", &n1);
printf("Inserire il secondo numero: \n");
scanf(" %d", &n2);
if(n1<n2)
    printf("Il numero %d e' il minimo e il numero %d e' il massimo\n ",n1, n2);
else if (n1==n2)
    printf("Non esite un minimo e un massimo\n");
else
    printf("Il numero %d e' il massimo e il numero %d e' il minimo\n ",n2, n1);
  */

/*//Scrivere un programma in linguaggio C che legga da tastiera una sequenza di lunghezza ignota a
//priori di numeri interi positivi. Il programma, a partire dal primo numero introdotto, stampa ogni
//volta la media di tutti i numeri introdotti. Terminare quando il numero inserito è negativo.

int n, i, somma, media ;
 i = 0;
 somma = 0;
 printf ("Inserisci un numero: ");
 scanf("%d",&n);
 while(n>=0) {
 somma=somma+n;
 i++;
 media=somma/i;
 printf ("La media attuale e': %d\n", media);
 printf ("Inserisci un numero: ");
 scanf("%d",&n);
 }
 printf ("La media finale e': %d\n", media);

  */



/*//Si scriva un programma in linguaggio C che legga un valore intero e visualizzi il valore
//intero precedente e il successivo.

int val_prec, val_succ, n;
printf("Digita un numero ");
scanf("%d", &n);
val_prec=n-1;
val_succ=n+1;
printf("Il valore precedente e' %d\n", val_prec);
printf("Il valore successivo e' %d\n", val_succ);
    */

/*//Si realizzi un programma in linguaggio C che acquisisca da tastiera un numero e stampi il
//valore assoluto di tale numero.
int x, val_ass;
printf("Calcoliamo il valore assoluto da un numero scelto da te: \n");
scanf("%d", &x);
if(x>=0){
    val_ass=x;
printf("Il valore assoluto e': %d\n", val_ass);}
else{
    val_ass=-x;
printf("Il valore assoluto e': %d\n", val_ass);}
  */


/*//determini se B è un numero positivo o negativo
//determini se A è un numero pari o dispari
//calcoli il valore di A + B
//determini quale scelta dei segni nell’espressione (±A) + (±B) porta al risultato massimo, e quale è questo valore massimo.

int b, a, somma, val_massimo;
printf ("Inserisci un numero: ");
scanf("%d",&b);
printf("Inserisci un secondo numero: ");
scanf("%d", &a);
if(b>=0)
    printf("Il numero %d e' un numero positivo\n", b);
else
    printf("Il numero %d e' un numero negativo\n", b);
if((a%2)==0)
    printf("Il numero %d e' pari\n",a);
else
    printf("Il numero %d e' dispari\n", a);

    somma=a+b;
    printf("La somma di %d e %d e': %d\n", b, a, somma);

    if (a>0&&b>0){
        val_massimo=a+b;
        printf("Il valore massimo e': %d", val_massimo);
        }
  */

/*//Si scriva un programma in linguaggio C che implementi una semplice calcolatrice in grado
//di compiere le 4 operazioni (+ − × ÷) tra numeri interi.
//Il programma presenti un semplice menù da cui l’utente indichi (con un numero tra 1 e
//4) l’operazione da svolgere. In seguito il programma acquisirà da tastiera i due operandi e
//stamperà il risultato dell’operazione.

int n,x1,x2;
int risultato;
float risult;
printf("Inserisci un numero: \n");
scanf("%d", &x1);
printf("Inserisci un secondo numero: \n");
scanf("%d", &x2);
printf("Quale operazione si vuole eseguire?\nPremere 1 per addizione, 2 per sottrazione, 3 moltiplicazione, 4 divisione\n");
    scanf("%d", &n);
    switch(n){
case 1:
    risultato=x1+x2;
    printf("La somma e':%d", risultato);
    break;
case 2:
    risultato=x1-x2;
    printf("Il quoziente e': %d", risultato);
    break;
case 3:
    risultato=x1*x2;
    printf("Il risultato e': %d", risultato);
    break;
case 4:
    risult=x1/x2;
    printf("Il risultato della divisione e': %f", risult);
    break;
    }*/

/*//Si scriva un programma in linguaggio C che acquisisca tre numeri interi da tastiera e:
//• determini, stampando un messaggio opportuno quale dei tre numeri sia maggiore
//• stampi il valore di tale numero.
  int a,b,c, maggiore;
  printf("Digita un numero: \n");
  scanf("%d", &a);
  printf ("Digita un secondo numero: \n");
  scanf("%d", &b);
  printf("Digitare un terzo numero: \n");
  scanf("%d", &c);
  if(a>b&&a>c){
    maggiore=a;
    printf("Il valore piu' grande e': %d\n", maggiore);
  }
  else if(b>a&&b>c){
    maggiore=b;
    printf("Il valore maggiore e': %d\n", maggiore);
  }
  else {
    maggiore=c;
    printf("Il valore piu' grande e': %d\n", maggiore);
  }
*/

/*//Si scriva un programma in linguaggio C per calcolare la media aritmetica di una serie
//di numeri inseriti da tastiera. L’introduzione di un valore particolare pari a “0” indica il
//termine del caricamento dei dati.
int n,media, x;
int i=0, somma=0;
printf("Inserisci un numero: \nla media verra' calcolata dopo aver immesso il numero 0\n ");
scanf("%d", &n);
while(n!=0){
   printf("Inserisci un  numero \n");
   scanf("%d", &n);
   somma=somma+n;
   i++;
}
media=somma/i;
printf("La media e': %d", media);
*/
//altro modo
/*printf("Quanti numeri vuoi inserire?: \n");
scanf("%d", &n);
for(i=0;i<n;i++){
    printf("Inserisci un numero: \n");
    scanf("%d", &x);
    somma=somma+x;
   if(x==0)break;
     printf("Termine caricamento dati" );
     }

    media=somma/i;
    printf("La media e': %d", media);
*/

/*//Si scriva un programma in linguaggio C per calcolare il valore massimo e minimo di un
//insieme di N numeri inseriti da tastiera. Il programma deve leggere il valore di N, ed
//in seguito deve leggere una sequenza di N numeri. A questo punto il programma deve
//stampare il massimo ed il minimo tra i numeri inseriti.
  int i, n, x, max, min;
  printf("Quanti numeri vuoi inserire? ");
  scanf("%d", &n);
  printf("Inserisci un numero: ");
  scanf("%d", &x);
  max=x;
  min=x;
  for(i=0;i<n-1;i++){
    printf("Inserisci un numero: ");
    scanf("%d", &x);
   if (x>max)
    max=x;
   else{
    min=x;}
    printf("Il massimo e': %d\n", max);
    printf("Il minimo e': %d\n", min);
  }
*/

/*//Dati N numeri interi letti da tastiera si vogliono calcolare e stampare su schermo diversi risultati:
//• quanti sono i numeri positivi, nulli e negativi
//• quanti sono i numeri pari e dispari
//• se la sequenza dei numeri inseriti è crescente, decrescente oppure né crescente né decrescente

int i,n,x;
int positivi=0, nulli=0, negativi=0;
int pari=0, dispari=0;
int prec, crescente=1, decrescente=1 ;
printf("Quanti numeri vuoi inserire?: \n");
scanf("%d",&n);
for(i=1;i<=n;i++){
    prec=x;
    printf("Inserisci un numero: \n");
    scanf("%d",&x);
    if(x>0)
        positivi++;
        else if  (x=0)
            nulli++;
                else
                negativi++;
    if(x%2==0)
        pari++;
        else
            dispari++;
   if(i>1){
    if(prec>x)
        crescente=0;
    else if(prec<x)
        decrescente=0;
   }
}
printf("I numeri positivi sono: %d\n", positivi);
printf("I numeri nulli sono: %d\n", nulli);
printf("I numeri negativi sono: %d\n", negativi);
  printf("I numeri pari sono: %d\n", pari);
  printf("I numeri dispari sono: %d\n",dispari);
if(crescente==1)
    printf ("La sequenza e' crescente");
else if (decrescente==1)
    printf ("La sequenza e' decrescente");
    else
     printf("Sequenza ne crescente ne decrescente");
   */


/*//Sia dato un numero intero positivo N inserito da tastiera. Si scriva un programma in
//linguaggio C che calcoli i numeri interi che sono divisori (con resto uguale a zero) di N.
//Dire inoltre se N è un numero primo.

int n, divisore;
printf ("Inserisci un numero intero: ");
scanf("%d", &n);
divisore=1;
while (divisore<n) {
      if (n%divisore==0)
     printf(" %d e' il divisore del numero %d\n", divisore, n);
    divisore++;
  }
//non svolto completamente
*/


  //Disegno figure geometriche
//1. Si realizzi un programma in linguaggio C che legga un numero intero N e visualizzi un quadrato di asterischi di lato N (vedi esempio con N = 5).
//2. Si realizzi una variante del programma per visualizzare solo i lati del quadrato (vedi esempio con N = 5).
//3. Si realizzi una variante del programma per visualizzare un triangolo isoscele rettangolo di lato N (vedi esempio con N = 5).
//4. Si realizzi una variante del programma per visualizzare un quadrato di lato N come
//nell’esempio del caso 4 (con N = 5).

/*int riga, colonna, lato;
printf("Inserisci il valore del lato: ");
scanf("%d",&lato);
if(lato<=0)
  printf("Non posso calcolare un lato con numeri negativi");
else {
    colonna=0;
while (colonna<lato){
riga=0;
while(riga<lato){
  printf("*");
  riga++;
}
printf("\n");
colonna++;
}}
*/

/*int riga, colonna, lato;
printf("Inserisci il valore del lato: ");
scanf("%d", &lato);
if(lato<=0)
      printf("Non posso calcolare un lato con numeri negativi");
else{
        riga=0;;
    while(riga<lato){
        colonna=0;
    while(colonna<lato){
        if(riga==0||riga==lato-1)
       printf("*");
        else if (colonna==0||colonna==lato-1)
        printf("*");
        else
            printf(" ");
     colonna++;
     }
printf("\n");
riga++;
    }
}
*/


/*//inserisici due numeri da tastiera
//individua il maggiore
//individua in caso in cui siano uguali la somma

int num1, num2, somma, maggiore;
printf("Inserisci un numero: ");
scanf("%d", &num1);
printf("Inserisci un secondo numero: ");
scanf("%d", &num2);
if (num1>num2)
{
    maggiore=num1;
    printf("Il numero maggiore tra %d e %d e' %d\n", num1, num2, maggiore);
}
else if(num1<num2)
{
   maggiore=num2;
   printf("Il numero maggiore tra %d e %d e' %d", num1, num2, maggiore);
}
    else {
     somma=num1+num2;
    printf("La somma tra il numero %d e %d e' %d\n", num1, num2, somma);
    }
*/

/*//Scrivi un algoritmo che inseriti tre numeri interi da tastiera scriva in uscita chi è il più alto,
//il più basso e il medio fra i tre numeri inseriti
int num1, num2, num3;
int magg,min,med;
printf("Inserisci un numero: \n");
scanf("%d", &num1);
printf("Inserisci un secondo numero: \n");
scanf("%d", &num2),
printf("Inserisci un terzo numero: \n");
scanf("%d", &num3);
if (num1>num2&&num1>num3){
magg=num1;}
else if (num2>num1&&num2>num3){
    magg=num2;}
else{
    magg=num3;}

if(num1<num2&&num1<num3)
min=num1;
else if (num2<num1&&num2<num3){
    min=num2;}
else{
    min=num3;}

if((num1==magg&&num2==min)|| (num1==min&&num2==magg)){
    med=num3;}
    else if ((num3==magg&&num2==min)||(num3==min&&num2==magg)){
        med=num1;
    }
    else
        med=num2;
    printf("Il numero massimo e' %d\n",magg);
   printf("Il numero minimo e' %d\n",min);
   printf("Il numero medio e' %d\n",med);
*/
/*
//modo alternativo
int x, y,z;
int magg, min, med;
printf("Inserisci un numero: \n");
scanf("%d", &x);
printf("Inserisci un secondo numero: \n");
scanf("%d", &y);
printf("Inserisci un terzo numero: \n");
scanf("%d", &z);
if(x>y)
    magg=x;
else
    magg=y;
if(z>magg){
    magg=z;}
    if(x<y)
        min=x;
    else
        min=y;
    if(z<min)
        min=z;
        if (x<magg&&x>min)
            med=x;
        else if (y<magg&&y>min)
            med=y;
        else
            med=z;
    printf("Il numero massimo e' %d\n",magg);
    printf("Il numero minimo e' %d\n",min);
    printf("Il numero medio e' %d\n",med);
    */

//se l'agente vende piu di 5000euro di caffe ha diritto ad una provvigione del 10% altrimenti del 5%
//se vende piu di 10000 euro di te è del 16% altrimenti 4
//se il totale venduto è piu di 20000euro vi è un premio del 20% sul totale

/*int totale, premio, provvigione, caffe, the;
printf("Inserisci quanto caffe hai venduto: \n");
scanf("%d", &caffe);
if(caffe>5000)
    provvigione=caffe*0.1;
else
    provvigione=caffe*0.05;
printf("Inserisci quanto the hai venduto: \n");
scanf("%d",&the);
if(the>10000)
    provvigione=the*0.16;
else
    provvigione=the*0.04;
totale=caffe+the;
if(totale>20000){
    premio=totale*0.2;
    printf("Complimenti hai ricevuto un premio di %d euro\n", premio);}
    else{
        premio=0;
        printf("Mi dispiace hai venduto troppo poco per ottenere un premio\n");}
printf("La provvigione ottenuta sulla vedita di %d di caffe e' %d euro\n", caffe, provvigione);
printf("La provvigione ottenuta su %d di the e' %d euro\n", the, provvigione);
*/


/*//Utilizza un ciclo for realizzare un algoritmo che esegua la somma e la media di n numeri inseriti da tastiera
//con n acquisito a sua volta da tastiera.
int x, n, i, somma=0;
float media;
printf("Quanti numeri vuoi inserire? \n");
scanf(" %d", &n);
for(i=0;i<n;i++){
    printf("Inserisci un numero: ");
    scanf(" %d", &x);
    somma=somma+x;
    media=somma/n;
    }
printf("la somma e': %d\n", somma);
printf("La media dei numeri e': %f", media);
*/

/*//Descrivi un algoritmo che riceve in ingresso un numero e ne calcola la sua potenza n-esima sempre con n inserito da tastiera
int i, n, x, potenza;
printf("Inserisci un numero: \n");
scanf("%d",&x);
printf("Inserisci l'esponente: \n");
scanf("%d",&n);
potenza=x;
for (i=1;i<n; i++){
    potenza=potenza*x;
}
printf("La potenza del numero %d e' %d", x, potenza);
*/

/*//fattoriale
int i=1,fattoriale=1,n;
printf("Inserisci un numero: ");
scanf("%d",&n);
while(i<=n)
{
fattoriale=fattoriale*i;
i++;
}
printf("Il fattoriale di %d e' %d", n, fattoriale);*/

/*//Calcola l'mcm di tre monomi inseriti da tastiera
int x,y,z,mcm=0, i, massimo;
printf("Inserisci il primo numero: \n");
scanf("%d",&x);
printf("Inserisci un secondo numero: \n");
scanf("%d",&y);
printf("Inserisci un terzo numero: \n");
scanf("%d",&z);
if(x>y)
    massimo=x;
else
    massimo=y;
if(z>massimo)
    massimo=z;
if((massimo%x==0)&&(massimo%y==0)&&(massimo%z==0))
    mcm=massimo;
else{
    i=massimo;
    do{
        i+=massimo;
        if((i%x==0)&&(i%y==0)&&(i%z==0))
            mcm=i;
    }
    while(mcm!=i);
}
    printf("Il minimo comune multiplo e': %d", mcm);
    */



   /* //Usa un ciclo do-while per eseguire il prodotto di due numeri interi attraverso somme successive.
    int i,x, y, prodotto=0;
    printf("Inserisci il primo numero intero: \n");
    scanf("%d",&x);
    printf("Inserisci un secondo numero: \n");
    scanf("%d",&y);
    i=0;
    do{
    prodotto=prodotto+x;
    i++;
    }
    while(i<y);
    printf("Il prodotto e': %d", prodotto);
    */


    //Individua il maggiore o minore tra i numeri dati
   /* int n, i, max, x, min;
    printf("Quanti numeri vuoi inserie? ");
    scanf("%d", &n);
    printf("Inserisci un numero: ");
    scanf("%d", &x);
    max=x;
    min=x;
    for(i=1;i<n;i++){
        printf("Inserisci un altro valore: ");
        scanf("%d", &x);
        if (x>max)
            max=x;
        else if (x<min)
            min=x;
    }
    printf("Il massimo e': %d\n", max);
    printf("Il minimo e': %d\n", min);
*/

  /*  int x, y, n, i, max, min;
    printf("Quante coppie di numeri vuoi inserire? \n");
    scanf("%d", &n);
    printf("Inserisci una prima coppia: \n");
    scanf("%d" "%d", &x, &y);
if(x>y){
    max=x;
    min=y;
    }
else{
    max=y;
    min=x;
}
    for(i=1;i<n;i++){
        printf("Inserisci altri 2 valori: \n");
        scanf("%d" "%d", &x, &y);
        if (x>y){
        if(x>max)
            max=x;
            if(y<min)
                min=y;
         }
        else {
            if(x<min)
                min=x;
                if(y>max)
                    max=y;
            }

    }
    printf("Il massimo e': %d\n", max);
    printf("Il minimo e': %d\n", min);
*/

/*//Scrivere un programma che, richiesti in ingresso due valori interi distinti, ne determini il maggiore.
int x,y, maggiore;
printf("Inserisci due numeri interi distinti: \n");
scanf("%d" "%d", &x, &y);
if(x>y)
    maggiore=x;
else
    maggiore=y;
printf("Il valore maggiore e': %d\n", maggiore);
*/

/*//Scrivere un programma che, richiesti due numeri interi qualsiasi, segnali se i due numeri sono uguali;
//in caso contrario indichi il minore e il maggiore.
int x,y;
printf("Inserisci due numeri:\n ");
scanf("%d" "%d", &x, &y);
if(x==y)
    printf("I due numeri sono uguali");
else {
if (x<y)
printf("%d e' il numero minore\n%d e' il numero maggiore", x, y);
else
    printf("%d e' il numero minore\n%d e' il numero maggiore", y, x);
}
  */

/*  //Un negoziante per ogni spesa di importo superiore a 100 € effettua uno sconto del 5%,
//del 10% per ogni spesa superiore a 300 €.
//Scrivere un programma che richieda all'utente l'ammontare della spesa e visualizzi quindi l'importo effettivo da pagare
int x, conto;
printf("Qual e' l'importo totale della spesa?\neuro:");
scanf("%d", &x);
if(x>100&&x<300)
    conto=x*0.05;
else if (x>300)
    conto=x*0.1;
else
    conto=x;
printf("Il totale da pagare e' %d euro", conto);
   */

/*//Scrivere un programma che, richiesti in input tre numeri interi, visualizzi a seconda dei casi una delle seguenti risposte:
//Tutti uguali
//Due uguali e uno diverso
//Tutti diversi

int x, y, z;
printf("Inserisci tre numeri: \n");
scanf("%d" "%d" "%d", &x, &y, &z);
if (x==y&& y==z&& z==x)
    printf("Tutti uguali");
else if (x==y||y==z||x==z)
    printf("Due uguali e uno diverso\n");
else
    printf("Tutti diversi\n");
   */

/*// Scrivere un programma che, lette le misure dei lati di un triangolo, visualizzi se il triangolo è equilatero, isoscele o scaleno.
int x, y, z;
printf("Inserisci la misura della base e dei due lati del triangolo: \n");
scanf("%d" "%d" "%d", &x, &y, &z);
if(x==y&&y==z)
    printf("Il triangolo e' equilatero\n");
    else if (y==z||x==z||x==y)
    printf("Il triangolo e' isoscele\n");
    else
    ("Il triangolo e' scaleno");
   */

/*//Su una linea ferroviaria, rispetto alla tariffa piena, gli utenti pensionati usufruiscono di uno sconto del 10%,
//gli studenti del 15% e i disoccupati del 25%.
char passeggero;
float biglietto, prezzo;
printf("Quanto costa il biglietto? ");
scanf(" %f", &biglietto);
printf("Inserire il proprio stato.\nPremere p per pensionato, s per studente, d per disoccupato: \n");
scanf(" %c", &passeggero);
switch(passeggero){
case 'p':
    prezzo=biglietto*0.1;
    break;
case 's':
    prezzo=biglietto*0.15;
    break;
case 'd':
    prezzo=biglietto*0.25;
    break;

}
    printf("Complimenti hai diritto ad uno sconto!!!!!Devi pagare %f euro\n ", prezzo);
    */

/*//Menu di prova
char lettera;
printf("MENU DI PROVA - premere:\n\na) Per immettere dati\nb) Per determinare il maggiore\nc) Per determinare il minore\nd) Per ordinare\ne) Per visualizzare\n");
printf("\n  Scelta:_");
scanf("%c", &lettera);
switch (lettera){
case'a': printf("In esecuzione l'opzione a)");
break;
case 'b': printf("In esecuzione l'opzione b)");
break;
case 'c': printf("In esecuzione l'opzione c)");
break;
case 'd': printf("In esecuzione l'opzione d)");
break;
case 'e': printf("In esecuzione l'opzione e)");
break;
default: printf("Opzione non esistente.");
break;
}
*/

 /*//somma media prodotto minore maggiore di 3 interi solo con if
 int x, y, z, somma, media, prodotto, magg, min;
 printf( "Inserisci tre interi: ");
 scanf("%d%d%d", &x, &y, &z);
 somma = x + y + z;
 media = somma/3;
 prodotto = x * y * z;
 printf( "La somma e' %d\nLa media e' %d\nIl prodotto e' %d\n", somma, media, prodotto);
   if(x>y&&x>z){
    magg=x;
    if(y>z){
        min=z;
    }
    else
        min=y;
   }
   else if(y>x&&y>z){
    magg=y;
    if (x>z)
        min=z;
    else
        min=x;
   }
   else{
    magg=z;
   if (x>y)
    min=y;
        else
        min=x;
   }

printf("Il maggiore e' %d\nIl minore e' %d\n", magg, min);
   */
/* stampa figure
   printf("*********\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*       *\n*********\n\n");
   printf("   ***\n *     *\n*       *\n*       *\n*       *\n*       *\n*       *\n *     *\n   ***   \n\n");
   printf("  *\n ***\n*****\n  *\n  *\n  *\n  *\n  *\n  *\n\n");
   printf("    *\n   * *\n  *   *\n *     *\n*       *\n *     *\n  *   *\n   * *\n    *\n");
   */

   /*printf(" ccccc\nc     c\nc     c\n\n");
   printf("aaaaaaa\n   a  a\n   a  a\naaaaaaa\n\n");
   printf("mmmmmm\n     m\n    m\n     m\nmmmmmm");
   */

   /*//separazione cife di un intero
   int num, n1,n2,n3,n4,n5;
   printf("Inserisci un numero di 5 cifre: \n");
   scanf("%d", &num);
   n1=num/10000;
   n2=num/1000-n1*10;
   n3=num/100-(n1*100)-(n2*10);
   n4=num/10-(n1*1000)-(n2*100)-(n3*10);
   n5=num/1-(n1*10000)-(n2*1000)-(n3*100)-(n4*10);
   printf("%d  %d  %d  %d  %d", n1, n2, n3, n4, n5);
   */

   /*//Calcolare la somma di numeri interi da 1 a 10;
   int x, somma;
   somma=0;
   x=1;
   while (x<=10)
   {
       somma+=x;
       x++;
   }
printf("La somma e': %d", somma);
   */
   /*//Calcolare la potenza x alla y
   int x, y, pow=1, i;
   printf("Inserisci la base: \n");
   scanf("%d", &x);
   printf("Inserisci la potenza: \n");
   scanf(" %d", &y);
   i=1;
   while(i<=y)
   {
       pow=pow*x;
       i++;
   }
   printf("La potenza e'%d", pow);
   */
/*//Somma il quadrato dei numeri da 1 a 10
   int x=1, totale=0, y;
   while(x<=10){
    y=x*x;
    printf( "%d\n", y);
    totale+=y;
    ++x;
   }
   printf("Totale e' %d\n", totale);
  */

/*//calolarea le miglia per gallone ad ogni pieno
  int counter,total;
float x//km//,y//litri//,consumo,average;

total=0;
counter=0;

printf("Digitare numero di km percorsi(digitare -1 per interrompere il programma)\n");
scanf("%f",&x);
printf("Digitare numero di litri consumati\n");
scanf("%f",&y);
consumo=x/y;
printf("Il consumo e' di %.2f km/l\n\n",consumo);

while(x!= -1){
counter+=1;
total=total+consumo;
printf("Digitare numero di km percorsi(digitare -1 per interrompere il programma)\n");
scanf("%f",&x);
if(x>0){
printf("Digitare numero di litri consumati\n");
scanf("%f",&y);
consumo=x/y;
printf("Il consumo e' di %.2f km/l\n\n",consumo);}}

if(counter!= 0){
average=(float)total/counter;
printf("La media totale di km al litro e'%.2f\n",average);}
else{
printf("Non hai inserito sufficienti dati\n");
}*/

/*//Verifica limite di credito
float num_conto, saldo_iniziom, addebiti, crediti, limite, nuovo_saldo;
int i=0;
printf("Inserisci il numero del conto(premere -1 per uscire): \n");
     scanf("%f", &num_conto);
     printf("Inserisci il saldo di inizio mese: \n");
     scanf(" %f", &saldo_iniziom);
     printf("Inserisci il totale degli addebiti: \n");
     scanf(" %f", &addebiti);
     printf("Inserisci il totale dei crediti: \n");
     scanf(" %f", &crediti);
     printf("Inserisci il limite di credito concesso: \n");
     scanf(" %f", &limite);
     nuovo_saldo=saldo_iniziom+ addebiti - crediti;
     if(nuovo_saldo>limite){
     printf("Conto:   %.2f\nLimite di credito:  %.2f\nSaldo:   %.2f\n", num_conto, limite, nuovo_saldo);
            printf("Limite di credito superato\n\n");}

while(num_conto!= -1)
{
    i++;
    printf("\nInserisci il numero del conto(premere -1 per uscire): \n");
     scanf("%f", &num_conto);
    if(num_conto>0)
    {
     printf("Inserisci il saldo di inizio mese: \n");
     scanf(" %f", &saldo_iniziom);
     printf("Inserisci il totale degli addebiti: \n");
     scanf(" %f", &addebiti);
     printf("Inserisci il totale dei crediti: \n");
     scanf(" %f", &crediti);
     printf("Inserisci il limite di credito concesso: \n");
     scanf(" %f", &limite);
     nuovo_saldo=saldo_iniziom+ addebiti - crediti;
     if(nuovo_saldo>limite){
     printf("Conto:   %.2f\nLimite di credito:  %.2f\nSaldo:   %.2f\n", num_conto, limite, nuovo_saldo);
            printf("Limite di credito superato\n\n");}
    }

}*/
/*//calcolo delle commissioni sulle vendite
float vendita, salario;
printf("Inserisci il totale di vedita in dollari(premi -1 per uscire dal programma): \n");
scanf("%f", &vendita);
salario=200+(vendita*0.09);
printf("Il salrio e' %.2f$\n\n", salario);
while(vendita!= -1)
{
   printf("Inserisci il totale di vedita in dollari(premi -1 per uscire dal programma): \n");
   scanf("%f", &vendita);
   if(vendita>0)
   {
       salario=200+(vendita*0.09);
printf("Il salrio e' %.2f$\n\n", salario);
   }

}
*/

/*//calcolo del salario
int ore_lavorative;
float salario, paga_oraria;
printf("Quante ore hai lavorato?(premi -1 per uscire): \n");
scanf("%d", &ore_lavorative);
printf("Inserisci la paga oraria: \n\n");
scanf("%f", &paga_oraria);
if(ore_lavorative<= 40)
    salario=ore_lavorative*paga_oraria;
    else
        salario=ore_lavorative*paga_oraria+paga_oraria/2;
    printf("Salario e': %.2f\n\n", salario);
    while(ore_lavorative!= -1)
    {
     printf("Quante ore hai lavorato?(premi -1 per uscire): \n");
     scanf("%d", &ore_lavorative);
     if(ore_lavorative>0)
     {
      printf("Inserisci la paga oraria: \n\n");
      scanf("%f", &paga_oraria);
     if(ore_lavorative<= 40)
      salario=ore_lavorative*paga_oraria;
     else
        salario=ore_lavorative*paga_oraria+paga_oraria/2;
    printf("Salario e': %.2f\n\n", salario);
     }

    }*/

    /*//stampare i numeri da 1 a 10 tutti sulla stessa riga con 3 spazi da tri loro con un ciclo
    int i=1;
    while(i<=10){
        printf("%d   ", i);
        i++;}*/

 /*//trovare il massimo di numeri inseriti
 int i=1,n, massimo;
 printf("Inserisci il primo numero: \n");
 scanf("%d", &n);
 massimo=n;
 while(i<10){
    printf("Inserisci un altro numero: \n");
    scanf("%d", &n);
    if(n>massimo)
        massimo=n;
    i++;
 }
        printf("il massimo e' %d\n", massimo);

   */
/*//trovare i 2 numeri pu grandi tra 10 numeri
int i=1, x, max1, max2;
printf("Inserisci il primo numero: \n");
scanf("%d", &x);
max1=x;
max2=x;
while(i<10){
    printf("Inserisci un altro numero: \n");
    scanf("%d", &x);
    if(x>max2){
        max1=max2;
        max2=x;
    }
    else if (x>max1)
        max1=x;
i++;
}
printf("I due numeri piu' grandi sono %d e %d\n ",max1, max2);


*/

/*//tabella di output
int i=1, dieci, cento, mille;
while(i<=10)
{
    dieci=i*10;
    cento=i*100;
    mille=i*1000;
    printf("%d %d %d %d\n", i, dieci, cento, mille);
    i++;
}*/

/*//tabella di output pt2
int i=1,x, somma_due, somma_quattro, somma_sei;
while(i<=5)
{
    x=i*3;
    somma_due=x+2;
    somma_quattro=x+4;
    somma_sei=x+6;
    i++;
    printf("%d\t %d\t %d\t %d\n", x, somma_due, somma_quattro, somma_sei);
}
*/

/*int i=1;
while(i<=10)
{
    puts(i % 2 ? "****" : "++++++++");
    ++i;
}
*/

/*//qiadrato di asterischi
int n, colonne , righe=1;
printf("Inserisci il lato del quadrato: \n");
scanf("%d", &n);
if(n>1 && n<20)
{
    while(righe<=n)
    {
        colonne=1;
       while(colonne<=n)
       {
           printf("*");
           colonne++;
       }
       righe++;
       printf("\n");
    }}
    else
        printf("Numero non accettabile");
*/

/*//quadrato vuoto
int n, righe, colonne;
printf("Inserisci il lato del quadrato: \n");
scanf("%d", &n);
if(n>1 && n<20)
{
    while(righe<=n)
    {
        printf("*");
        colonne=1;
       while(colonne<=n)
       {
           if(righe==0 || righe==n){
           printf("*");}
           else {
            printf(" ");
           }
           colonne++;
       }
       printf("*\n");
       righe++;
    }}
    else
        printf("Numero non accettabile");
*/

/*//Separare interi con il while
int i=10000, num, n1;
   printf("Inserisci un numero di 5 cifre: \n");
   scanf("%d", &num);
   while (i>0)
   {
       n1=(num/i);
       num%=i;
       printf(" %d  ", n1);
       i/=10;
   }
*/

/*//test palindromo
int num, n1,n2,n3,n4,n5;
   printf("Inserisci un numero di 5 cifre: \n");
   scanf("%d", &num);
   n1=num/10000;
   n2=num/1000-n1*10;
   n3=num/100-(n1*100)-(n2*10);
   n4=num/10-(n1*1000)-(n2*100)-(n3*10);
   n5=num/1-(n1*10000)-(n2*1000)-(n3*100)-(n4*10);
   if(n1==n5&&n2==n4)
    printf("Il numero e' un palindromo\n");
   else
    printf("Il numero non e' un palindromo\n\n");
*/


//Trovare multipli di 10
//Stampa 100 asterischi uno alla volta. Dopo ogni 10 asterisco stampa new line

/*int asterisco=1;
while (asterisco<=100)
{
    printf ( "*" );
    if (asterisco%10==0)
        printf("\n");

    asterisco++;
}
*/

/*// contare i 7 in una sequenta di 5 numeri
int n, n1, n2, n3, n4, n5;
int sette=0;
printf ( "Inserisci un numero da 5 cifre\n" );
scanf("%d", &n);
n1 = n/10000;
n2 = n/1000 - n1*10;
n3 = n/100 - n1*100 - n2*10;
n4 = n/10 - n1*1000 - n2*100 - n3*10;
n5 = n/1 - n1*10000 - n2*1000 - n3*100 - n4*10;
if (n1 == 7)
    ++sette;
    if (n2 == 7)
        ++sette;
    if(n3 == 7)
        ++sette;
    if(n4 == 7)
        ++sette;
    if(n5== 7)
        ++sette;
printf( "In questo numero sono presenti %d sette\n", sette);
*/

/*//metodo alternativo
int i=10000, num, n1, sette=0;
   printf("Inserisci un numero di 5 cifre: \n");
   scanf("%d", &num);
   while (i>0)
   {
       n1=(num/i);
       num%=i;
       i/=10;
   if (n1==7 )
    ++sette;}
   printf( "Ci sono %d sette" ,sette);
*/

/*//scacchiera di asterischi stampa uno poi metti lo spazio e vai a capo saltando uno
int asterisco = 1;
int i = 1;
    int riga = 1;
    while ( asterisco <= 64 )
        {
        while ( asterisco <= 8 * i )
        {
            printf( "* " );
            ++asterisco;
        }
        printf( "\n" );
        ++i;
        ++riga;
        if ( riga%2 == 0 )
            printf( " " );
        }
*/
/*//Multipli di 2 con ciclo infinito
int i=1, multiplo;

while ( i > 0){
        multiplo = i*2;
            i++;
  printf("%d", multiplo);
}
*/


/*//diametro, circonferenza e area di un cerchio
float raggio, circonfernza, diametro, area;
const float pi_greco = 3.14159;
printf( "Inserisci il raggio del cerchio: \n" );
scanf("%f", &raggio);
if (raggio <= 0)
    printf( "Il raggio non puo' essere negativo!\n" );
else
{
    diametro = raggio*2;
    circonfernza = 2*pi_greco*raggio;
    area = pi_greco*raggio*raggio;
    printf( "La misura del diametro e' %f\nLa misura della circoferenza e' %f\nLa misura dell'area e': %f\n\n", diametro, circonfernza,area );
}

*/


/*//lati di un triangolo
int lato1, lato2, lato3;
printf ( "Inserisci la misura dei 3 lati: \n" );
scanf("%d%d%d", &lato1, &lato2, &lato3);
if (lato1 < lato2 + lato3 || lato1 < lato3 + lato2)
    printf ("Questi sono i lati di un triangolo\n");
else if (lato2 < lato1 + lato3 || lato2 < lato3 + lato1)
    printf ("Questi sono i lati di un triangolo\n");
else if (lato3 < lato2 + lato1 || lato3 < lato1 + lato2)
    printf ("Questi sono i lati di un triangolo\n");
*/

/*//triangolo rettangolo
int lato1, lato2, lato3;
printf ( "Inserisci la misura dei 3 lati di un triangolo: \n" );
scanf("%d%d%d", &lato1, &lato2, &lato3);
if (lato1 == sqrt(lato2*lato2 + lato3*lato3) ||lato1 == sqrt(lato3*lato3 + lato2*lato2))
printf ("Il triangolo e' un triangolo rettangolo");
    else if (lato2 == sqrt(lato1*lato1 + lato3*lato3) || lato2 == sqrt(lato3*lato3 + lato1*lato1))
    printf ("Il triangolo e' un triangolo rettangolo");
    else if (lato3 == sqrt(lato1*lato1 + lato2*lato2) || lato3 == sqrt(lato2*lato2 + lato1*lato1))
    printf ("Il triangolo e' un triangolo rettangolo");
*/

/*//fattoriale
int i=2, fatt=1, n;
printf ( "Inserire il numero da calcolare: \n" );
scanf("%d", &n);
while (i<=n)
{
    fatt = fatt*i;
    i++;
}
printf("Il fattoriale del numero %d e' %d", n, fatt);
*/


/* //fattoriale per numero di nepero
 int i=1, n;
 float fatt=1, e=1;

printf ("Quanti fattoriali vuoi considerare?\n");
scanf("%d", &n);
while (i<=n)
{
    fatt = fatt*i;
    i++;
    e=e+1/fatt;

}
printf("Il  numero di nepero e': %f", e);
*/

/*//valore esponenziale
int i=1, n, x;
float fatt=1, e=1, potenza=1;
printf ("Quanti fattoriali vuoi inserire?\n");
scanf("%d", &n);
printf ("Inserisci il valore della x\n");
scanf("%d", &x);

while (i<=n){
    potenza*= x;
    fatt *= i;
    e += potenza/fatt;
    i++;

}
printf("Il  numero di nepero esponenziale e': %f", e);
*/


/*//somma di sequenza di interi
int n, somma, x, i;
printf ( "Quanti numeri si vogliono sommare?\n" );
scanf("%d", &n);
printf ( "Inserisci un numero:\n" );
scanf(" %d", &x);
for (i = 1; i <=n; i++){

        somma= somma + x*i;
    }
    printf ( "La somma di %d piu' i %d numeri consecutivi e' %d", x,n,somma);*/

/*//media di una sequenza di interi
int x, media, somma=0, num_ins=0;
printf ( "Inserisci i numeri con i quali si vuole calcolare la media\nInserire 9999 per terminare\n");
while (x!=9999){
scanf("%d", &x);
somma=somma+x;
num_ins++;
}
num_ins= num_ins - 1;
somma= somma - 9999;
media= (float)somma/num_ins;
printf("la media e' %d", media);
   */

/*//minimo
int n, x, minimo, i;
printf ( "Quanti numeri vuoi inserire?\n" );
scanf ("%d", &n);
printf( "Inserisci il primo numero\n");
scanf("%d", &x);
minimo=x;
for (i=2; i<=n; i++){
    printf( "Inserisci l'%d-simo numero\n", i);
    scanf("%d", &x);
    if(x < minimo)
        minimo = x;
}
printf( "Il minimo e' %d", minimo);
   */

/*//somma di interi pari da 2 a 30
int i, somma=0;
for(i = 2; i <= 30; i+=2)
    somma+=i;
printf("La somma e' %d", somma);
    */

/* //prodotto di numeri dispari da 1 a 15
 int i, prodotto=1;
 for (i=1; i<=15; i+=2)
    prodotto*=i;
 printf("Il prodotto e' %d", prodotto);
  */

/*// fattoriali dei numeri da 1 a 5
int fatt=1, i;
printf ("Fattoriale di 1   Fattoriale di 2   Fattoriale di 3   Fattoriale di 4   Fattoriale di 5\n");
for(i = 1; i <= 5; i++){
    switch(i){
case 1:
    fatt*=i;
    printf ("  %d", fatt);
    break;
case 2:
    fatt*=i;
    printf ("%20d", fatt);
    break;
case 3:
    fatt*=i;
    printf ("%20d", fatt);
    break;
case 4:
    fatt*=i;
    printf ("%20d", fatt);
    break;
case 5:
    fatt*=i;
    printf ("%20d", fatt);
    break;
    }

}
*/

/*//Tasso di interesse che cresce per ogni anno
double denaro_depositato= 1000.0;
double interesse = .05;
int anno;
printf( "Anno    Ammonto\n");

for( anno = 1; anno <= 10; anno++){

double ammonto = denaro_depositato * pow(1.0 + interesse, anno);
interesse += .01;
printf(" %d%14.2f\n", anno, ammonto);}
  */


  //Programma che stampa triangoli
 /* int i, j;

for(i=1; i<=10; i++){    //i è la mia colonna
    for(j=1; j<= i; j++) //per i uguale ad 1 stampo nella prima riga 1 volta, esco dal ciclo incrementi i, pri i = 2 stampo 2 volte ecc..
    printf("*");
    printf("\n");
}
*/
/*for(i=1; i<=10; i++){
    for(j=10; j>= i; j--)
    printf("*");
    printf("\n");
}
*/


/*//calcolare i limiti di credito
int saldo, limite_credito, limite_credito_d;
int i;
for (i = 1; i <= 3; i++){
    printf( "Qual e' il tuo limite di credito?: " );
    scanf("%d", &limite_credito);
    printf( "Quando devi dare all'azienda? " );
    scanf(" %d", &saldo);
    limite_credito_d = limite_credito/2;
    if(saldo > limite_credito_d)
    {
        printf("Il nuovo credito dimezzato e': %d\n", limite_credito_d);
        printf( "Non hai abbastanza credito da dare all'azienda\n" );
    }

    else
        printf("Il nuovo credito dimezzato e': %d\n", limite_credito_d);

}
*/

/*//programma grafico a barre
int a,b,c,d,e;
int n1, n2, n3, n4, n5;

printf( "Si prega di inserire 5 numeri tra 1 e 30 per realizzare un grafico a barre: \n" );
 scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

for(a=1; a <= n1; a++){
        printf("*");
}
printf("\n");
for(b=1; b <= n2; b++){
        printf("*");
}
printf("\n");

for(c=1; c <= n3; c++){
        printf("*");
}
printf("\n");

for(d=1; d <= n4; d++){
        printf("*");
}
printf("\n");

for(e=1; e <= n5; e++){
        printf("*");
}
printf("\n");
*/

/*//calcolo delle vendite
int i, j, prodotto, codice_prodotto;
float prezzo;
for(i = 1; i <= 7 ; i++){
    printf( "Quanti prodotti hai venduto il giorno %d? ", i);
     scanf(" %d", &prodotto);
        for (j = 1; j <= prodotto; j++){
    printf ( "Inserire il codice del %d-esimo prodotto venduto(da 1 a 5): ", j );
        scanf(" %d", &codice_prodotto);
        switch (codice_prodotto){
    case 1:
         prezzo += 2.98;
         break;
    case 2:
        prezzo += 4.50;
        break;
    case 3:
        prezzo += 9.98;
        break;
    case 4:
        prezzo += 4.49;
        break;
    case 5:
        prezzo += 6.87;
        break;
        }
        }
    printf ("Il giorno %d hai guadagnato %.2f $\n\n", i, prezzo);

}*/

/*//calcolo della media dei voti
int acontatore = 0, bcontatore = 0, ccontatore = 0, dcontatore = 0, fcontatore = 0;
int voto, votocontatore = 0;
printf( "Inserisci i voti della classe\n" );
while((voto = getchar()) != EOF){
    switch(voto){
case 'A':
case 'a':
    acontatore++;
    votocontatore++;
    break;
case 'B':
case 'b':
    bcontatore++;
    votocontatore++;
    break;
case 'C':
case 'c':
    ccontatore++;
    votocontatore++;
    break;
case 'D':
case 'd':
    dcontatore++;
    votocontatore++;
    break;
case 'F':
case 'f':
    fcontatore++;
    votocontatore++;
    break;
case '\n':
case '\t':
case ' ':
    break;

default:
    printf( "Non esiste questo voto!" );
    printf( "Inserisci un nuovo voto" );
    break;
    }
}
    printf( "\nI gli studenti che hanno ottenuto una A sono %d\n", acontatore );
    printf( "I gli studenti che hanno ottenuto una B sono %d\n", bcontatore );
    printf( "I gli studenti che hanno ottenuto una C sono %d\n", ccontatore );
    printf( "I gli studenti che hanno ottenuto una D sono %d\n", dcontatore );
    printf( "I gli studenti che hanno ottenuto una F sono %d\n", fcontatore );

int media;
media = ( acontatore * 10 + bcontatore * 9 + ccontatore * 8 + dcontatore * 7 + fcontatore * 6 ) / votocontatore;
if (media == 10)
printf ( "La media ottenuta dalla classe e' A" );
if (media == 9)
printf ( "La media ottenuta dalla classe e' B" );
if (media == 8)
printf ( "La media ottenuta dalla classe e' C" );
if (media == 7)
printf ( "La media ottenuta dalla classe e' D" );
if (media == 6)
printf ( "La media ottenuta dalla classe e' F" );
   */

/*//calcolo del valore di pigreco
float pigreco=0, x=1.0F;
int i;
for(i = 1; i > 0; i++)
{
    if(i%2 != 0)
        pigreco += 4/x;
        else
            pigreco -= 4/x;
        x+=2;
        printf ( "%d\t%f\n", i, pigreco);
}*/

/*//terna pitagorica
int ipotenusa, lato1, lato2;
for (lato2 = 1; lato2 <= 100; lato2++){
    for(lato1 = 1; lato1 <= 100; lato1++){
          for(ipotenusa = 1; ipotenusa <= 100; ipotenusa++){
            if((ipotenusa*ipotenusa) == (lato1*lato1) + (lato2*lato2)){
                printf( "%d %d %d e' una terna pitagorica\n", ipotenusa, lato1, lato2);}
}
}
}*/

/*//calcolo della paga settimanale
int operatore, ore, articoli;
double paga, paga1, paga2, paga3, paga4;

printf( "Stabiliamo insieme la paga settimanale dei lavoratori\nInserisci 1 se e' un manager 2 per un lavoratore a ore, 3 per un lavoratore a provvigione, 4 a cottimo:\n" );
printf ( "Inserire 5 per uscire" );
while (operatore != 5){
scanf(" %d", &operatore);
switch (operatore){
case 1:
    printf ("Quanto equivale la sua paga giornaliera?\n");
    scanf(" %lf", &paga1);
   paga = paga1 * 7;
   printf( "Questo lavoratore ha una paga settimanele di %.2lf $\n", paga);
   printf ("Inserire il codice lavoratore:\n");
   break;
case 2:
    printf( "Quanto equivale la sua paga oraria?\n" );
    scanf(" %lf", &paga2);
    printf( "Quante ore ha lavorato?\n" );
    scanf(" %d", &ore);
    if(ore > 40){
        paga = (paga2 * 40) + (ore - 40) * (paga2 * 1.5);
        printf( "La paga settimanale e' di %.2lf $\n", paga );
    }
    else{
        paga = paga2 * 40;
        printf( "La paga settimanale e' di %.2lf $\n", paga);
        }
    printf( "Inserire il codice lavoratore:\n" );
    break;
case 3:
    printf( "Quando ha venduto questo lavoratore?\n" );
    scanf(" %lf", &paga3);
    paga = 250 + paga3 * 0.057;
    printf( "La paga settimanale e' di %.2lf $\n", paga);
    printf( "Inserire il codice lavoratore:\n");
    break;
case 4:
    printf( "Inserire la paga per articolo:\n");
    scanf(" %lf", &paga4);
    printf( "Quanti articoli ha prodotto in una settimana?\n");
    scanf(" %d", &articoli);
    paga = paga4 * articoli;
    printf( "La paga settimanale e' di %.2lf $\n", paga);
    printf( "Inserire il codice lavoratore:\n");
    break;

}
}
*/

int i,j,n, m;
int a[100][100];
int somma  = a[0][0];

printf ( "Inserisic il numero di righe: " );
scanf( "%d" , &n);
printf ( "Inserisci il numero di colonne: " );
scanf ( "%d", &m);

for (i = 0; i < n; i++)
{
    for ( j = 0; j < m; j++)
    {
        printf( "Inserisci elemento [%d][%d]: ", i,j);
        scanf (" %d" , &a[i][j]);
    }
}

 for (i = 0; i < n; i++)
 {
     for (j = i; j < m;  j++)
        somma += a[i][j];
 }
 printf ( "Somma del triangolo superiore %d\n", somma);


int somm = a[0][0];

    for(j = 0; j < m; j++)
{
    for (i = j; i < n ; i++)
    {
        somm += a[i][j];
    }

}

printf ( "La somma del triangolo inferiore e' %d\n ", somm);

    return 0;
}

