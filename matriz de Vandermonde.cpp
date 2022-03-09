//Generacion de la matriz de Vandermonde y su determinante
//Univ. Calcina Choque Juan Carlos

#include<stdio.h>
#include<conio.h>
#include<math.h>
#define N 30
main()
{
	int n,i,j,A[N][N],P;
	float X[N];
	printf("\t\tUniv. Calcina Choque Juan Carlos\n");
	printf("\tGeneracion de la matriz de Vandermonde y su determinante\n");
	printf("Leer Dimesion del vector n: ");
	scanf("%d",&n);
	// Introduccion de Datos
	for(i=0;i<=n;i++)
	{
		printf("\nLeer entradas del vector X[%d]: ",i);
		scanf("%f",&X[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(j==0)
			{
				A[i][j]=1;
			}
			else
			{
				A[i][j]=pow(X[i],j);
			}
		}
	}
	printf("\n\nV= ");
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			printf("\t%d\t",A[i][j]);
		}
		printf("\n");
	}
	P=1;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=(i-1);j++)
		{
			P=P*(X[i]-X[j]);
		}
	}
	printf("\nEL VALOR DEL DETERMINATE ES= %d",P);
	
	return 0;
}

