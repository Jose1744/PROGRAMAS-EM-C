#include <stdio.h>
#include <stdlib.h>
#define TAM 5

void Vetor();

main(){
	Vetor();
	
}
void Vetor(){
	int vet[TAM];
	int i,j;
	for (i=0;i<TAM;i++){
		scanf("%i",&vet[i]);
	}
	int menor,maior;
	menor=vet[0];
	maior=vet[0];
	for(j=0;j<TAM;j++){
		if(j<menor){
			menor=vet[j];
		}
		if(j>maior){
			maior=vet[j];
		}
	}
	printf("Menor:%i\n",menor);
	printf("Maior:%i",maior);
}
