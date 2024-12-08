#include <stdio.h>
#include <stdlib.h>

struct{
	int mes, dia, ano;
}data[2];

int main(){
int dia, mes, ano, resultado;	
	
	for(int i = 0; i <= 1; i++){

		printf("Informe o dia da data %d:\n", i + 1);
			scanf("%d", &data[i].dia);		
		printf("Informe o mes da data %d:\n", i + 1);
			scanf("%d", &data[i].mes);
		printf("Informe o ano da data %d:\n", i + 1);
			scanf("%d", &data[i].ano);
	}	
	
	if(data[0]. dia > data[1].dia){
		dia = data[0].dia - data[1].dia;
	}
		else{
		dia = data[1].dia - data[0].dia;
		}
		
	if(data[0].mes > data[1].mes){
		mes = data[0].mes - data[1].mes;
	}
		else{
		mes = data[1].mes - data[0].mes;
		}
		
	if(data[0].ano > data[1].ano){
		ano = data[0].ano - data[1].ano;
	}
		else{
		ano = data[1].ano - data[0].ano;
		}
	mes = mes * 30;
	ano = ano * 12;
	ano = ano * 30;
		
		
	resultado = ano + dia + mes;
	printf("%d dias se passaram", resultado);
}
