/*
	@@Author: Michelle Bloomfield 16803
	@@name: project2.c
*/

#include<conio.h>
#include<stdio.h>
#include<mouse.c>
#include<math.h>
#include<dos.h>
#include<figuras.c>

void main(void){
	//puntos definidos de todos los objetos
	int x1 = 30, y1 = 30, x2 = 30, y2 = 80, x3 = 80, y3 = 30, x4 = 80, y4 = 80, ycentro = 5, xcentro = 55;
	int x5 = 50, x6 = 60, x7 = 50, x8 = 60, x9 = 65, x10 = 75, x11 = 65, x12 = 75;
	int y5 = 65, y6 = 65, y7 = 80, y8 = 80, y9 = 50, y10 = 50, y11 = 60, y12 = 60;
	int x13 = 90, x14 = 100, x15 = 110, x16 = 120, x17 = 100, x18 = 110, xcentro2 = 105;
	int y13 = 70, y14 = 70, y15 = 70, y16 = 70, y17 = 80, y18 = 80, ycentro2 = 35;
	int x,a,b,c,e,r;
	char teclado;
	//instrucciones
	printf("Transfromacion de linea: 1\n");
	printf("Transfromacion relleno: 2\n");
	printf("CASA\n");
	printf(" w = mover hacia arriba\n");
	printf(" s = mover hacia abajo\n");
	printf(" a = mover hacia la izquierda\n");
	printf(" d = mover hacia la derecha\n");
	printf(" e = aumentar el tamaño\n");
	printf(" r = disminuir el tamaño\n");
	printf(" f = shear hacia la izquierda\n");
	printf(" g = shear hacia la derecha\n");
	printf("ARBOL\n");
	printf(" u = mover hacia arriba\n");
	printf(" j = mover hacia abajo\n");
	printf(" h = mover hacia la izquierda\n");
	printf(" k = mover hacia la derecha\n");
	printf(" l = aumentar el tamaño\n");
	printf(" ; = disminuir el tamaño\n");
	printf(" o = shear hacia la izquierda\n");
	printf(" p = shear hacia la derecha\n");
	getch();
   	setVideo();
	teclado = getch();

while(teclado!=(char)27){
	teclado = getch();
	switch(teclado){
		case (char)49:

				//casa
				linea(x1,y1,x2,y2,3);
			   	linea(x1,y1,x3,y3,3);
			   	linea(x3,y3,x4,y4,3);
			   	linea(x2,y2,x4,y4,3);
			   	linea(x1,y1,xcentro,ycentro,3);
			   	linea(x3,y3,xcentro,ycentro,3);
			   	//puerta
			   	linea(x5,y5,x7,y7,3);
			   	linea(x6,y6,x8,y8,3);
			   	linea(x5,y5,x6,y6,3);
			   	//ventana
			   	linea(x9,y9,x10,y10,3);
			   	linea(x11,y11,x12,y12,3);
			   	linea(x9,y9,x11,y11,3);
			   	linea(x10,y10,x12,y12,3);
			   	//arbol
			   	linea(x13,y13,xcentro2,ycentro2,3);
			   	linea(xcentro2,ycentro2,x16,y16,3);
			   	linea(x13,y13,x16,y16,3);
			   	linea(x14,y14,x17,y17,3);
			   	linea(x17,y17,x18,y18,3);
			   	linea(x15,y15,x18,y18,3);

				while(teclado!=(char)27){
				teclado = getch();

				
					//traslacion para derecha
				if(teclado == (char)100){
					linea(x1,y1,x2,y2,0);
			   		linea(x1,y1,x3,y3,0);
			   		linea(x3,y3,x4,y4,0);
			   		linea(x2,y2,x4,y4,0);
			   		linea(x5,y5,x7,y7,0);
			   		linea(x6,y6,x8,y8,0);
			   		linea(x5,y5,x6,y6,0);
			   		linea(x1,y1,xcentro,ycentro,0);
			  	 	linea(x3,y3,xcentro,ycentro,0);
			  	 	   	//ventana
			   		linea(x9,y9,x10,y10,0);
			   		linea(x11,y11,x12,y12,0);
			   		linea(x9,y9,x11,y11,0);
			   		linea(x10,y10,x12,y12,0);
					x1+=10;
					x2+=10;
					x3+=10;
					x4+=10;
					x5+=10;
					x6+=10;
					x7+=10;
					x8+=10;
					x9+=10;
					x10+=10;
					x11+=10;
					x12+=10;
					xcentro+=10;
					}

					//traslacion para izquierda
				if(teclado == (char)97){
					linea(x1,y1,x2,y2,0);
			   		linea(x1,y1,x3,y3,0);
			   		linea(x3,y3,x4,y4,0);
			   		linea(x2,y2,x4,y4,0);
			   		linea(x5,y5,x7,y7,0);
			   		linea(x6,y6,x8,y8,0);
			   		linea(x5,y5,x6,y6,0);
			   		linea(x1,y1,xcentro,ycentro,0);
			  	 	linea(x3,y3,xcentro,ycentro,0);
			  	 	   	//ventana
			   		linea(x9,y9,x10,y10,0);
			   		linea(x11,y11,x12,y12,0);
			   		linea(x9,y9,x11,y11,0);
			   		linea(x10,y10,x12,y12,0);
					x1-=10;
					x2-=10;
					x3-=10;
					x4-=10;
					x5-=10;
					x6-=10;
					x7-=10;
					x8-=10;
					x9-=10;
					x10-=10;
					x11-=10;
					x12-=10;
					xcentro-=10;
					}

					//traslacion para abajo
				if(teclado == (char)115){
					linea(x1,y1,x2,y2,0);
			   		linea(x1,y1,x3,y3,0);
			   		linea(x3,y3,x4,y4,0);
			   		linea(x2,y2,x4,y4,0);
			   		linea(x5,y5,x7,y7,0);
			   		linea(x6,y6,x8,y8,0);
			   		linea(x5,y5,x6,y6,0);
			   		linea(x1,y1,xcentro,ycentro,0);
			  	 	linea(x3,y3,xcentro,ycentro,0);
			  	 	   	//ventana
			   		linea(x9,y9,x10,y10,0);
			   		linea(x11,y11,x12,y12,0);
			   		linea(x9,y9,x11,y11,0);
			   		linea(x10,y10,x12,y12,0);
					y1+=10;
					y2+=10;
					y3+=10;
					y4+=10;
					y5+=10;
					y6+=10;
					y7+=10;
					y8+=10;
					y9+=10;
					y10+=10;
					y11+=10;
					y12+=10;
					ycentro +=10;
					}

					//traslacion para arriba
				if(teclado == (char)119){
					linea(x1,y1,x2,y2,0);
			   		linea(x1,y1,x3,y3,0);
			   		linea(x3,y3,x4,y4,0);
			   		linea(x2,y2,x4,y4,0);
			   		linea(x5,y5,x7,y7,0);
			   		linea(x6,y6,x8,y8,0);
			   		linea(x5,y5,x6,y6,0);
			   		linea(x1,y1,xcentro,ycentro,0);
			  	 	linea(x3,y3,xcentro,ycentro,0);
			  	 	   	//ventana
			   		linea(x9,y9,x10,y10,0);
			   		linea(x11,y11,x12,y12,0);
			   		linea(x9,y9,x11,y11,0);
			   		linea(x10,y10,x12,y12,0);
					y1-=10;
					y2-=10;
					y3-=10;
					y4-=10;
					y5-=10;
					y6-=10;
					y7-=10;
					y8-=10;
					y9-=10;
					y10-=10;
					y11-=10;
					y12-=10;
					ycentro-=10;
					}

					//escala mayor
					if(teclado == (char)101){
						linea(x1,y1,x2,y2,0);
				   		linea(x1,y1,x3,y3,0);
				   		linea(x3,y3,x4,y4,0);
				   		linea(x2,y2,x4,y4,0);
				   		linea(x1,y1,xcentro,ycentro,0);
				  	 	linea(x3,y3,xcentro,ycentro,0);
				  	 	   	//puerta
				   		linea(x5,y5,x7,y7,0);
				   		linea(x6,y6,x8,y8,0);
				   		linea(x5,y5,x6,y6,0);
				   		   	//ventana
				   		linea(x9,y9,x10,y10,0);
				   		linea(x11,y11,x12,y12,0);
				   		linea(x9,y9,x11,y11,0);
				   		linea(x10,y10,x12,y12,0);
						x1*=1.1;
						x2*=1.1;
						x3*=1.1;
						x4*=1.1;
						x5*=1.1;
						x6*=1.1;
						x7*=1.1;
						x8*=1.1;
						x9*=1.1;
						x10*=1.1;
						x11*=1.1;
						x12*=1.1;
						y1*=1.1;
						y2*=1.1;
						y3*=1.1;
						y4*=1.1;
						y5*=1.1;
						y6*=1.1;
						y7*=1.1;
						y8*=1.1;
						y9*=1.1;
						y10*=1.1;
						y11*=1.1;
						y12*=1.1;
						xcentro*=1.1;
						ycentro*=1.1;	
					}


						//escala menor
					if(teclado == (char)114){
						linea(x1,y1,x2,y2,0);
				   		linea(x1,y1,x3,y3,0);
				   		linea(x3,y3,x4,y4,0);
				   		linea(x2,y2,x4,y4,0);
				   		linea(x1,y1,xcentro,ycentro,0);
				  	 	linea(x3,y3,xcentro,ycentro,0);
				  	 	   	//puerta
				   		linea(x5,y5,x7,y7,0);
				   		linea(x6,y6,x8,y8,0);
				   		linea(x5,y5,x6,y6,0);
				   		   	//ventana
				   		linea(x9,y9,x10,y10,0);
				   		linea(x11,y11,x12,y12,0);
				   		linea(x9,y9,x11,y11,0);
				   		linea(x10,y10,x12,y12,0);
				   		x1*=0.9;
						x2*=0.9;
						x3*=0.9;
						x4*=0.9;
						x5*=0.9;
						x6*=0.9;
						x7*=0.9;
						x8*=0.9;
						x9*=0.9;
						x10*=0.9;
						x11*=0.9;
						x12*=0.9;
						y1*=0.9;
						y2*=0.9;
						y3*=0.9;
						y4*=0.9;
						y5*=0.9;
						y6*=0.9;
						y7*=0.9;
						y8*=0.9;
						y9*=0.9;
						y10*=0.9;
						y11*=0.9;
						y12*=0.9;
						xcentro*=0.9;
						ycentro*=0.9;
						
					}	
							

				//sheer derecho
				if(teclado == (char)103){
					linea(x1,y1,x2,y2,0);
			   		linea(x1,y1,x3,y3,0);
			   		linea(x3,y3,x4,y4,0);
			   		linea(x2,y2,x4,y4,0);
			   		linea(x5,y5,x7,y7,0);
			   		linea(x6,y6,x8,y8,0);
			   		linea(x5,y5,x6,y6,0);
			   		linea(x1,y1,xcentro,ycentro,0);
			  	 	linea(x3,y3,xcentro,ycentro,0);
			  	 	   	//puerta
			   		linea(x5,y5,x7,y7,0);
			   		linea(x6,y6,x8,y8,0);
			   		linea(x5,y5,x6,y6,0);
			   		   	//ventana
			   		linea(x9,y9,x10,y10,0);
			   		linea(x11,y11,x12,y12,0);
			   		linea(x9,y9,x11,y11,0);
			   		linea(x10,y10,x12,y12,0);
					x3+=10;
					x1+=10;
					x5+=3;
					x6+=3;
					x9+=5;
					x10+=5;
					x11+=3;
					x12+=3;
					xcentro+= 13;

				}
				//shear izquierdo
				if(teclado == (char)102){
					linea(x1,y1,x2,y2,0);
			   		linea(x1,y1,x3,y3,0);
			   		linea(x3,y3,x4,y4,0);
			   		linea(x2,y2,x4,y4,0);
			   		linea(x5,y5,x7,y7,0);
			   		linea(x6,y6,x8,y8,0);
			   		linea(x5,y5,x6,y6,0);
			   		linea(x1,y1,xcentro,ycentro,0);
			  	 	linea(x3,y3,xcentro,ycentro,0);
			  	 	   	//puerta
			   		linea(x5,y5,x7,y7,0);
			   		linea(x6,y6,x8,y8,0);
			   		linea(x5,y5,x6,y6,0);
			   		   	//ventana
			   		linea(x9,y9,x10,y10,0);
			   		linea(x11,y11,x12,y12,0);
			   		linea(x9,y9,x11,y11,0);
			   		linea(x10,y10,x12,y12,0);
					x3-=10;
					x1-=10;
					x5-=3;
					x6-=3;
					x9-=5;
					x10-=5;
					x11-=3;
					x12-=3;
					xcentro-= 13;
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////ARBOL///////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////				
				}
				//traslacion para derecha
				if(teclado == 107){
					linea(x13,y13,xcentro2,ycentro2,0);
			   		linea(xcentro2,ycentro2,x16,y16,0);
			   		linea(x13,y13,x16,y16,0);
			   		linea(x14,y14,x17,y17,0);
			   		linea(x17,y17,x18,y18,0);
			   		linea(x15,y15,x18,y18,0);
			   		x13+=10;
			   		x14+=10;
			   		x15+=10;
			   		x16+=10;
			   		x17+=10;
			   		x18+=10;
			   		xcentro2+=10;
				}
				//traslacion izquierda
				if(teclado == 104){
					linea(x13,y13,xcentro2,ycentro2,0);
			   		linea(xcentro2,ycentro2,x16,y16,0);
			   		linea(x13,y13,x16,y16,0);
			   		linea(x14,y14,x17,y17,0);
			   		linea(x17,y17,x18,y18,0);
			   		linea(x15,y15,x18,y18,0);
			   		x13-=10;
			   		x14-=10;
			   		x15-=10;
			   		x16-=10;
			   		x17-=10;
			   		x18-=10;
			   		xcentro2-=10;
				}
				//traslacion abajo		
				if(teclado == 106){
					linea(x13,y13,xcentro2,ycentro2,0);
			   		linea(xcentro2,ycentro2,x16,y16,0);
			   		linea(x13,y13,x16,y16,0);
			   		linea(x14,y14,x17,y17,0);
			   		linea(x17,y17,x18,y18,0);
			   		linea(x15,y15,x18,y18,0);
			   		y13+=10;
			   		y14+=10;
			   		y15+=10;
			   		y16+=10;
			   		y17+=10;
			   		y18+=10;
			   		ycentro2+=10;
				}

				//traslacion para arriba
				if(teclado == 117){
					linea(x13,y13,xcentro2,ycentro2,0);
			   		linea(xcentro2,ycentro2,x16,y16,0);
			   		linea(x13,y13,x16,y16,0);
			   		linea(x14,y14,x17,y17,0);
			   		linea(x17,y17,x18,y18,0);
			   		linea(x15,y15,x18,y18,0);
			   		y13-=10;
			   		y14-=10;
			   		y15-=10;
			   		y16-=10;
			   		y17-=10;
			   		y18-=10;
			   		ycentro2-=10;
				}
				//escala mayor
				if(teclado == 108){
					linea(x13,y13,xcentro2,ycentro2,0);
			   		linea(xcentro2,ycentro2,x16,y16,0);
			   		linea(x13,y13,x16,y16,0);
			   		linea(x14,y14,x17,y17,0);
			   		linea(x17,y17,x18,y18,0);
			   		linea(x15,y15,x18,y18,0);
			   		x13*=1.1;
			   		x14*=1.1;
			   		x15*=1.1;
			   		x16*=1.1;
			   		x17*=1.1;
			   		x18*=1.1;
			   		xcentro2*=1.1;
			   		y13*=1.1;
			   		y14*=1.1;
			   		y15*=1.1;
			   		y16*=1.1;
			   		y17*=1.1;
			   		y18*=1.1;
			   		ycentro2*=1.1;
				}

				//escala menor
				if(teclado == 59){
					linea(x13,y13,xcentro2,ycentro2,0);
			   		linea(xcentro2,ycentro2,x16,y16,0);
			   		linea(x13,y13,x16,y16,0);
			   		linea(x14,y14,x17,y17,0);
			   		linea(x17,y17,x18,y18,0);
			   		linea(x15,y15,x18,y18,0);
			   		x13*=0.9;
			   		x14*=0.9;
			   		x15*=0.9;
			   		x16*=0.9;
			   		x17*=0.9;
			   		x18*=0.9;
			   		xcentro2*=0.9;
			   		y13*=0.9;
			   		y14*=0.9;
			   		y15*=0.9;
			   		y16*=0.9;
			   		y17*=0.9;
			   		y18*=0.9;
			   		ycentro2*=0.9;
				}

				//shead izquierda
				if(teclado == 111){
					linea(x13,y13,xcentro2,ycentro2,0);
			   		linea(xcentro2,ycentro2,x16,y16,0);
			   		linea(x13,y13,x16,y16,0);
			   		linea(x14,y14,x17,y17,0);
			   		linea(x17,y17,x18,y18,0);
			   		linea(x15,y15,x18,y18,0);
			   		x13-=7;
			   		x14-=7;
			   		x15-=7;
			   		x16-=7;
			   		xcentro2-=13;
				}

				//shead derecha
				if(teclado == 105){
					linea(x13,y13,xcentro2,ycentro2,0);
			   		linea(xcentro2,ycentro2,x16,y16,0);
			   		linea(x13,y13,x16,y16,0);
			   		linea(x14,y14,x17,y17,0);
			   		linea(x17,y17,x18,y18,0);
			   		linea(x15,y15,x18,y18,0);
			   		x13+=7;
			   		x14+=7;
			   		x15+=7;
			   		x16+=7;
			   		xcentro2+=13;
				}
					

			linea(x1,y1,x2,y2,3);
			linea(x1,y1,x3,y3,3);
			linea(x3,y3,x4,y4,3);
			linea(x2,y2,x4,y4,3);
			linea(x1,y1,xcentro,ycentro,3);
			linea(x3,y3,xcentro,ycentro,3);
			linea(x5,y5,x7,y7,3);
			linea(x6,y6,x8,y8,3);
			linea(x5,y5,x6,y6,3);
			   	//ventana
			linea(x9,y9,x10,y10,3);
			linea(x11,y11,x12,y12,3);
			linea(x9,y9,x11,y11,3);
			linea(x10,y10,x12,y12,3);
			linea(x13,y13,xcentro2,ycentro2,3);
			linea(xcentro2,ycentro2,x16,y16,3);
			linea(x13,y13,x16,y16,3);
			linea(x14,y14,x17,y17,3);
			linea(x17,y17,x18,y18,3);
			linea(x15,y15,x18,y18,3);

			//while
				}
				break;
///////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////FILL///////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////	
		case (char)50:	

				while(teclado!=(char)27){
				teclado = getch();
				//casa
				for(x=0;x<=abs(y1-y2);x++){
					linea(x1,y1+x,x3,y3+x,3);
				}
				//ventana
				for(a=0;a<=abs(y9-y11);a++){
					linea(x9,y9+a,x10,y10+a,4);
				}
				//puerta
				for(c=0;c<=abs(y5-y7);c++){
					linea(x5,y5+c,x6,y6+c,4);
				}
				//techo
				for(b=0;b<=abs(x1-x3);b++){
					linea(xcentro,ycentro,x1+b,y1,4);
					}

					//ramas
				for(r=0;r<=abs(x13-x16);r++){
					linea(xcentro2,ycentro2,x13+r,y13,2);
				}
					//arbol
				for(e=0;e<=abs(y14-y17);e++){
					linea(x14,y14+e,x15,y15+e,4);
				}

				

					//traslacion a la derecha
				if(teclado == (char)100){
					for(x=0;x<=abs(y1-y2);x++){
					linea(x1,y1+x,x3,y3+x,0);
				}
				for(a=0;a<=abs(y9-y11);a++){
					linea(x9,y9+a,x10,y10+a,0);
				}
				for(c=0;c<=abs(y5-y7);c++){
					linea(x5,y5+c,x6,y6+c,0);
				}
				for(b=0;b<=abs(x1-x3);b++){
					linea(xcentro,ycentro,x1+b,y1,0);
					}
						x1+=10;
						x2+=10;
						x3+=10;
						x4+=10;
						x5+=10;
						x6+=10;
						x7+=10;
						x8+=10;
						x9+=10;
						x10+=10;
						x11+=10;
						x12+=10;
						xcentro+=10;
					}


					//traslacion a la izquierda
				if(teclado == (char)97){
					for(x=0;x<=abs(y1-y2);x++){
					linea(x1,y1+x,x3,y3+x,0);
				}
				for(a=0;a<=abs(y9-y11);a++){
					linea(x9,y9+a,x10,y10+a,0);
				}
				for(c=0;c<=abs(y5-y7);c++){
					linea(x5,y5+c,x6,y6+c,0);
				}
				for(b=0;b<=abs(x1-x3);b++){
					linea(xcentro,ycentro,x1+b,y1,0);
					}
						x1-=10;
						x2-=10;
						x3-=10;
						x4-=10;
						x5-=10;
						x6-=10;
						x7-=10;
						x8-=10;
						x9-=10;
						x10-=10;
						x11-=10;
						x12-=10;
						xcentro-=10;
					}
					
					//traslacion hacia abajo
				if(teclado == (char)115){
					for(x=0;x<=abs(y1-y2);x++){
					linea(x1,y1+x,x3,y3+x,0);
				}
				for(a=0;a<=abs(y9-y11);a++){
					linea(x9,y9+a,x10,y10+a,0);
				}
				for(c=0;c<=abs(y5-y7);c++){
					linea(x5,y5+c,x6,y6+c,0);
				}
				for(b=0;b<=abs(x1-x3);b++){
					linea(xcentro,ycentro,x1+b,y1,0);
					}
						y1+=10;
						y2+=10;
						y3+=10;
						y4+=10;
						y5+=10;
						y6+=10;
						y7+=10;
						y8+=10;
						y9+=10;
						y10+=10;
						y11+=10;
						y12+=10;
						ycentro+=10;
					}

					//traslacion hacia arriba
				if(teclado == (char)119){
					for(x=0;x<=abs(y1-y2);x++){
					linea(x1,y1+x,x3,y3+x,0);
				}
				for(a=0;a<=abs(y9-y11);a++){
					linea(x9,y9+a,x10,y10+a,0);
				}
				for(c=0;c<=abs(y5-y7);c++){
					linea(x5,y5+c,x6,y6+c,0);
				}
				for(b=0;b<=abs(x1-x3);b++){
					linea(xcentro,ycentro,x1+b,y1,0);
					}
						y1-=10;
						y2-=10;
						y3-=10;
						y4-=10;
						y5-=10;
						y6-=10;
						y7-=10;
						y8-=10;
						y9-=10;
						y10-=10;
						y11-=10;
						y12-=10;
						ycentro-=10;
					}


				//escala mayor
					if(teclado == (char)101){
						
					for(x=0;x<=abs(y1-y2);x++){
					linea(x1,y1+x,x3,y3+x,0);
				}
				for(a=0;a<=abs(y9-y11);a++){
					linea(x9,y9+a,x10,y10+a,0);
				}
				for(c=0;c<=abs(y5-y7);c++){
					linea(x5,y5+c,x6,y6+c,0);
				}
				for(b=0;b<=abs(x1-x3);b++){
					linea(xcentro,ycentro,x1+b,y1,0);
					}
						x1*=1.1;
						x2*=1.1;
						x3*=1.1;
						x4*=1.1;
						x5*=1.1;
						x6*=1.1;
						x7*=1.1;
						x8*=1.1;
						x9*=1.1;
						x10*=1.1;
						x11*=1.1;
						x12*=1.1;
						y1*=1.1;
						y2*=1.1;
						y3*=1.1;
						y4*=1.1;
						y5*=1.1;
						y6*=1.1;
						y7*=1.1;
						y8*=1.1;
						y9*=1.1;
						y10*=1.1;
						y11*=1.1;
						y12*=1.1;
						xcentro*=1.1;
						ycentro*=1.1;	
					}
					
					//escala menor
					if(teclado == (char)114){
						for(x=0;x<=abs(y1-y2);x++){
					linea(x1,y1+x,x3,y3+x,0);
				}
				for(a=0;a<=abs(y9-y11);a++){
					linea(x9,y9+a,x10,y10+a,0);
				}
				for(c=0;c<=abs(y5-y7);c++){
					linea(x5,y5+c,x6,y6+c,0);
				}
				for(b=0;b<=abs(x1-x3);b++){
					linea(xcentro,ycentro,x1+b,y1,0);
					}
				   		x1*=0.9;
						x2*=0.9;
						x3*=0.9;
						x4*=0.9;
						x5*=0.9;
						x6*=0.9;
						x7*=0.9;
						x8*=0.9;
						x9*=0.9;
						x10*=0.9;
						x11*=0.9;
						x12*=0.9;
						y1*=0.9;
						y2*=0.9;
						y3*=0.9;
						y4*=0.9;
						y5*=0.9;
						y6*=0.9;
						y7*=0.9;
						y8*=0.9;
						y9*=0.9;
						y10*=0.9;
						y11*=0.9;
						y12*=0.9;
						xcentro*=0.9;
						ycentro*=0.9;
						
					}	
							

				//sheer derecho
				if(teclado == (char)103){
					for(x=0;x<=abs(y1-y2);x++){
					linea(x1,y1+x,x3,y3+x,0);
				}
				for(a=0;a<=abs(y9-y11);a++){
					linea(x9,y9+a,x10,y10+a,0);
				}
				for(c=0;c<=abs(y5-y7);c++){
					linea(x5,y5+c,x6,y6+c,0);
				}
				for(b=0;b<=abs(x1-x3);b++){
					linea(xcentro,ycentro,x1+b,y1,0);
					}
					x3+=10;
					x1+=10;
					x5+=3;
					x6+=3;
					x9+=5;
					x10+=5;
					x11+=3;
					x12+=3;
					xcentro+= 13;

				}
				//shear izquierdo
				if(teclado == (char)102){
					for(x=0;x<=abs(y1-y2);x++){
					linea(x1,y1+x,x3,y3+x,0);
				}
				for(a=0;a<=abs(y9-y11);a++){
					linea(x9,y9+a,x10,y10+a,0);
				}
				for(c=0;c<=abs(y5-y7);c++){
					linea(x5,y5+c,x6,y6+c,0);
				}
				for(b=0;b<=abs(x1-x3);b++){
					linea(xcentro,ycentro,x1+b,y1,0);
					}
					x3-=10;
					x1-=10;
					x5-=3;
					x6-=3;
					x9-=5;
					x10-=5;
					x11-=3;
					x12-=3; 
					xcentro-= 13;
				}	
///////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////ARBOL///////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////	
				//traslacion para derecha
				if(teclado == 107){
					//ramas
				for(r=0;r<=abs(x13-x16);r++){
					linea(xcentro2,ycentro2,x13+r,y13,0);
				}
					//arbol
				for(e=0;e<=abs(y14-y17);e++){
					linea(x14,y14+e,x15,y15+e,0);
				}

			   		x13+=10;
			   		x14+=10;
			   		x15+=10;
			   		x16+=10;
			   		x17+=10;
			   		x18+=10;
			   		xcentro2+=10;
				}
				//traslacion izquierda
				if(teclado == 104){

					//ramas
				for(r=0;r<=abs(x13-x16);r++){
					linea(xcentro2,ycentro2,x13+r,y13,0);
				}
					//arbol
				for(e=0;e<=abs(y14-y17);e++){
					linea(x14,y14+e,x15,y15+e,0);
				}

			   		x13-=10;
			   		x14-=10;
			   		x15-=10;
			   		x16-=10;
			   		x17-=10;
			   		x18-=10;
			   		xcentro2-=10;
				}
				//traslacion abajo		
				if(teclado == 106){
						//ramas
				for(r=0;r<=abs(x13-x16);r++){
					linea(xcentro2,ycentro2,x13+r,y13,0);
				}
					//arbol
				for(e=0;e<=abs(y14-y17);e++){
					linea(x14,y14+e,x15,y15+e,0);
				}

			   		y13+=10;
			   		y14+=10;
			   		y15+=10;
			   		y16+=10;
			   		y17+=10;
			   		y18+=10;
			   		ycentro2+=10;
				}

				//traslacion para arriba
				if(teclado == 117){
					//ramas
				for(r=0;r<=abs(x13-x16);r++){
					linea(xcentro2,ycentro2,x13+r,y13,0);
				}
					//arbol
				for(e=0;e<=abs(y14-y17);e++){
					linea(x14,y14+e,x15,y15+e,0);
				}

			   		y13-=10;
			   		y14-=10;
			   		y15-=10;
			   		y16-=10;
			   		y17-=10;
			   		y18-=10;
			   		ycentro2-=10;
				}
				//escala mayor
				if(teclado == 108){
						//ramas
				for(r=0;r<=abs(x13-x16);r++){
					linea(xcentro2,ycentro2,x13+r,y13,0);
				}
					//arbol
				for(e=0;e<=abs(y14-y17);e++){
					linea(x14,y14+e,x15,y15+e,0);
				}

			   		x13*=1.1;
			   		x14*=1.1;
			   		x15*=1.1;
			   		x16*=1.1;
			   		x17*=1.1;
			   		x18*=1.1;
			   		xcentro2*=1.1;
			   		y13*=1.1;
			   		y14*=1.1;
			   		y15*=1.1;
			   		y16*=1.1;
			   		y17*=1.1;
			   		y18*=1.1;
			   		ycentro2*=1.1;
				}

				//escala menor
				if(teclado == 59){
						//ramas
				for(r=0;r<=abs(x13-x16);r++){
					linea(xcentro2,ycentro2,x13+r,y13,0);
				}
					//arbol
				for(e=0;e<=abs(y14-y17);e++){
					linea(x14,y14+e,x15,y15+e,0);
				}

			   		x13*=0.9;
			   		x14*=0.9;
			   		x15*=0.9;
			   		x16*=0.9;
			   		x17*=0.9;
			   		x18*=0.9;
			   		xcentro2*=0.9;
			   		y13*=0.9;
			   		y14*=0.9;
			   		y15*=0.9;
			   		y16*=0.9;
			   		y17*=0.9;
			   		y18*=0.9;
			   		ycentro2*=0.9;
				}

				//shead izquierda
				if(teclado == 111){
						//ramas
				for(r=0;r<=abs(x13-x16);r++){
					linea(xcentro2,ycentro2,x13+r,y13,0);
				}
					//arbol
				for(e=0;e<=abs(y14-y17);e++){
					linea(x14,y14+e,x15,y15+e,0);
				}

			   		x13-=7;
			   		x14-=7;
			   		x15-=7;
			   		x16-=7;
			   		xcentro2-=13;
				}

				//shead derecha
				if(teclado == 105){
						//ramas
				for(r=0;r<=abs(x13-x16);r++){
					linea(xcentro2,ycentro2,x13+r,y13,0);
				}
					//arbol
				for(e=0;e<=abs(y14-y17);e++){
					linea(x14,y14+e,x15,y15+e,0);
				}

			   		x13+=7;
			   		x14+=7;
			   		x15+=7;
			   		x16+=7;
			   		xcentro2+=13;
				}
					
				for(x=0;x<=abs(y1-y2);x++){
					linea(x1,y1+x,x3,y3+x,3);
				}
				for(a=0;a<=abs(y9-y11);a++){
					linea(x9,y9+a,x10,y10+a,4);
				}
				for(c=0;c<=abs(y5-y7);c++){
					linea(x5,y5+c,x6,y6+c,4);
				}
				for(b=0;b<=abs(x1-x3);b++){
					linea(xcentro,ycentro,x1+b,y1,4);
					}
				//ramas
				for(r=0;r<=abs(x13-x16);r++){
					linea(xcentro2,ycentro2,x13+r,y13,2);
				}
					//arbol
				for(e=0;e<=abs(y14-y17);e++){
					linea(x14,y14+e,x15,y15+e,4);
				}

				

			}
			break;

	}

}
//main
}


