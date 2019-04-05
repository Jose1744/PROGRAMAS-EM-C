#include<stdio.h>
#include<stdlib.h>
 
int main() {
    float peso, altura, IMC;
    
    printf("Digite o seu peso:\n");
    scanf("%f", &peso);
    
    printf("Digite a sua altura:\n");
    scanf("%f", &altura);
    
        IMC =  peso/ (altura*altura);
        
		if (IMC<18.5){
			printf ("O seu Indice de Massa Corporal e %.2f e esta abaixo do Peso\n", IMC);
			}
		
		else if (IMC >= 18.4 && IMC <= 24.9) {
			printf ("O seu Indice de Massa Corporal e %.2f e esta com o Peso Normal\n", IMC);
			}	
		
		else if (IMC >= 25 && IMC <= 29.9){
            printf (" O seu Indice de Massa Corporal e %.2f e esta com Sobrepeso\n", IMC );
            }
        
		else if (IMC >=30 && IMC <= 34.9){
			printf ("O seu Indice de Massa Corporal e %.2f e esta com Obesidade Grau 1\n");
			} 
            
        else if (IMC >=35 && IMC <= 39.9){
           printf ("O seu Indice de Massa Corporal e %.2f e esta com Obesidade Grau 2\n", IMC);
           }
        
        if (IMC >=40){
           printf ("O seu Indice de Massa Corporal e %.2f e esta com Obesidade Grau 3\n", IMC);
           }
                    system("pause");
                    
    }
