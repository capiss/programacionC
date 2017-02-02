#include <string.h>
#include <openssl/md5.h>
#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	//En main se indica que se recibiran argumentos
	//Con if (argc<2) esta diciendo que tiene que introducir un parametro
	//El parametro recibido sera el nombre del archivo del que se obtendra su md5
	if(argc<2)
	{
		perror("Se necesita un argumento\n");
		return(1111);
	}

	char c;
	
	int contador=0;
	//se declara el apuntador archivo que tendra por contenido
	//el nombre del archivo
	char *archivo = argv[1];
	unsigned char digest[MD5_DIGEST_LENGTH];
    	int fd;
	//open nos tresasar un descriptor de archivo para poder leer el contenido
	fd=open(archivo,O_RDONLY);
	//Si se genera una falla al abrir el archivo se mandara un mensaje de error
	if(fd==-1)
	{
		fprintf(stderr,"No se pudo abrir el archivo");
		return;
	}
	//Con el ciclo while se leera el contenido del archivo
	while(read(fd,&c,sizeof(c))!=0)
	{
	//Se utiliza un contador para saber la longitud del archivo
		contador++;
	}
	//Si el descriptor no se puede cerrar se genera un mensaje de error
	if(close(fd)==-1)
                fprintf(stderr,"No se pudo cerrar el archivo");


	//como sabemos ya la longitud del archivo abriremos nuevamente el archivo
	fd=open(archivo,O_RDONLY);
	if(fd==-1)
	{
                fprintf(stderr,"no se pudo abrir el archivo");
		return;
	}
	//se cuardara el contenido en una arreglo tipo char
	char cd[contador];
	contador =0;
	while(read(fd,&c,sizeof(c))!=0)
	{
		cd[contador]=c;
		contador++;
        }
	//Se le pasara el arreglo a la funcion MD5
	MD5((unsigned char*)&cd, strlen(cd), (unsigned char*)&digest);    
	char mdString[33];
	//Se imprime el hash
   	for(int i = 0; i < 16; i++)
      		 sprintf(&mdString[i*2], "%02x", (unsigned int)digest[i]);
  	printf("md5 digest: %s\n", mdString);

	if(close(fd)==-1)
		fprintf(stderr,"No se pudo cerrar el descriptor de archivo");
	return 0;
	free(cd);
}
