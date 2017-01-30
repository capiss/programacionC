#include<stdio.h>
#include<time.h>
#include<limits.h>

int main()
{
        time_t longt = INT_MAX; //Basta con esta linea  
        printf("\nEl fin del mundo es: %s\n",ctime(&longt)); //Y esta 
}
