#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");

    int num_alunos;
	float media, soma=0, i, nota=0;
    
    printf("\t\t\tM�dia de X alunos de uma turma\n\n");

	printf("Informe a quantidade de alunos que existem na turma: ");
	scanf("%d", &num_alunos);
    
	
	if(num_alunos>0){
		for(i=1; i<=num_alunos; i++){
			printf("\n\nInforme a nota do aluno: ");
			scanf("%f", &nota);
            soma += nota; //Ocorre a incrementa��o do valor a cada loop e soma.. atribui��o
        }
        
		media = soma/num_alunos;
		
	    printf("\nA M�dia aritm�tica da turma de %.0f alunos, corresponde a: %.2f\n", soma, media); 
    }
        
    return 0;
    
}


