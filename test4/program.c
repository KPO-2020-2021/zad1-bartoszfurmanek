/*Podczas kompliacji g++ występował błąd, który mowił że funkcja Dodaj nie powinna mieć żadnych argumentów (a posiada 2).*/

#include <stdio.h>


double Dodaj(double, double);   /*W deklaracji funkcji dodano typ argumentów*/


int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
