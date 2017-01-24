#include<stdio.h>
#include<stdlib.h>
//int atoi(char*);

int main(int argc, char *argv[])
{
	if(argc<2)
        {
                fprintf(stderr,"Se necesita un argumento!");
                exit(1349);
        }
        printf("%s\n",argv[argc-1]);
}
