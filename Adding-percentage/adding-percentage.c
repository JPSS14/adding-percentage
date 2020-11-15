#include <stdio.h>
#include <stdlib.h>

int main(){
	int op;
	float valor, novo_valor=0, debito=1.99/100, credito_vista=4.74/100, credito_14d=3.79/100, credito_30d=3.03/100;
	
	do{
		printf("Digite o valor da peca\n");
		scanf("%f",&valor);
		printf("\nValor credito a vista: 		R$ %.2f  acrescimo de + R$ %.2f", valor+(valor*credito_vista), valor*credito_vista);
		printf("\nValor credito a 14 dias:	R$ %.2f  acrescimo de + R$ %.2f", valor+(valor*credito_14d), valor*credito_14d);
		printf("\nValor credito a 30 dias: 	R$ %.2f  acrescimo de + R$ %.2f", valor+(valor*credito_30d), valor*credito_30d);
		printf("\nValor debito: 			R$ %.2f  acrescimo de + R$ %.2f", valor+(valor*debito), valor*debito);
		printf("\n\n\nDeseja verificar outra peca digite 1");
		printf("\nPara finalizar digite 0\n");
		scanf("%d",&op);
	}while(op!=0);

	return 0;
}
