#include<stdio.h>
int main(){
int i,l,b,h;
printf("selecciona una opcion para sacar el area de cierta figura\n");
printf("cuadrado...1\ntriangulo...2\nrectangulo...3\n");
scanf("%d",&i);
  if (i==1){
    printf("tamaño de un lado");
    scanf("%d",&l);
    printf("el area de cuadrado es: %d\n",l*l);
  }

 if (i==2){ 
   printf("base:\t"); 
   scanf("%d",&b);
   printf("\naltura:\t");
   scanf("%d",&h); 
   printf("\nel area de triangulo es: %d\n",((b*h)/2));
 }

 if (i==3){ 
   printf("lado:\t"); 
   scanf("%d",&l); 
   printf("\nbase:\t");
   scanf("%d",&b);
   printf("el area de rectangulo es: %d\n",l*b);
 }
}

