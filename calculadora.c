#include <stdio.h>
#include <locale.h>

int soma(float soma1, float soma2){
	float resultado;
	
	printf("Digite o primeiro número da soma: ");
	scanf("%f", &soma1);
	printf("Digite o segundo número da soma: ");
	scanf("%f", &soma2);
	resultado = soma1 + soma2;
	
return resultado;
}

int sub(float sub1, float sub2){
	float resultado;
	
	printf("Digite o primeiro número da subtração: ");
	scanf("%f", &sub1);
	printf("Digite o segundo número da subtração: ");
	scanf("%f", &sub2);
	resultado = sub1 - sub2;

return resultado;	
}

int div(float div1, float div2){
	float resultado;
	
	printf("Digite o primeiro número da divisão: ");
	scanf("%f", &div1);
	printf("Digite o segundo número da divisão: ");
	scanf("%f", &div2);
	resultado = div1 / div2;

return resultado;	
}

int mult(float mult1, float mult2){
	float resultado;
	
	printf("Digite o primeiro número da multiplicação: ");
	scanf("%f", &mult1);
	printf("Digite o segundo número da multiplicação: ");
	scanf("%f", &mult2);
	resultado = mult1 * mult2;

return resultado;	
}

int main(){
	setlocale(LC_ALL, "portuguese");
	
	float soma1, soma2, resSoma, resSub, sub1, sub2, resDiv, div1, div2, resMult, mult1, mult2;
	
	resSoma = soma(soma1, soma2);
	resSub = sub(sub1, sub2);
	resDiv = div(div1, div2);
	resMult = mult(mult1, mult2);
	
	printf("O resultado das operações são: \n %.2f \n %.2f \n %.2f \n %.2f \n", resSoma, resSub, resDiv, resMult);
	
return 0;
}
