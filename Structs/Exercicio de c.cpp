#include <stdio.h>
#include <stdlib.h>

struct datav{
	int dia, mes, ano;
}data[2];

int main(){
	for (int i = 0; i < 2; i++){
		printf("Informe o ano da data %d:\n", i + 1);
			scanf("%d", &data[i].ano);
		printf("Informe o mes da data %d, utilize do 1 ao 12:\n", i + 1);
			scanf("%d", &data[i].mes);
		printf("Informe o dia da data %d, utilize do 1 ao 30:", i + 1);
			scanf("%d", %data[i].dia);
	}
	if (data[0].ano == data[1].ano){
		if (data[0].mes == data[1].mes){
			if (data[0].dia == data[1].dia){
				printf("As datas são iguais");
			}
		}
	}
	else if (data[0].ano > data[1].ano){
		meses = (data[1].ano - data[0].ano) * 12
	}
}