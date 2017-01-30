#include<stdio.h>
int main()
{
int n,i;
printf("inserta un numero\t");
scanf("\n%d",&n);//almacena un entero
for (i=0;i<=n;i++)
  if(!((i%2==0)||(i%3==0)||(i%5==0)||(i%7==0))||(i==2)||(i==5)||(i==3)||(i==7))
    printf("%d\n",i);
}
