#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	int quantidade, cartelas[10], c, d, numero, e, flag, f;
	
	flag = 0;

	printf("Quantas Cartelas? ");
	scanf("%d", &quantidade);
	fflush(stdin);
	srand( time(NULL) );
	
	for(c = 0; c < quantidade; c++){
		
		
		for(d = 0; d < 10; d++){
			numero = (rand() % 99);
			
			
			for(e = 0; e <= d - 1; e++){
				if(numero == cartelas[e]){
					flag = 1;
					break;
					
				}//IF
				
			}//for e
			if(flag == 1){
				flag = 0;
				d = d - 1;
			}else{
				cartelas[d] = numero;	
			}
		}//For D
	    printf("Cartela %d --> ", c + 1);
	    for (f = 0; f < 10; f++){
	    	printf("%d ", cartelas[f]);
		}
		printf("\n==================================================");
	    printf("\n");
	
	}// For C
	
	
	
	
	
	
	return 0;
}
