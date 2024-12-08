#include <stdio.h>
#include <stdio.h>

enum semanas {domingo = 1, segunda, terca, quarta, quinta, sexta, sabado
};

int main(){
int number;
	printf("Escreva um numero de 1 a 7:");
		scanf("%d", &number);	
	if(number < 1 || number > 7){
		printf("Não está como informado!Invalido!");
	}
	
	if(number == 1){
		printf("Dia correspondente -- > domingo = %d", domingo);
	}
	else {
		if (number == 2){
			printf("Dia correspondente -- > segunda = %d", segunda);
		}
		else{
			if (number == 3){
				printf("Dia correspondente -- > terca = %d", terca);
			}
			else{
				if (number == 4){
					printf("Dia correspondente -- > quarta = %d", quarta);
				}
				else{
					if (number == 5){
						printf("Dia correspondente -- > quinta = %d", quinta);
					}
					else{
						if (number == 6){
							printf("Dia correspondente -- > sexta = %d", sexta);
						}
						else {
							if (number == 7){
								printf("Dia correspondente -- > sabado = %d", sabado);
							}
						}
					}	
				}
				
			}
		}
	}
}
