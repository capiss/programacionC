#include<stdio.h>
#include<limits.h>
int main()
{
	unsigned int var1,var2;
	printf("Ingresa dos enteros sin signo(maximo %u): ",UINT_MAX);
	scanf("%d",&var1,&var2);
	printf("%d",(var1>var2)? var1:var2);
}
