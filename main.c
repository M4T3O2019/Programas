
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	float i,v,r1,r2,RT,IT,Vr1,Vr2,Ir1,Ir2;
	
	printf("\n Este es un programa basico para electronica, de un circuito simple con dos resistencias.");
	  printf("\n\n Resistencia Serie......1");
	  printf("\n Resistencia Paralelo...2");
	  scanf("%f",&i);
	  
	while ( i< 1 || i > 2 ) {
	
	  printf("\n Error: Dato Ingresado no valido");
	  printf("\n\n Resistencia Serie......1");
	  printf("\n Resistencia Paralelo...2");
	  scanf("%f",&i);  	
	
	}
	
	printf("\n\n Voltaje de la Fuente");
	scanf("%f",&v);
	printf("\n Resistencia #1");
	scanf("%f",&r1);
	printf("\n Resistencia #2");
	scanf("%f",&r2);

if ( i == 1){ //serie
	RT = r1+r2;
	IT = v/RT;
	Vr1 = IT*r1;
	Vr2 = IT*r2;
	printf("\n La Resistencia Total es de :%f",RT);
	printf("\n La Corriente Total es de :%f",IT);
    printf("\n El voltaje de la Resistencia #1 es de :%f",Vr1);
	printf("\n El voltaje de la Resistencia #2 es de :%f",Vr2);
}
 else{ //Paralelo
  RT = (r1*r2)/(r1+r2);
  IT = v/RT;
  Ir1 = v/r1;	
  Ir2 = v/r2;
  printf("\n La Resistencia Total es de :%f",RT);
  printf("\n La Corriente Total es de :%f",IT);
  printf("\n La Corriente de la Resistencia #1 es de :%f",Ir1);
  printf("\n La Corriente de la Resistencia #2 es de :%f",Ir2);
}    
	getch(); /* Pausa */


	
	return 0;
}
