#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese_brazil");
	float n1, n2, n3,media;                                                                                                                                            
	
	printf("CALCULAR MÉDIA DE 3 NUMEROS : \n");

	printf("Digite o primeiro valor : \n");
	scanf("%f", &n1);
	
	printf("Digite o segundo valor : \n");
	scanf("%f", &n2);
	
	printf("Digite o terceiro valor : \n");
	scanf("%f", &n3);
	
	media = n1 + n2 + n3 / 3;
	
	printf("O VALOR CALCULADO DA MÉDIA ENTRE OS NÚMEROS : %.2f , %.2f e %.2f É : %.1f  \n", n1,n2,n3,media);
	printf("Como apagamos os parenteses do código, pela regra de operação da matematica, o resultado não vai ser o mesmo da anterior.");
	
	system("pause");
	return 0;
}
