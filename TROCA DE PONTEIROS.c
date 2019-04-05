/* 	* PROGRAMADOR: JOSE MATHEUS		*
	* TURMA: CINS301				*
	* AULA: ESTRUTURA DE DADOS		*
	* PROFESSORA: ERIKA DILLIANY	*		
	* PERIODO: 3º PERIODO			*
	* DATA: 08/03/2019				*
*/

#include <stdio.h>

	int troca (int *a, int *b)
	{
		
		int x;
		if(*a>*b)
		{
		x=*a;
		*a=*b;
		*b=x;
		}
		
		return(0);
	}
void segundos(int seg);

main(){
	int A,B;
	printf("Informe dois valores DIFERENTES: ");
	scanf("%d %d",&A,&B);
	printf("Antes da troca A=%d e B=%d \n",A,B);
	troca(&A,&B);
	printf("Depois da troca A=%d e B=%d \n",A,B);
	return(0);
	
}


