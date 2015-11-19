#include <stdio.h> 
int a[10],i,b,num_mayor=0,mayor; 
int main () 
{ 
	for (i=0;i<10;i++) 
	{ 
		printf("\n Ingresa el numero en la posicion %d ",i+1); 
		scanf("%d", &b); 
		a[i]=b; 
	} 
	mayor=a[0]; 
	num_mayor=0; 
	for (i=0;i<10;i++) 
	{ 
		if (a[i]>mayor) 
	{	 
		mayor=a[i]; 
		num_mayor=i; 
	} 
	} 
	printf ("\n El numero mayor es %d \n",mayor); 
}
