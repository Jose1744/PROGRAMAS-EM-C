/* ESCREVER UMA FUNCAO PARA FAZER UM PROGRMA QUE TRANSFORME SEGUNDOS EM HORAS, MINUTOS E SEGUNDOS. */

/* 	* PROGRAMADOR: JOSE MATHEUS		*
	* TURMA: CINS301				*
	* AULA: ESTRUTURA DE DADOS		*
	* PROFESSORA: ERIKA DILLIANY	*		
	* PERIODO: 3º PERIODO			*
	* DATA: 15/03/2019				*
*/
#include <stdio.h>

void segundos(int seg);

main(){
	int seg;
	printf("Informe o tempo em segundos: ");
	scanf("%d", &seg);
	segundos(seg);
}

void    segundos(int seg){
	int h, m, s, x;
	h = seg/3600;
	x = seg%3600;
	//printf("%d", aux);
	m = x/60;
	s = x%60;
	printf("%dh\t%dm\t%ds", h, m, s);
}

