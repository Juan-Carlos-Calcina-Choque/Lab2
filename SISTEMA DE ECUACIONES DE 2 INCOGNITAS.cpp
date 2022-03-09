// UNIV. CALCINA CHOQUE JUAN CARLOS
// RESOLVER UN SISTEMA DE ECUACIONES 
#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,e,f;
	float u,v,w,x,y;
	printf("\t\t\tUNIV. CALCINA CHOQUE JUAN CARLOS\n");
	printf("\tCALCULADORA PARA RESOLVER SISTEMA DE ECUACIONES CON DOS INCOGNITAS\n\n");
	printf("\t\tEl sistema de ecuaciones sera de la forma:\n\n");
	printf("\t\t\t\tax+by=c\n");
	printf("\t\t\t\tdx+ey=f\n\n");
	
	printf("Introducir el valor de a= ");
	scanf("%f",&a);
	printf("Introducir el valor de b= ");
	scanf("%f",&b);
	printf("Introducir el valor de c= ");
	scanf("%f",&c);
	printf("Introducir el valor de d= ");
	scanf("%f",&d);
	printf("Introducir el valor de e= ");
	scanf("%f",&e);
	printf("Introducir el valor de f= ");
	scanf("%f",&f);
	w=a*e-b*d;
	u=c*e-b*f;
	v=a*f-c*d;
	printf("LA RESPUESTA ES: \n\n");
	if(w!=0)
	{
		x=u/w;
		y=v/w;
		printf("\tx= %.3f\n",x);
		printf("\ty= %.3f",y);
	}
	else
	{
		if(u==0,v==0)
		{
			printf("\tINFINITAS SOLUCIONES");
		}
		else printf("\tNO TIENE SOLUCION (SISTEMA INCOMPATIBLE)");
	}
	
	return 0;
}
