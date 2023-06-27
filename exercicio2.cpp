#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;

/* Exercício 2.
Fazer um programa em C que calcule o valor de F conforme baixo:.
F= 2x^2 + 3x - 5 se x>0 
F= x^2 - 5x - 3 se x<=0 
Obs: fazer uma FUNÇÃO para calcular de F. O valor de x deve variar
entre -10 e 10 ( -10,-9,-8,-7, -6,-5,-4,-3,-2, -1,0,1,2,3,4,5,6,7,8,9,10 */

//espaço destinado a variáveis globais

int x, f; //declara as variáveis 'f' e 'x' como variáveis do tipo inteiro (já sabendo que são os únicos valores possíveis para o programa proposto).
 
//espaço destinado a funções

void preparacaoDoAmbiente(){ // ao ser chamada, configura o ambiente que executa o código.
	setlocale(LC_ALL, "Portuguese"); //utilizado para incluir os caracteres necessários à língua portuguesa.
}

void fazerIntroducao() { //ao ser chamada, apresenta a introdução do sistema.
	cout<<"Olá, este sistema foi feito para calcular o valor 'F' que varia em função de 'X', sendo que para 'X' menor ou igual a zero será aplicada a fórmula F = x^2 - 5x -3 e para 'X' maior que 0 será aplicada a fórmula 2x^2 +3x -5."<<endl;
}

int calculaF (){ //ao ser chamada, a função calculará o valor de f com o valor de x daquele momento.
	
	if(x>0){ //quando x for maior que zero, essa instrução será seguida.
		f = 2*pow(x,2)+3*x-5; //atribui a f o valor da conta.
	}
	
	else if(x<=0){ // quando x for menor ou igual a zero, essa instrução será seguida.
		f = pow(x,2)-5*x-3; // atribui a f o valor da conta.
	}
}

void informarResultado(){ // ao ser chamada, escreverá na tela o resultado daquele momento.
	cout<<"O valor de F é "<<f<<" quando o valor de X é "<<x<<endl; //escreve na tela o valor de F para o valor de X naquele momento.
}
//espaço destinado ao corpo de código principal

int main() {
	x = -10; // atribui o valor inicial de x como -10.
	
	preparacaoDoAmbiente(); //chama a função que configura o ambiente.
	fazerIntroducao(); //chama a função que exibe o texto de introdução.
	
	while (x<=10){ // enquanto o valor de x for menor ou igual a 10 o loop chamará a função para o cálculo com o valor da variável daquele momento. Após o cálculo chama a função que escreve o resultado na tela e incrementa o valor de X.
		calculaF(); //chama a função que calcula o valor de F para o valor atual de x.
		informarResultado(); //chama a função que exibe os resultados encontrados.
		x++; // incrementa o valor de x em 1.
	}
	
}


