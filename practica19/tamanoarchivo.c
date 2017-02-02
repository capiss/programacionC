#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc, char *argv[])
{
	if(argc<2)
	{
		perror("Se necesita un argumento\n");
		return(1111);
	}

	char *archivo=argv[1];
	int fd;
	off_t fsize;
	fd=open(archivo,O_RDONLY);
	if(fd==-1)
	{
		fprintf(stderr,"No se pudo abrir el archivo");
		return;
	}
	fsize=lseek(fd,0,SEEK_END);
 	int *tmp=(int*)malloc(fsize);
	read(fd,&tmp,fsize);

	printf("El tamaño en bites es: %li b\n",(long int)fsize*8);
	printf("El tamaño en Bytes es: %li B\n",(long int)fsize);
	printf("El tamaño en KBytes es: %.3f KB\n",(float)fsize/1024);

	if(close(fd)==-1)
		fprintf(stderr,"No se pudo cerrar el archivo");

	return(0);
}
