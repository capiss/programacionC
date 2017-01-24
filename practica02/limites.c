#include <stdio.h>
#include <limits.h>
char *cadena="Hola mundo\n";
int main(){
  printf("\n%s",cadena);
  printf("\nINT_MAX: %i",INT_MAX);
  printf("\nSHRT_MAX: %d",SHRT_MAX);
  printf("\nCHAR_MAX: %d",CHAR_MAX);
  printf("\nUCHAR_MAX: %d",UCHAR_MAX);
  printf("\nULONG_MAX: %ul\n",ULONG_MAX);
}
