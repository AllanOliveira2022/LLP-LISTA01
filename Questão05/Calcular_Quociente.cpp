#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese_brazil");
	
	int n1,n2,resto;
	float resultado;
	
	printf("CALCULAR O RESULYADO E O RESTOP DA DIVISÃO DE 2 NÚMEROS : \n");
	
	printf("Digite o primeiro valor : \n");
	scanf("%d", &n1);
    
	printf("Digite o segundo valor : \n");
	scanf("%d", &n2);	
	
	//resultado
    resultado = (float);
	resultado = n1 / n2 ;
	
	//resto
	resto = n1 % 2;
	
	//saida 
	printf("O RESULTADO DA DIVISÃO É : %.2f \n",resultado);
	printf("O RESTO DA DIVISÃO ENTRE ( %d, %d ) É : %d \n",n1,n2,resto);
	
	
}
