#include <stdio.h>
int main (){
	int idade, quant;
	char nome [30];
	float valorp = 3.15, saldo, totalcompra;
	printf ("nome do cliente: \n");
	scanf ("%[^\n]",nome);
	printf ("digite sua idade: \n");
	scanf ("%d",&idade);
	printf ("saldo: \n");
	scanf ("%f",&saldo);
	printf ("quantidade: \n");
	scanf ("%d",&quant);
	totalcompra = valorp*quant;
	printf ("total da compra %.2f\n ",totalcompra);
	
	if (idade>=18 && saldo>= totalcompra ){
		printf ("compra autorizada\n\n");
			printf ("\n\t###NOTA FISCAL###\n");
			printf ("cliente: %s\n",nome);
			printf ("valor unitario: %.2f * quantidade: %d uni\n",valorp, quant);
			printf ("vaor total: %.2f\n", totalcompra);
			printf ("troco: %.2f",saldo - totalcompra);
	} else {
		printf("compra nao autorizada \n");
	}

	
	
	return 0;
}
