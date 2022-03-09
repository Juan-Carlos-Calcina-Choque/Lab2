// Univ Calcina Choque Juan Carlos 
#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
	float a,alfa,area,b,betta,c,gamma,m1,m2,m3,n,m,p,perimetro,pi;
	int z,h,num;
	cout << "\t\tUNIV CALCINA CHOQUE JUAN CARLOS" << endl;
	cout << "\tCALCULADORA DE DATOS DE UN TRIANGULO" << endl;
	cout << "1.Triangulo de tres lados" << endl;
	cout << "2.Triangulo con dos lados y  un angulos" << endl;
	cout << "3.Triangulo con dos angulos y un lado" << endl;
	cout << "4.Triangulo con tres angulos" << endl;
	cout << "6.Salir" << endl;
	cin >> num;
	switch (num) 
	{
	case 1:
		cout << "Introducir el valor de a" << endl;
		cin >> a;
		cout << "Introducir el valor de b" << endl;
		cin >> b;
		cout << "Introducir el valor de c" << endl;
		cin >> c;
		cout << "Las Respuestas son" << endl;
		alfa = acos((b*b+c*c-a*a)/(2*b*c))*(180/M_PI);
		betta = acos((a*a+c*c-b*b)/(2*a*c))*(180/M_PI);
		gamma = acos((a*a+b*b-c*c)/(2*a*b))*(180/M_PI);
		cout << "\nalfa=" << alfa << endl;
		cout << "betta=" << betta << endl;
		cout << "gamma=" << gamma << endl;
		break;
	case 2:
		cout << "Introducir los datos que se tiene:" << endl;
		cout << "1.Si tiene a,b,alfa" << endl;
		cout << "2.Si tiene a,b,betta" << endl;
		cout << "3.Si tiene a,b,gamma" << endl;
		cout << "4.Si tiene b,c,alfa" << endl;
		cout << "5.Si tiene b,c,betta" << endl;
		cout << "6.Si tiene b,c,gamma" << endl;
		cout << "7.Si tiene a,c,alfa" << endl;
		cout << "8.Si tiene a,c,betta" << endl;
		cout << "9.Si tiene a,c,gamma" << endl;
		cin >> z;
		switch (z) {
		case 1:
			cout << "Introducir el valor de a" << endl;
			cin >> a;
			cout << "Introducir el valor de b" << endl;
			cin >> b;
			cout << "Introducir el valor de alfa" << endl;
			cin >> alfa;
			betta = asin((b/a)*sin(alfa*(M_PI/180)))*(180/M_PI);
			gamma = 180-alfa-betta;
			c = b*(sin(gamma*(M_PI/180))/sin(betta*(M_PI/180)));
			cout << "\nbetta=" << betta << endl;
			cout << "gamma=" << gamma << endl;
			cout << "c=" << c << endl;
			break;
		case 2:
			cout << "Introducir el valor de a" << endl;
			cin >> a;
			cout << "Introducir el valor de b" << endl;
			cin >> b;
			cout << "Introducir el valor de betta" << endl;
			cin >> betta;
			alfa = asin((a/b)*sin(betta*(M_PI/180)))*(180/M_PI);
			gamma = 180-alfa-betta;
			c = b*(sin(gamma*(M_PI/180))/sin(betta*(M_PI/180)));
			cout << "\nalfa=" << alfa << endl;
			cout << "gamma=" << gamma << endl;
			cout << "c=" << c << endl;
			break;
		case 3:
			cout << "Introducir el valor de a" << endl;
			cin >> a;
			cout << "Introducir el valor de b" << endl;
			cin >> b;
			cout << "Introducir el valor de gamma" << endl;
			cin >> gamma;
			m = (a+b)/(a-b);
			n = ((180-gamma)/2)*(M_PI/180);
			alfa = (atan(tan(n)/m)+n)*(180/M_PI);
			betta = 180-alfa-gamma;
			c = b*(sin(gamma*(M_PI/180))/sin(betta*(M_PI/180)));
			cout << "\nalfa=" << alfa << endl;
			cout << "betta=" << betta << endl;
			cout << "c=" << c << endl;
			break;
		case 4:
			cout << "Introducir el valor de b" << endl;
			cin >> b;
			cout << "Introducir el valor de c" << endl;
			cin >> c;
			cout << "Introducir el valor de alfa" << endl;
			cin >> alfa;
			m = (b+c)/(b-c);
			n = ((180-alfa)/2)*(M_PI/180);
			betta = (atan(tan(n)/m)+n)*(180/M_PI);
			gamma = 180-alfa-betta;
			a = c*(sin(alfa*(M_PI/180))/sin(gamma*(M_PI/180)));
			cout << "\nbetta=" << betta << endl;
			cout << "gamma=" << gamma << endl;
			cout << "a=" << a << endl;
			break;
		case 5:
			cout << "Introducir el valor de b" << endl;
			cin >> b;
			cout << "Introducir el valor de c" << endl;
			cin >> c;
			cout << "Introducir el valor de betta" << endl;
			cin >> betta;
			gamma = asin((c/b)*sin(betta*(M_PI/180)))*(180/M_PI);
			alfa = 180-betta-gamma;
			a = b*(sin(alfa*(M_PI/180))/sin(betta*(M_PI/180)));
			cout << "\ngamma=" << gamma << endl;
			cout << "alfa=" << alfa << endl;
			cout << "a=" << a << endl;
			break;
		case 6:
			cout << "Introducir el valor de b" << endl;
			cin >> b;
			cout << "Introducir el valor de c" << endl;
			cin >> c;
			cout << "Introducir el valor de gamma" << endl;
			cin >> gamma;
			betta = asin((b/c)*sin(gamma*(M_PI/180)))*(180/M_PI);
			alfa = 180-gamma-betta;
			a = b*(sin(alfa*(M_PI/180))/sin(betta*(M_PI/180)));
			cout << "\nbetta=" << betta << endl;
			cout << "alfa=" << alfa << endl;
			cout << "a=" << a << endl;
			break;
		case 7:
			cout << "Introducir el valor de a" << endl;
			cin >> a;
			cout << "Introducir el valor de c" << endl;
			cin >> c;
			cout << "Introducir el valor de alfa" << endl;
			cin >> alfa;
			gamma = asin((c/a)*sin(alfa*(M_PI/180)))*(180/M_PI);
			betta = 180-gamma-alfa;
			b = a*(sin(betta*(M_PI/180))/sin(alfa*(M_PI/180)));
			cout << "\ngamma=" << gamma << endl;
			cout << "betta=" << betta << endl;
			cout << "b=" << b << endl;
			break;
		case 8:
			cout << "Introducir el valor de a" << endl;
			cin >> a;
			cout << "Introducir el valor de c" << endl;
			cin >> c;
			cout << "Introducir el valor de betta" << endl;
			cin >> betta;
			m = (a+c)/(a-c);
			n = ((180-betta)/2)*(M_PI/180);
			alfa = (atan(tan(n)/m)+n)*(180/M_PI);
			gamma = 180-alfa-betta;
			b = c*(sin(betta*(M_PI/180))/sin(gamma*(M_PI/180)));
			cout << "\nalfa=" << alfa << endl;
			cout << "gamma=" << gamma << endl;
			cout << "b=" << b << endl;
			break;
		case 9:
			cout << "Introducir el valor de a" << endl;
			cin >> a;
			cout << "Introducir el valor de c" << endl;
			cin >> c;
			cout << "Introducir el valor de gamma" << endl;
			cin >> gamma;
			alfa = asin((a/c)*sin(gamma*(M_PI/180)))*(180/M_PI);
			betta = 180-alfa-gamma;
			b = a*(sin(betta*(M_PI/180))/sin(alfa*(M_PI/180)));
			cout << "\nalfa=" << alfa << endl;
			cout << "betta=" << betta << endl;
			cout << "b=" << b << endl;
			break;
		}
		break;
	case 3:
		cout << "Introducir los datos que se tiene:" << endl;
		cout << "1.Si tiene alfa,betta,a" << endl;
		cout << "2.Si tiene alfa,betta,b" << endl;
		cout << "3.Si tiene alfa,betta,c" << endl;
		cout << "4.Si tiene alfa,gamma,a" << endl;
		cout << "5.Si tiene alfa,gamma,b" << endl;
		cout << "6.Si tiene alfa,gamma,c" << endl;
		cout << "7.Si tiene betta,gamma,a" << endl;
		cout << "8.Si tiene betta,gamma,b" << endl;
		cout << "9.Si tiene betta,gamma,c" << endl;
		cin >> h;
		switch (h) {
		case 1:
			cout << "Introducir el valor de alfa" << endl;
			cin >> alfa;
			cout << "Introducir el valor de betta" << endl;
			cin >> betta;
			cout << "Introducir el valor de a" << endl;
			cin >> a;
			gamma = 180-alfa-betta;
			b = a*(sin(betta*(M_PI/180))/sin(alfa*(M_PI/180)));
			c = b*(sin(gamma*(M_PI/180))/sin(betta*(M_PI/180)));
			cout << "\ngamma=" << gamma << endl;
			cout << "b=" << b << endl;
			cout << "c=" << c << endl;
			break;
		case 2:
			cout << "Introducir el valor de alfa" << endl;
			cin >> alfa;
			cout << "Introducir el valor de betta" << endl;
			cin >> betta;
			cout << "Introducir el valor de b" << endl;
			cin >> b;
			gamma = 180-alfa-betta;
			a = b*(sin(alfa*(M_PI/180))/sin(betta*(M_PI/180)));
			c = b*(sin(gamma*(M_PI/180))/sin(betta*(M_PI/180)));
			cout << "\ngamma=" << gamma << endl;
			cout << "a=" << a << endl;
			cout << "c=" << c << endl;
			break;
		case 3:
			cout << "Introducir el valor de alfa" << endl;
			cin >> alfa;
			cout << "Introducir el valor de betta" << endl;
			cin >> betta;
			cout << "Introducir el valor de c" << endl;
			cin >> c;
			gamma = 180-alfa-betta;
			a = c*(sin(alfa*(M_PI/180))/sin(gamma*(M_PI/180)));
			b = c*(sin(betta*(M_PI/180))/sin(gamma*(M_PI/180)));
			cout << "\ngamma=" << gamma << endl;
			cout << "a=" << a << endl;
			cout << "b=" << b << endl;
			break;
		case 4:
			cout << "Introducir el valor de alfa" << endl;
			cin >> alfa;
			cout << "Introducir el valor de gamma" << endl;
			cin >> gamma;
			cout << "Introducir el valor de a" << endl;
			cin >> a;
			betta = 180-gamma-alfa;
			b = a*(sin(betta*(M_PI/180))/sin(alfa*(M_PI/180)));
			c = a*(sin(gamma*(M_PI/180))/sin(alfa*(M_PI/180)));
			cout << "\nbetta=" << betta << endl;
			cout << "b=" << b << endl;
			cout << "c=" << c << endl;
			break;
		case 5:
			cout << "Introducir el valor de alfa" << endl;
			cin >> alfa;
			cout << "Introducir el valor de gamma" << endl;
			cin >> gamma;
			cout << "Introducir el valor de b" << endl;
			cin >> b;
			betta = 180-alfa-gamma;
			a = b*(sin(alfa*(M_PI/180))/sin(betta*(M_PI/180)));
			c = b*(sin(gamma*(M_PI/180))/sin(betta*(M_PI/180)));
			cout << "\nbetta=" << betta << endl;
			cout << "a=" << a << endl;
			cout << "c=" << c << endl;
			break;
		case 6:
			cout << "Introducir el valor de alfa" << endl;
			cin >> alfa;
			cout << "Introducir el valor de gamma" << endl;
			cin >> gamma;
			cout << "Introducir el valor de c" << endl;
			cin >> c;
			betta = 180-gamma-alfa;
			a = c*(sin(alfa*(M_PI/180))/sin(gamma*(M_PI/180)));
			b = c*(sin(betta*(M_PI/180))/sin(gamma*(M_PI/180)));
			cout << "\nbetta=" << betta << endl;
			cout << "a=" << a << endl;
			cout << "b=" << b << endl;
			break;
		case 7:
			cout << "Introducir el valor de betta" << endl;
			cin >> betta;
			cout << "Introducir el valor de gamma" << endl;
			cin >> gamma;
			cout << "Introducir el valor de a" << endl;
			cin >> a;
			alfa = 180-betta-gamma;
			b = a*(sin(betta*(M_PI/180))/sin(alfa*(M_PI/180)));
			c = a*(sin(gamma*(M_PI/180))/sin(alfa*(M_PI/180)));
			cout << "\nalfa=" << alfa << endl;
			cout << "b=" << b << endl;
			cout << "c=" << c << endl;
			break;
		case 8:
			cout << "Introducir el valor de betta" << endl;
			cin >> betta;
			cout << "Introducir el valor de gamma" << endl;
			cin >> gamma;
			cout << "Introducir el valor de b" << endl;
			cin >> b;
			alfa = 180-betta-gamma;
			a = b*(sin(alfa*(M_PI/180))/sin(betta*(M_PI/180)));
			c = b*(sin(gamma*(M_PI/180))/sin(betta*(M_PI/180)));
			cout << "\nalfa=" << alfa << endl;
			cout << "a=" << a << endl;
			cout << "c=" << c << endl;
			break;
		case 9:
			cout << "Introducir el valor de betta" << endl;
			cin >> betta;
			cout << "Introducir el valor de gamma" << endl;
			cin >> gamma;
			cout << "Introducir el valor de c" << endl;
			cin >> c;
			alfa = 180-betta-gamma;
			a = c*(sin(alfa*(M_PI/180))/sin(gamma*(M_PI/180)));
			b = c*(sin(betta*(M_PI/180))/sin(gamma*(M_PI/180)));
			cout << "\nalfa=" << alfa << endl;
			cout << "a=" << a << endl;
			cout << "b=" << b << endl;
			break;
		}
		break;
	case 4:
		cout << "\nSe necesita un lado por lo menos " << endl;
		break;
	case 5:
		cout << "salir" << endl;
		break;
	}
	perimetro = a+b+c;
	p = (a+b+c)/2;
	area = sqrtf(p*(p-a)*(p-b)*(p-c));
	cout << "\nPerimetro=" << perimetro << "[u]" << endl;
	cout << "\nArea=" << area << "[u^2]" << endl;
	cout << "\nLas medianas son:" << endl;
	m1 = sqrtf(((a*a)/4)+c*c-a*c*cos(betta));
	m2 = sqrtf(((b*b)/4)+c*c-b*c*cos(alfa));
	m3 = sqrtf(((c*c)/4)+a*a-a*c*cos(betta));
	cout << "m1=" << m1 << endl;
	cout << "m2=" << m2 << endl;
	cout << "m3=" << m3 << endl;
	return 0;
}

