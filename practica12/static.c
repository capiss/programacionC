#include<stdio.h>
int main()
{
	int i,x = 10;
	char *c;
	c="hola\0";
	for(i=0;i<10;i++)
	{
		if(c[i]=='\0')
			break;
		printf("%c\n",c[i]);
	}
}
