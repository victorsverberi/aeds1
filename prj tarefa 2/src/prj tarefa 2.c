#include <stdio.h>
#include <stdlib.h>
//ativ1
void mostrarparesmultiplos3(){
	for(int i = 2; i <= 1000; i += 2){
		if(i %3 == 0){
			printf("%d", i);
		}
	}
}
//ativ2
void calcsomaemedia(){
	int numero = 0;
	int soma = 0;
	printf("digite 10 numeros inteiros:\n");
	for(int i = 0; i < 10; i++){
		scanf("%d", &numero);
		soma += numero; //soma=soma+numero
	}
double media = soma / 10;
printf("a soma e: %d\n", soma);
printf("a media e: %2lf\n", media);
}
//ativ3
void calcareadoscomodos(){
	double largura, comprimento, area, areatotal;
	for(int i = 1; i <= 4; i++){
		printf("digite a largura do comodo:%d\n", largura);
		scanf("%lf", &largura);
		printf("digite o comprimento do comodo:%d\n", comprimento);
		scanf("%lf", &comprimento);

		area = largura * comprimento;
		areatotal = areatotal + area;

		printf("a area do comodo %d e: %2lf metros quadrados\n", i, area);
		printf("a area total e:%2lf", areatotal);
	}
}
//ativ4
void calcperimetroeareacircular(){
	double raio, perimetro, area;
	const double PI = 3.14;

	printf("digite o valor do raio do circulo:\n");
	scanf("%lf", raio);

	perimetro = 2 * PI * raio;
	area = PI * raio * raio;

	printf("perimetro do circulo: %2lf\n", perimetro);
	printf("area do circulo: %2lf\n", area);

}
//ativ5

int main(void) {

	return EXIT_SUCCESS;
}
