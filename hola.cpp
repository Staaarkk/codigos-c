#include<stdio.h>
	main()
	{
	int n,i,p=0,imp=0;
	int total=0,b=7;
	
	do
	{
	printf("Ingrese la variable que indica la cantidad de multiplos de siete que desea mostrar en pantalla, el valor debe ser mayor a cero\n");
	scanf("%d",&n);
	} while(n<0);
	
	for (i=0;i<n;i++)
	{
		total=b*(i+1);
		printf("La serie de 7 es: %d\n",total);
			if(total%2==0)
	{
		p=p+1;
	}
			if(total%2==1)
			{
				imp=imp+1;
			}
}
		printf("La cantidad de numeros pares es: %d\n",p);
		printf("La cantidad de numeros impares es: %d\n",imp);
	
	
	
	
}
	
