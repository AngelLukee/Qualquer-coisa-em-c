#include <stdio.h>

int fatorial(int a){
int b = a;
	for(int i = 1; i <= b; i++){
		a *= i;
	}
	return a;
}


int main(){
	int number, resultado;
	printf("Digite o numero que ira fatorar");
		scanf("%d", &number);
	resultado = fatorial(number);
	printf("%d", resultado);
}
