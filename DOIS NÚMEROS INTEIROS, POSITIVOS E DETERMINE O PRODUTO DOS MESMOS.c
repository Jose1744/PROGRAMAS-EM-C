/* 3) ESCREVER UMA FUN��O QUE RECEBE DOIS N�MEROS INTEIROS, POSITIVOS E DETERMINE O PRODUTO DOS MESMOS, UTILIZANDO O SEGUINTE M�TODO DE MULTIPLICA��O.
		- DIVIDIR, SUCESSIVAMENTE, O PRIMEIRO N�MERO POR 2, AT� QUE SE OBTENHA 1 COMO QUOCIENTE;
		- PARALELAMENTE, DOBRAR, SUCESSIVAMENTE, O SEGUNDO N�MERO;
		- SOMAR OS N�MEROS DA SEGUNDA COLUNA QUE TENHAM UM N�MERO �MPAR NA PRIMEIRA COLUNA. O TOTLA OBTIDO � O PRODUTO PROCURADO.*/

/* 	* PROGRAMADOR: JOSE MATHEUS		*
	* TURMA: CINS301				*
	* AULA: ESTRUTURA DE DADOS		*
	* PROFESSORA: ERIKA DILLIANY	*		
	* PERIODO: 3� PERIODO			*
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

