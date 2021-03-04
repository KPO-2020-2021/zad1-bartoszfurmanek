#include <stdio.h>

/*Przy kompilacji kompilatorem języka C++ nie da się skonsolidować plików, po dodaniu extern do stałych w module pliki da się skonsolidować*/
/*Mimo wielu prób, nie udało mi się poprawić program zastępując extern na static - doczytałem w internecie, że problem może wynikaż ze starej wersji kompilatora g++*/

extern const double PI;
extern const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
