#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int escolha;

	printf("digite um numero de 1 a 5.\n");
	fflush(stdout);
	scanf("%d", &escolha);

	if (escolha == 1) {
		printf("voce escolheu o numero 1.\n");
	} else if (escolha == 2) {
		printf("voce escolheu o numero 2.\n");
	} else if (escolha == 3) {
		printf("voce escolheu o numero 3.\n");
	} else if (escolha == 4) {
		printf("voce escolheu o numero 4.\n");
	} else if (escolha == 5) {
		printf("voce escolheu o numero 5.\n");
	} else {
		printf("opcao invalida.\n");
	}
	//alternativa simples
	switch (escolha) {
	case 1:
		printf("voce escolheu o numero 1.\n");
		break;
	case 2:
		printf("voce escolheu o numero 2.\n");
		break;
	case 3:
		printf("voce escolheu o numero 3.\n");
		break;
	case 4:
		printf("voce escolheu o numero 4.\n");
		break;
	case 5:
		printf("voce escolheu o numero 5.\n");
		break;
	default:
		printf("opcao invalida.\n");
	}

	int x, y, result, cont;
	cont = 1;

	while (cont <= 3) {
		printf("entre com os dois numeros para serem somados:\n");
		fflush(stdout);
		scanf("%d %d", &x, &y);

		result = x + y;

		printf("o resultado da soma e: %d\n", result);

		cont = cont + 1;
	}

	cont = 1;
	do {
		printf("entre com os dois numeros para serem somados:\n");
		fflush(stdout);
		scanf("%d %d", &x, &y);

		result = x + y;

		printf("o valor da soma e:\n", result);

		cont++;
	} while (cont <= 3);

	for (cont = 1; cont <= 3; cont++) {
		printf("entre com os dois numeros para serem somados:\n");
		fflush(stdout);
		scanf("%d %d", &x, &y);

		result = x + y;

		printf("o resultado da soma e:\n");
	}


	return EXIT_SUCCESS;
}
