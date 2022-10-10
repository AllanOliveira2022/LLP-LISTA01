
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "portuguese_brazil");
	float n1,n2,n3,soma,subt;
	
	printf("CALCULAR A SOMA DE 2 NÚMEROS E DEPOIS SUBTRAIR UM TERCEIRO NÚMERO : \n");
	printf("Digite o primeiro valor a ser somado: \n ");
	scanf("%f", &n1);
	
	printf("Digite o segundo valor a ser somado : \n");
	scanf("%f", &n2);
	
	soma = n1 + n2;
	
	printf("A soma de %.2f e %.2f É :  %.2f \n",n1,n2,soma);
	
	printf("AGORA, DIGITE UM TERCEIRO NÚMERO PARA FAZER A SUBTRAÇÃO : \n");
	scanf("%f", &n3);
	
	subt = soma - n3;
	
	printf("A SUBTRAÇÃO DE %.2f e %.2f É : %.2f. \n", soma,n3,subt);
	
	system("pause");
	return 0;
	
	
	
	
}
