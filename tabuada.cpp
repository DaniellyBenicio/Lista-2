#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	int r;
	printf("Tabuada de multiplicação do 1 ao 10\n\n");
	
	for(int tab=1; tab<=10; tab++){
		for(int mult=1; mult<=10; mult++){
			r = tab * mult;
			printf("%d x %d = %3d\n\n\n", tab, mult, r);
		}
		printf("\n");		
	}
		
	return 0;
}
