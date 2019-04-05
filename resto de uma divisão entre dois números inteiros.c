/* 2) Construir uma função que retorne o resto de uma divisão entre dois números inteiros.*/


/* 	* PROGRAMADOR: JOSE MATHEUS		*
	* TURMA: CINS301				*
	* AULA: ESTRUTURA DE DADOS		*
	* PROFESSORA: ERIKA DILLIANY	*		
	* PERIODO: 3º PERIODO			*
	* DATA: 15/03/2019				*
*/
#include<stdio.h>
#include<stdlib.h>

int num1, num2, media;

int resto(num1, num2){
	
	media = num1 % num2;
	
}

int main(){
	
	printf("\n==========================");
	printf("\n Digite um valor: ");
	scanf("%d", &num1);
	
	printf("==========================");
	printf("\n Digite outro valor: ");
	scanf("%d", &num2);
		
	resto(num1, num2);

	printf("\n==========================");
	printf("\n A media e: %d    \n", media);
	printf("==========================\n\n");
	
	system("pause");
	return 0;
}

