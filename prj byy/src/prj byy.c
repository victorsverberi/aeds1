#include <stdio.h>
#include <stdlib.h>

void incrementarporvalor(int x) {
	x++;
}

void incrementarporreferencia(int  *x) {
	(*x)++;
}

int main(void) {
	int numero = 5;
	incrementarporvalor(numero);
	printf("valor original: %d\n", numero);

	incrementarporreferencia(&numero);
	printf("valor modificado: %d\n", numero);

	return EXIT_SUCCESS;
}
