// Univ Calcina Choque Juan Carlos
Algoritmo Solucion_de_sistema_de_ecuaciones
	Escribir 'El sistema tiene la forma: ax+by=c; dx+ey=f'
	Escribir 'Introducir el valor de los coeficinetes de lasa ecuaciones'
	Leer a
	Leer b
	Leer c
	Leer D
	Leer e
	Leer f
	w <- a*e-b*D
	u <- c*e-b*f
	v <- a*f-c*D
	Si w<>0 Entonces
		x1 <- u/w
		y1 <- v/w
		Escribir 'x=',x1
		Escribir 'y=',y1
	SiNo
		Si u=0 Entonces
			Escribir 'Infinitas soluciones'
		SiNo
			Escribir 'no tiene soluciones'
		FinSi
	FinSi
FinAlgoritmo
