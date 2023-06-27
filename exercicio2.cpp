#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;

/* Exerc�cio 2.
Fazer um programa em C que calcule o valor de F conforme baixo:.
F= 2x^2 + 3x - 5 se x>0 
F= x^2 - 5x - 3 se x<=0 
Obs: fazer uma FUN��O para calcular de F. O valor de x deve variar
entre -10 e 10 ( -10,-9,-8,-7, -6,-5,-4,-3,-2, -1,0,1,2,3,4,5,6,7,8,9,10 */

//espa�o destinado a vari�veis globais

int x, f; //declara as vari�veis 'f' e 'x' como vari�veis do tipo inteiro (j� sabendo que s�o os �nicos valores poss�veis para o programa proposto).
 
//espa�o destinado a fun��es

void preparacaoDoAmbiente(){ // ao ser chamada, configura o ambiente que executa o c�digo.
	setlocale(LC_ALL, "Portuguese"); //utilizado para incluir os caracteres necess�rios � l�ngua portuguesa.
}

void fazerIntroducao() { //ao ser chamada, apresenta a introdu��o do sistema.
	cout<<"Ol�, este sistema foi feito para calcular o valor 'F' que varia em fun��o de 'X', sendo que para 'X' menor ou igual a zero ser� aplicada a f�rmula F = x^2 - 5x -3 e para 'X' maior que 0 ser� aplicada a f�rmula 2x^2 +3x -5."<<endl;
}

int calculaF (){ //ao ser chamada, a fun��o calcular� o valor de f com o valor de x daquele momento.
	
	if(x>0){ //quando x for maior que zero, essa instru��o ser� seguida.
		f = 2*pow(x,2)+3*x-5; //atribui a f o valor da conta.
	}
	
	else if(x<=0){ // quando x for menor ou igual a zero, essa instru��o ser� seguida.
		f = pow(x,2)-5*x-3; // atribui a f o valor da conta.
	}
}

void informarResultado(){ // ao ser chamada, escrever� na tela o resultado daquele momento.
	cout<<"O valor de F � "<<f<<" quando o valor de X � "<<x<<endl; //escreve na tela o valor de F para o valor de X naquele momento.
}
//espa�o destinado ao corpo de c�digo principal

int main() {
	x = -10; // atribui o valor inicial de x como -10.
	
	preparacaoDoAmbiente(); //chama a fun��o que configura o ambiente.
	fazerIntroducao(); //chama a fun��o que exibe o texto de introdu��o.
	
	while (x<=10){ // enquanto o valor de x for menor ou igual a 10 o loop chamar� a fun��o para o c�lculo com o valor da vari�vel daquele momento. Ap�s o c�lculo chama a fun��o que escreve o resultado na tela e incrementa o valor de X.
		calculaF(); //chama a fun��o que calcula o valor de F para o valor atual de x.
		informarResultado(); //chama a fun��o que exibe os resultados encontrados.
		x++; // incrementa o valor de x em 1.
	}
	
}


