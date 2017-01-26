#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char *argv[])
{
	int fd; //Declaracion de un descriptor de archivos.
	char *archivo="/dev/random"; // archivo que genera aleaotreamente
	int buffer; //buffer donde se almacena el numero
	fd=open(archivo,O_RDONLY);// Se abre como solo lectura

	if(fd==-1) //valida que abra correctamente
		fprintf(stderr,"No se pudo abrir el archivo");

	printf("Descriptor de archivo: %d\n",fd);
	// read regresa el numero de bits que leyo
	if(read(fd,&buffer,sizeof(int))!=0) //lee desde el archivo 
	  	printf("Numero: %i\n",buffer); // imprime lo que tiene el archivo
	if(close(fd)==-1) //debe cerrar.
		fprintf(stderr,"No se pudo cerrar el descriptor de archivo");
}
