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
		\
		int x;
		if(*a>*b)
		{
		x=*a;
		*a=*b;
		*b=x;
		}
		
		return(0);
	}
main()
{
	int vetor[9],i,j;
	char tecla;
	printf("\n\n Ordenacao de vetor:\n");

	/*Entrada de dados*/
	for (i=0; i<=9; i++)
	{
	
	
		printf("\nEntro com o %do elemento:", i+1);
		scanf("%d", &vetor[i]);
	
}
	/*Ordenacao do vetor*/
	for (i=0; i<=9; i++)
		for(j=i+1;j<=9;j++)
			troca(&vetor[i],&vetor[j]);
	
		/*Apresentacao do vetor ordenado*/
		for (i=0; i<=9; i++)
			printf("\n%do.elemento:%d", i+1, vetor[i]);
			system("pause");
			return(0);
			
}

