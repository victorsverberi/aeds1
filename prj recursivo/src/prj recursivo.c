#include <stdio.h>
#include <stdlib.h>

int fatorialrecursivo(int n) {
	//caso base
	if (n == 0 || n == 1) {
		return 1;
	} else {
		//chamada recursiva
		return n * fatorialrecursivo(n - 1);
	}
}
//solucao iterativa
int fatorialcomloop(int n) {
	int resultado = 1;
	//utilizando um loop for para multiplicar os numeros de 1 a n
	for (int i = 1; i <= n; i++) {
		resultado *= 1;
	}
	return resultado;
}

int main(void) {
	int numero = 5;
	printf("o fatorial de %d e: %d\n", numero, fatorialrecursivo(numero));//chamando a recursiva

	return EXIT_SUCCESS;
}
