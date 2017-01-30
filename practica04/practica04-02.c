#include<stdio.h>
int main()
{
int n,i;
printf("inserta un numero: ");
scanf("\n%d",&n);
for (i=0;i<=n;i++) printf(!(i%2==0)?"%d\n":"",i);
}

