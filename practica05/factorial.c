#include<stdio.h>
int main(){
  int f;
  printf("inserta un numero: ");
  scanf("%d",&f);
  printf("El factorial de %d es: %d\n",f,factorial(f));
}

int factorial(int f){
 int d=1,i;
 for (i=f;i>1;i--){
     d=d*i;
 }
 return (d);
}
