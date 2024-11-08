#include <stdlib.h>
#include <stdio.h>

int main() {
	int a;
	printf("- Menu   \n");
	printf("1 - Cafe  \n");
	printf("2 - Macchiato \n");
	printf("3 - Espresso\n");
	printf("4 - Capuccino\n");
	printf("Escolha uma opcao: ");
	
	scanf("%d", &a);
	
	switch (a){ 
	
		case 1: 
			printf("Cafe escolhido\n");
		break;
		case 2:
			printf("Macchiato escolhido\n");
		break;
		case 3:
			printf("Espresso escolhido\n");
		break;
		case 4:
			printf("Capuccino escolhido\n");
		break;	
	}

	return 0;
}
