#include<iostream>
#include<conio.h>
#include<math.h>
#define N 30
using namespace std;
main()
{
	int m,n,i,j,f,c;
	float a[m],b[n],A[N][N],t;
	cout<<"Introducir el grado superior del polinomio del dividendo P(x)=a[0]+a[1]x+a[2]x^2+...+a[n-1]x^(n-1)+a[n]x^n"<<endl;
	cout<<"Introducir el grado superior del polinomio del divisor Q(x)=b[0]+b[1]x+b[2]x^2+...+b[n-1]x^(n-1)+b[n]x^n"<<endl;
	cout<<"Introducir el grado superior del polinomio del dividendo P(x)= ";
	cin>>m;
	cout<<"Introducir los coeficiente del polinomio P(x)"<<endl;
	for(i=m;i>=0;i--)
	{
		cout<<"a["<<i<<"]=";
		cin>>a[i];
	}
	cout<<"Introducir el grado superior del polinomio del divisor Q(x)= ";
	cin>>n;
	cout<<"Introducir los coeficiente del polinomio Q(x)"<<endl;
	for(j=n;j>=0;j--)
	{
		cout<<"b["<<j<<"]= ";
		cin>>b[j];
	}
	t=a[3]*b[2];
	cout<<"t= "<<t<<endl;
	for(f=0;f<=m;f++)
	{
		for(c=0;c<=m+1;c++)
		{
			cout<<"X="<<A[f][c];
			//printf("%d\t",A[f][c]);
		}
		cout<<"\n";
		//printf("\n");
	}	
	getch();
	return 0;
}
