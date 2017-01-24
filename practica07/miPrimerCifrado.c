#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(){
char *palabra="Miprimercifrado";
char *palabraCifrada=(char *) calloc(sizeof(char),60);
int llave=41;
  int i;
  for(i=0;i<sizeof(palabra)/sizeof(char);i++){
    palabraCifrada[i]=palabra[i]^llave;
    printf("%c \t : \t %c",palabra[i],palabraCifrada[i]);
    printf("\n");
  }
  printf("Descifrado\n");
  for(i=0;i<sizeof(palabraCifrada)/sizeof(char);i++){
    printf("%c \t : \t %c",palabraCifrada[i],palabraCifrada[i]^llave);
    printf("\n");
  }
}
