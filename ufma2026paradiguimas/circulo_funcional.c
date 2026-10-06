@cogumeloanao
#include <stdio.h>
float diametro (float raio){
	return 2*raio;
}
float circun (float raio){
	return 3.14*diametro (raio);
}
float area (float raio){
	return 3.14*raio*raio;
}
void ler (float raio){
	printf ("%.2f\n",diametro(raio));
	printf ("%.2f\n",circun(raio));
	printf ("%.2f\n",area(raio));
}
float digite(){
	float raio;
	printf ("digite o raio\n");
	scanf ("%f",&raio);
	return raio;
}
int main (){
	ler(digite());
	return 0;
}
