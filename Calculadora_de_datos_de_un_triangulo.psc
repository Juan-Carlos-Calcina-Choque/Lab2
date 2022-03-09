// Univ. CALCINA CHOQUE JUAN CARLOS
Algoritmo Calculadora_de_datos_de_un_triangulo
	Escribir '1.Triangulo de tres lados'
	Escribir '2.Triangulo con dos lados y  un angulos'
	Escribir '3.Triangulo con dos angulos y un lado'
	Escribir '4.Triangulo con tres angulos'
	Escribir '6.Salir'
	Leer num
	Segun num  Hacer
		1:
			Escribir 'Introducir el valor de a'
			Leer a
			Escribir 'Introducir el valor de b'
			Leer b
			Escribir 'Introducir el valor de c'
			Leer c
			Escribir 'Respuestas'
			alfa <- acos((b*b+c*c-a*a)/(2*b*c))*(180/pi)
			betta <- acos((a*a+c*c-b*b)/(2*a*c))*(180/pi)
			gamma <- acos((a*a+b*b-c*c)/(2*a*b))*(180/pi)
			Escribir 'alfa=',alfa
			Escribir 'betta=',betta
			Escribir 'gamma=',gamma
		2:
			Escribir 'Introducir los datos que se tiene:'
			Escribir '1.Si tiene a,b,alfa'
			Escribir '2.Si tiene a,b,betta'
			Escribir '3.Si tiene a,b,gamma'
			Escribir '4.Si tiene b,c,alfa'
			Escribir '5.Si tiene b,c,betta'
			Escribir '6.Si tiene b,c,gamma'
			Escribir '7.Si tiene a,c,alfa'
			Escribir '8.Si tiene a,c,betta'
			Escribir '9.Si tiene a,c,gamma'
			Leer z
			Segun z  Hacer
				1:
					Escribir 'Introducir el valor de a'
					Leer a
					Escribir 'Introducir el valor de b'
					Leer b
					Escribir 'Introducir el valord de alfa'
					Leer alfa
					betta <- asen((b/a)*sen(alfa*(pi/180)))*(180/pi)
					gamma <- 180-alfa-betta
					c <- b*(sen(gamma*(pi/180))/sen(betta*(pi/180)))
					Escribir 'betta=',betta
					Escribir 'gamma=',gamma
					Escribir 'c=',c
				2:
					Escribir 'Introducir el valor de a'
					Leer a
					Escribir 'Introducir el valor de b'
					Leer b
					Escribir 'Introducir el valor de betta'
					Leer betta
					alfa <- asen((a/b)*sen(betta*(pi/180)))*(180/pi)
					gamma <- 180-alfa-betta
					c <- b*(sen(gamma*(pi/180))/sen(betta*(pi/180)))
					Escribir 'alfa=',alfa
					Escribir 'gamma=',gamma
					Escribir 'c=',c
				3:
					Escribir 'Introducir el valor de a'
					Leer a
					Escribir 'Introducir el valor de b'
					Leer b
					Escribir 'Introducir el valor de gamma'
					Leer gamma
					m <- (a+b)/(a-b)
					n <- ((180-gamma)/2)*(pi/180)
					alfa <- (atan(tan(n)/m)+n)*(180/pi)
					betta <- 180-alfa-gamma
					c <- b*(sen(gamma*(pi/180))/sen(betta*(pi/180)))
					Escribir 'alfa=',alfa
					Escribir 'betta=',betta
					Escribir 'c=',c
				4:
					Escribir 'Introducir el valor de b'
					Leer b
					Escribir 'Introducir el valor de c'
					Leer c
					Escribir 'Introducir el valor de alfa'
					Leer alfa
					m <- (b+c)/(b-c)
					n <- ((180-alfa)/2)*(pi/180)
					betta <- (atan(tan(n)/m)+n)*(180/pi)
					gamma <- 180-alfa-betta
					a <- c*(sen(alfa*(pi/180))/sen(gamma*(pi/180)))
					Escribir 'betta=',betta
					Escribir 'gamma=',gamma
					Escribir 'a=',a
				5:
					Escribir 'Introducir el valor de b'
					Leer b
					Escribir 'Introducir el valor de c'
					Leer c
					Escribir 'Introducir el valor de betta'
					Leer betta
					gamma <- asen((c/b)*sen(betta*(pi/180)))*(180/pi)
					alfa <- 180-betta-gamma
					a <- b*(sen(alfa*(pi/180))/sen(betta*(pi/180)))
					Escribir 'gamma=',gamma
					Escribir 'alfa=',alfa
					Escribir 'a=',a
				6:
					Escribir 'Introducir el valor de b'
					Leer b
					Escribir 'Introducir el valor de c'
					Leer c
					Escribir 'Introducir el valor de gamma'
					Leer gamma
					betta <- asen((b/c)*sen(gamma*(pi/180)))*(180/pi)
					alfa <- 180-gamma-betta
					a <- b*(sen(alfa*(pi/180))/sen(betta*(pi/180)))
					Escribir 'betta=',betta
					Escribir 'alfa=',alfa
					Escribir 'a=',a
				7:
					Escribir 'Introducir el valor de a'
					Leer a
					Escribir 'Introducir el valor de c'
					Leer c
					Escribir 'Introducir el valor de alfa'
					Leer alfa
					gamma <- asen((c/a)*sen(alfa*(pi/180)))*(180/pi)
					betta <- 180-gamma-alfa
					b <- a*(sen(betta*(pi/180))/sen(alfa*(pi/180)))
					Escribir 'gamma=',gamma
					Escribir 'betta=',betta
					Escribir 'b=',b
				8:
					Escribir 'Introducir el valor de a'
					Leer a
					Escribir 'Introducir el valor de c'
					Leer c
					Escribir 'Introducir el valor de betta'
					Leer betta
					m <- (a+c)/(a-c)
					n <- ((180-betta)/2)*(pi/180)
					alfa <- (atan(tan(n)/m)+n)*(180/pi)
					gamma <- 180-alfa-betta
					b <- c*(sen(betta*(pi/180))/sen(gamma*(pi/180)))
					Escribir 'alfa=',alfa
					Escribir 'gamma=',gamma
					Escribir 'b=',b
				9:
					Escribir 'Introducir el valor de a'
					Leer a
					Escribir 'Introducir el valor de c'
					Leer c
					Escribir 'Introducir el valor de gamma'
					Leer gamma
					alfa <- asen((a/c)*sen(gamma*(pi/180)))*(180/pi)
					betta <- 180-alfa-gamma
					b <- a*(sen(betta*(pi/180))/sen(alfa*(pi/180)))
					Escribir 'alfa=',alfa
					Escribir 'betta=',betta
					Escribir 'b=',b
			FinSegun
		3:
			Escribir 'Introducir los datos que se tiene:'
			Escribir '1.Si tiene alfa,betta,a'
			Escribir '2.Si tiene alfa,betta,b'
			Escribir '3.Si tiene alfa,betta,c'
			Escribir '4.Si tiene alfa,gamma,a'
			Escribir '5.Si tiene alfa,gamma,b'
			Escribir '6.Si tiene alfa,gamma,c'
			Escribir '7.Si tiene betta,gamma,a'
			Escribir '8.Si tiene betta,gamma,b'
			Escribir '9.Si tiene betta,gamma,c'
			Leer h
			Segun h  Hacer
				1:
					Escribir 'Introducir el valor de alfa'
					Leer alfa
					Escribir 'Introducir el valor de betta'
					Leer betta
					Escribir 'Introducir el valor de a'
					Leer a
					gamma <- 180-alfa-betta
					b <- a*(sen(betta*(pi/180))/sen(alfa*(pi/180)))
					c <- b*(sen(gamma*(pi/180))/sen(betta*(pi/180)))
					Escribir 'gamma=',gamma
					Escribir 'b=',b
					Escribir 'c=',c
				2:
					Escribir 'Introducir el valor de alfa'
					Leer alfa
					Escribir 'Introducir el valor de betta'
					Leer betta
					Escribir 'Introducir el valor de b'
					Leer b
					gamma <- 180-alfa-betta
					a <- b*(sen(alfa*(pi/180))/sen(betta*(pi/180)))
					c <- b*(sen(gamma*(pi/180))/sen(betta*(pi/180)))
					Escribir 'gamma=',gamma
					Escribir 'a=',a
					Escribir 'c=',c
				3:
					Escribir 'Introducir el valor de alfa'
					Leer alfa
					Escribir 'Introducir el valor de betta'
					Leer betta
					Escribir 'Introducir el valor de c'
					Leer c
					gamma <- 180-alfa-betta
					a <- c*(sen(alfa*(pi/180))/sen(gamma*(pi/180)))
					b <- c*(sen(betta*(pi/180))/sen(gamma*(pi/180)))
					Escribir 'gamma=',gamma
					Escribir 'a=',a
					Escribir 'b=',b
				4:
					Escribir 'Introducir el valor de alfa'
					Leer alfa
					Escribir 'Introducir el valor de gamma'
					Leer gamma
					Escribir 'Introducir el valor de a'
					Leer a
					betta <- 180-gamma-alfa
					b <- a*(sen(betta*(pi/180))/sen(alfa*(pi/180)))
					c <- a*(sen(gamma*(pi/180))/sen(alfa*(pi/180)))
					Escribir 'betta=',betta
					Escribir 'b=',b
					Escribir 'c=',c
				5:
					Escribir 'Introducir el valor de alfa'
					Leer alfa
					Escribir 'Introducir el valor de gamma'
					Leer gamma
					Escribir 'Introducir el valor de b'
					Leer b
					betta <- 180-alfa-gamma
					a <- b*(sen(alfa*(pi/180))/sen(betta*(pi/180)))
					c <- b*(sen(gamma*(pi/180))/sen(betta*(pi/180)))
					Escribir 'betta=',betta
					Escribir 'a=',a
					Escribir 'c=',c
				6:
					Escribir 'Introducir el valor de alfa'
					Leer alfa
					Escribir 'Introducir el valor de gamma'
					Leer gamma
					Escribir 'Introducir el valor de c'
					Leer c
					betta <- 180-gamma-alfa
					a <- c*(sen(alfa*(pi/180))/sen(gamma*(pi/180)))
					b <- c*(sen(betta*(pi/180))/sen(gamma*(pi/180)))
					Escribir 'betta=',betta
					Escribir 'a=',a
					Escribir 'b=',b
				7:
					Escribir 'Introducir el valor de betta'
					Leer betta
					Escribir 'Introducir el valor de gamma'
					Leer gamma
					Escribir 'Introducir el valor de a'
					Leer a
					alfa <- 180-betta-gamma
					b <- a*(sen(betta*(pi/180))/sen(alfa*(pi/180)))
					c <- a*(sen(gamma*(pi/180))/sen(alfa*(pi/180)))
					Escribir 'alfa=',alfa
					Escribir 'b=',b
					Escribir 'c=',c
				8:
					Escribir 'Introducir el valor de betta'
					Leer betta
					Escribir 'Introducir el valor de gamma'
					Leer gamma
					Escribir 'Introducir el valor de b'
					Leer b
					alfa <- 180-betta-gamma
					a <- b*(sen(alfa*(pi/180))/sen(betta*(pi/180)))
					c <- b*(sen(gamma*(pi/180))/sen(betta*(pi/180)))
					Escribir 'alfa=',alfa
					Escribir 'a=',a
					Escribir 'c=',c
				9:
					Escribir 'Introducir el valor de betta'
					Leer betta
					Escribir 'Introducir el valor de gamma'
					Leer gamma
					Escribir 'Introducir el valor de c'
					Leer c
					alfa <- 180-betta-gamma
					a <- c*(sen(alfa*(pi/180))/sen(gamma*(pi/180)))
					b <- c*(sen(betta*(pi/180))/sen(gamma*(pi/180)))
					Escribir 'alfa=',alfa
					Escribir 'a=',a
					Escribir 'b=',b
			FinSegun
		4:
			Escribir 'Se necesita un lado por lo menos '
		5:
			Escribir 'salir'
	FinSegun
	Perimetro <- a+b+c
	p <- (a+b+c)/2
	Area <- raiz(p*(p-a)*(p-b)*(p-c))
	Escribir 'Perimetro=',Perimetro,'[u]'
	Escribir 'Area=',Area,'[u^2]'
	Escribir 'Las medianas son:'
	m1 <- raiz(((a*a)/4)+c*c-a*c*cos(betta))
	m2 <- raiz(((b*b)/4)+c*c-b*c*cos(alfa))
	m3 <- raiz(((c*c)/4)+a*a-a*c*cos(betta))
	Escribir 'm1=',m1
	Escribir 'm2=',m2
	Escribir 'm3=',m3
FinAlgoritmo
