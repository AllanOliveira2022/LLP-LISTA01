#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese_brazil");
	float n1, n2,media;                                                                                                                                            
	
	printf("CALCULAR MÉDIA DE 2 NUMEROS : \n");

	printf("Digite o primeiro valor : \n");
	scanf("%f", &n1);
	
	printf("Digite o segundo valor : \n");
	scanf("%f", &n2);
	
	
	media = (n1 + n2 )/ 2;
	
	printf("O VALOR CALCULADO DA MÉDIA ENTRE OS NÚMEROS : %.2f e %.2f É : %.1f  \n", n1,n2,media);
	
	system("pause");
	return 0;
}
