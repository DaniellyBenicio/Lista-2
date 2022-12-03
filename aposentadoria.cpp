#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int codigo, nascimento, ano_ingresso, ano_atual, idade, trabalhado;
	printf("Qualificado para aposentadoria?\n\n");
	
	printf("\nDigite o número do empregado: ");
	scanf("%d", &codigo);
	
	printf("\nDigite o ano atual: ");
	scanf("%d", &ano_atual);
	
	printf("\nDigite o ano de seu nascimento: ");
	scanf("%d", &nascimento);
	
	printf("\nDigite o ano de seu ingresso na empresa: ");
	scanf("%d", &ano_ingresso);

	idade = ano_atual - nascimento;
	trabalhado = ano_atual - ano_ingresso;

	printf("\nO empregado tem %d anos\n\n", idade);
	printf("\nO tempo de trabalho do empregado é: %d\n\n", trabalhado);

	if(idade>=65){
		printf("Requerer aposentadoria!\n\n");
	} else if(trabalhado>=30){
		printf("Requerer aposentadoria!\n\n");
	} else if (idade >=60 && trabalhado>=25){
		printf("Requerer aposentadoria!\n\n");
	} else{
		printf("Não requerer aposentadoria!\n\n");
	}		
			
	return 0;
}
	
