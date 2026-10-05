@cogumeloanao

#include <stdio.h>
float diametro (float a){
	
	return 2*a;
}
float circuferencia (float a){
	
	return 3.14*diametro(a);
}
float area (float a){
	
	return 3.14*a*a;
}


int main(){
	float n1;
	printf ("digite o valor do raio a:\n");
	scanf ("%f",&n1);
	float diametrocal = diametro (n1);
	printf ("\n%.2f\n",diametrocal);
	
	float circum = circuferencia (n1);
	printf ("%.2f\n",circum);
	
	float areatotal = area (n1);
	printf ("%.2f\n",areatotal);
	
	return 0;
}
