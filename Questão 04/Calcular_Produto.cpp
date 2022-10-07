#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "portuguese_brazil");
	float n1,n2,n3,n4,produto;
	
	printf("Multiplicar 4 números : \n");
	printf("Digite o primeiro valor :\n");
	scanf("%f",&n1);
	
	printf("Digite o segundo valor :\n");
	scanf("%f",&n2);
	
	printf("Digite o terceiro valor :\n");
	scanf("%f",&n3);
	
	printf("Digite o quarto valor :\n");
	scanf("%f",&n4);
	
	produto = (n1 * n2 * n3 * n4 );
	
	printf("A multiplicação de : %.2f , %.2f , %.2f , %.2f É : %.2f \n",n1,n2,n3,n4,produto);
	
	
	system("pause");
	return 0;
	
	
	
}
