
#include <stdio.h>
#include <math.h>


// calcolo iterativo della potenza intera di numeri positivi
// b e' la base della potenza
// e e' l'esponente della potenza
unsigned int potenza(unsigned int b, unsigned int e)
{
 int p = 1;

 while (e > 0)
      {
       p = p*b;
       e--;
      }
 return p;
}


/*
Programma per la stima numerica del valore di PI-greco con il metodo di Tsu Chung-chi ripetuto per 100 iterazioni:
sono visualizzate le approssimazioni successive.
*/

void main(void)
{
 int n; // variabile contatore per il numero delle iterazioni
 double l = sqrt(2.); // variabile per i valori intermedi del calcolo
 double p; // variabile per le approssimazioni di PI-greco

 // ciclo iterativo per la ripetizione del calcolo
 for (n=1; n<=10; n=n+1)
    {
     l = sqrt(2.-sqrt(4.-l*l)); // calcolo iterativo
     p = potenza(2,n+1)*l; // approssimazione di PI-greco
	 printf("%f\r\n",p);
    }
}
