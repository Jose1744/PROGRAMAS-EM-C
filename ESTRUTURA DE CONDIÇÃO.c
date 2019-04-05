/* 	* PROGRAMADOR: JOSE MATHEUS		*
	* TURMA: CINS301				*
	* AULA: ESTRUTURA DE DADOS		*
	* PROFESSORA: ERIKA DILLIANY	*		
	* PERIODO: 3º PERIODO			*
	* DATA: 08/03/2019				*
*/

#include <stdio.h>

void main () { 
	int idade;
	printf ("Idade: \n");
	scanf ("%d", &idade);
	
	if (idade>=18) {
		printf (" Adulto \n");
	}
	else 
		printf (" Menor \n");
		
	system ("pause");
}
