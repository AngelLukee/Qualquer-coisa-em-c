#include <stdio.h>

enum itens_comprados{salsicha = 1, cafe, leite, ovos, nescau
}produtos;

int main(){
	printf("Insira o numero do produto comprado:\n");
		scanf("%d", &produtos);

	if(produtos >= salsicha && produtos <= nescau){
		switch (produtos){
			case salsicha:
				printf("Produto --> Salsicha\nValor --> 1,00 R$ Unidade");
				break;
			case cafe:
				printf("Produto -- > Cafe\nValor --> 10,00 R$ Unidade");
				break;
			case leite:
				printf("Produto -- > Leite\nValor --> 5,00 R$ Unidade");
				break;
			case ovos:
				printf("Produto -- > Ovos\nValor -- > 11,00 R$ Uniddade(Bandeja)");
				break;
			case nescau:
				printf("Produto -- > Nescau\nValor -- > 7,50 R$ Unidade");
				break;
		}
	}
	else{
		printf("Numero Invalido, erro!");
	}
}
