#include<iostream>
#include<locale.h>
using namespace std;

/* Exerc�cio 3.
A prefeitura de Araraquara/SP deseja saber quanto ir� arrecadar com os Impostos
Territorial Urbano (IPTU). Para isso, existe uma tabela de valores de impostos para cada
�rea da cidade onde o im�vel est� localizado, conforme a tabela abaixo.

�REA IMPOSTOS
A         15%
B         10%
C         05%

Elabore um programa que receba o valor de N im�veis e a �rea em que o im�vel est�
localizado. Calcule e mostre :

a) O valor do IPTU de cada im�vel
b) A soma de todos impostos.

 */

//espa�o destinado a vari�veis globais

int n, quantidadeDeImoveis, valorDoImovel; //declara a vari�vel "n" que ser� usada como contador, "quantidade de im�veis" que registrar� quantos im�veis o usu�rio ir� incluir e "valor do im�vel" que ser� informado pelo usu�rio.
char local; //declara a vari�vel local que receber� a informa��o de em qual regi�o o im�vel se encontra.
float taxa, impostoIndividual, impostoTotal; //declara as vari�veis "taxa" que receber� a porcentagem para cada im�vel, "impostoIndividual" que receber� o valor de IPTU para cada im�vel e "impostoTotal" que somar� o valor de todos os im�veis.


//espa�o destinado a fun��es

void preparacaoDoAmbiente(){ // ao ser chamado, configura o ambiente que executa o c�digo.
	setlocale(LC_ALL, "Portuguese"); //utilizado para incluir os caracteres necess�rios � l�ngua portuguesa.
}

void fazerIntroducao() { //ao ser chamado, apresenta a introdu��o do sistema.
	cout<<"Ol�, este sistema foi feito para calcular os valores de IPTU de im�veis em Araraquara/SP. A taxa dos im�veis leva em considera��o a regi�o em que o im�vel est� localizado:"<<endl;
	cout<<"A taxa � de 15% para im�veis na regi�o A, 10% para im�veis na regi�o B e 5% para im�veis na regi�o C."<<endl;
}
	
void perguntarQuantidade() { // ao ser chamado, pergunta e armazena a quantidade de im�veis que o usu�rio ir� incluir.
	cout<<"Primeiramente � necess�rio que informe a quantidade de im�veis que quer considerar no c�lculo. Quantos im�veis ser�o?"<<endl;
	cin>>quantidadeDeImoveis;
}

void perguntarInfo(){ // ao ser chamado, pergunta e armazena as informa��es referentes ao im�vel.
	cout<<"Informe para o im�vel n�"<<n<<" em qual regi�o este est� localizado."<<endl;
	cin>>local;
	cout<<"Informe o valor do im�vel desconsiderando centavos: R$";
	cin>>valorDoImovel;
}

void calcularIPTU(){ //ao ser chamado, analisa o valor da vari�vel "local" para determinar o valor da vari�vel "taxa" e calcula os impostos.
	if (local == 'A' || local == 'a'){ // Analisa o valor considerando mai�scula ou min�scula para "A".
		taxa = 15;
		impostoIndividual = taxa*valorDoImovel/100;
	}
	else if (local == 'B' || local == 'b'){ // Analisa o valor considerando mai�scula ou min�scula para "B".
		taxa = 10;
		impostoIndividual = taxa*valorDoImovel/100;
	}
	else if (local == 'C' || local == 'c'){ // Analisa o valor considerando mai�scula ou min�scula para "C".
		taxa = 5;
		impostoIndividual = taxa*valorDoImovel/100;
	}
	
	impostoTotal = impostoTotal + impostoIndividual; //Acumula o valor de imposto para o valor total.
}

void informarIPTU(){ //ao ser chamada, escreve na tela as informa��es referentes ao im�vel atual.
	cout<<"O im�vel "<<n<<" est� localizado na regi�o '"<<local<<"' e ter� aplicada a taxa de "<<taxa<<"%."<<endl;
	cout<<"O IPTU do im�vel "<<n<<" � de R$"<<impostoIndividual<<endl;
}

void informarTotal(){ //ao ser chamada, escreve na tela o valor total de IPTU dos im�veis somados.
	cout<<"O valor total de IPTU �: R$"<<impostoTotal<<endl;
}

//espa�o destinado ao corpo de c�digo principal

int main() {
	n=1; //atribui ao contador "n" o valor 1.
	impostoTotal = 0; //atribui � vari�vel "impostoTotal" o valor 0.
	
	preparacaoDoAmbiente(); //chama a fun��o que configura o ambiente.
	fazerIntroducao(); //chama a fun��o que exibe o texto de introdu��o.
	perguntarQuantidade(); //chama a fun��o que pergunta a quantidade de im�veis que o usu�rio deseja incluir no c�lculo.
	
	while (n<=quantidadeDeImoveis){ // se o valor do contador "n" for menor ou igual � quantidade de im�veis informada pelo usu�rio, inicia o loop.
		perguntarInfo(); //chama a fun��o que pergunta ao usu�rio as informa��es do im�vel e atribui �s respectivas vari�veis.
		calcularIPTU(); //chama a fun��o que calcula os valores de IPTU.
		informarIPTU(); // chama a fun��o que informa os valores calculados de IPTU.
		n++; //incrementa o contador.
	}
	informarTotal(); //chama a fun��o que exibe o valor total de IPTU acumulado.
}


