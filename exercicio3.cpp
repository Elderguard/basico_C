#include<iostream>
#include<locale.h>
using namespace std;

/* Exercício 3.
A prefeitura de Araraquara/SP deseja saber quanto irá arrecadar com os Impostos
Territorial Urbano (IPTU). Para isso, existe uma tabela de valores de impostos para cada
área da cidade onde o imóvel está localizado, conforme a tabela abaixo.

ÁREA IMPOSTOS
A         15%
B         10%
C         05%

Elabore um programa que receba o valor de N imóveis e a área em que o imóvel está
localizado. Calcule e mostre :

a) O valor do IPTU de cada imóvel
b) A soma de todos impostos.

 */

//espaço destinado a variáveis globais

int n, quantidadeDeImoveis, valorDoImovel; //declara a variável "n" que será usada como contador, "quantidade de imóveis" que registrará quantos imóveis o usuário irá incluir e "valor do imóvel" que será informado pelo usuário.
char local; //declara a variável local que receberá a informação de em qual região o imóvel se encontra.
float taxa, impostoIndividual, impostoTotal; //declara as variáveis "taxa" que receberá a porcentagem para cada imóvel, "impostoIndividual" que receberá o valor de IPTU para cada imóvel e "impostoTotal" que somará o valor de todos os imóveis.


//espaço destinado a funções

void preparacaoDoAmbiente(){ // ao ser chamado, configura o ambiente que executa o código.
	setlocale(LC_ALL, "Portuguese"); //utilizado para incluir os caracteres necessários à língua portuguesa.
}

void fazerIntroducao() { //ao ser chamado, apresenta a introdução do sistema.
	cout<<"Olá, este sistema foi feito para calcular os valores de IPTU de imóveis em Araraquara/SP. A taxa dos imóveis leva em consideração a região em que o imóvel está localizado:"<<endl;
	cout<<"A taxa é de 15% para imóveis na região A, 10% para imóveis na região B e 5% para imóveis na região C."<<endl;
}
	
void perguntarQuantidade() { // ao ser chamado, pergunta e armazena a quantidade de imóveis que o usuário irá incluir.
	cout<<"Primeiramente é necessário que informe a quantidade de imóveis que quer considerar no cálculo. Quantos imóveis serão?"<<endl;
	cin>>quantidadeDeImoveis;
}

void perguntarInfo(){ // ao ser chamado, pergunta e armazena as informações referentes ao imóvel.
	cout<<"Informe para o imóvel n°"<<n<<" em qual região este está localizado."<<endl;
	cin>>local;
	cout<<"Informe o valor do imóvel desconsiderando centavos: R$";
	cin>>valorDoImovel;
}

void calcularIPTU(){ //ao ser chamado, analisa o valor da variável "local" para determinar o valor da variável "taxa" e calcula os impostos.
	if (local == 'A' || local == 'a'){ // Analisa o valor considerando maiúscula ou minúscula para "A".
		taxa = 15;
		impostoIndividual = taxa*valorDoImovel/100;
	}
	else if (local == 'B' || local == 'b'){ // Analisa o valor considerando maiúscula ou minúscula para "B".
		taxa = 10;
		impostoIndividual = taxa*valorDoImovel/100;
	}
	else if (local == 'C' || local == 'c'){ // Analisa o valor considerando maiúscula ou minúscula para "C".
		taxa = 5;
		impostoIndividual = taxa*valorDoImovel/100;
	}
	
	impostoTotal = impostoTotal + impostoIndividual; //Acumula o valor de imposto para o valor total.
}

void informarIPTU(){ //ao ser chamada, escreve na tela as informações referentes ao imóvel atual.
	cout<<"O imóvel "<<n<<" está localizado na região '"<<local<<"' e terá aplicada a taxa de "<<taxa<<"%."<<endl;
	cout<<"O IPTU do imóvel "<<n<<" é de R$"<<impostoIndividual<<endl;
}

void informarTotal(){ //ao ser chamada, escreve na tela o valor total de IPTU dos imóveis somados.
	cout<<"O valor total de IPTU é: R$"<<impostoTotal<<endl;
}

//espaço destinado ao corpo de código principal

int main() {
	n=1; //atribui ao contador "n" o valor 1.
	impostoTotal = 0; //atribui à variável "impostoTotal" o valor 0.
	
	preparacaoDoAmbiente(); //chama a função que configura o ambiente.
	fazerIntroducao(); //chama a função que exibe o texto de introdução.
	perguntarQuantidade(); //chama a função que pergunta a quantidade de imóveis que o usuário deseja incluir no cálculo.
	
	while (n<=quantidadeDeImoveis){ // se o valor do contador "n" for menor ou igual à quantidade de imóveis informada pelo usuário, inicia o loop.
		perguntarInfo(); //chama a função que pergunta ao usuário as informações do imóvel e atribui às respectivas variáveis.
		calcularIPTU(); //chama a função que calcula os valores de IPTU.
		informarIPTU(); // chama a função que informa os valores calculados de IPTU.
		n++; //incrementa o contador.
	}
	informarTotal(); //chama a função que exibe o valor total de IPTU acumulado.
}


