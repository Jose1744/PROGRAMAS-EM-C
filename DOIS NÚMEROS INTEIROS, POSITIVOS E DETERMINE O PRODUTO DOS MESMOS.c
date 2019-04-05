/* 3) ESCREVER UMA FUNÇÃO QUE RECEBE DOIS NÚMEROS INTEIROS, POSITIVOS E DETERMINE O PRODUTO DOS MESMOS, UTILIZANDO O SEGUINTE MÉTODO DE MULTIPLICAÇÃO.
		- DIVIDIR, SUCESSIVAMENTE, O PRIMEIRO NÚMERO POR 2, ATÉ QUE SE OBTENHA 1 COMO QUOCIENTE;
		- PARALELAMENTE, DOBRAR, SUCESSIVAMENTE, O SEGUNDO NÚMERO;
		- SOMAR OS NÚMEROS DA SEGUNDA COLUNA QUE TENHAM UM NÚMERO ÍMPAR NA PRIMEIRA COLUNA. O TOTLA OBTIDO É O PRODUTO PROCURADO.*/

/* 	* PROGRAMADOR: JOSE MATHEUS		*
	* TURMA: CINS301				*
	* AULA: ESTRUTURA DE DADOS		*
	* PROFESSORA: ERIKA DILLIANY	*		
	* PERIODO: 3º PERIODO			*
	* DATA: 15/03/2019				*
*/
#include<stdio.h>
#include<stdlib.h>

int num1, num2, prod, res, quoci;

int resto(num1, num2){
	
  // REVISAR COMO VETORES E DIVIDIR O PRIMEIRO NUMERO POR 2	prod = num1/num2;
	if(prod>1)
		{
		res= prod/2;
		
		}
	printf("\n O quociente dos numeros e: %d    \n", res);

	
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
	printf("\n A divisao dos numeros e: %d    \n", prod);
	
	printf("==========================\n\n");
	
	system("pause");
	return 0;
}

