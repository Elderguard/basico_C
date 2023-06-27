#include<iostream>
#include<locale.h>
using namespace std;

/* Exercício 1.
Em uma eleição para prefeito existem três candidatos. Os votos são informados 
através de códigos. Os dados utilizados para a contagem dos votos obedecem à 
seguinte codificação:
• 1,2,3 = voto para os respectivos candidatos;
• 5 = voto nulo;
• 0 = voto em branco;
Elabore um algoritmo que leia os votos (código do candidato) de 10 eleitores. Calcule 
e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco; */

//espaço destinado a variáveis globais

int c1,c2,c3,nulo,branco; //variáveis que armazenarão os votos. Referentes aos candidatos 1, 2 e 3, votos nulos e brancos.
int contador, voto; //variável contador contará os 10 votos e variável voto receberá o input do usuário.


//espaço destinado a funções

void preparacaoDoAmbiente(){ // ao ser chamado, configura o ambiente que executa o código.
	setlocale(LC_ALL, "Portuguese"); //utilizado para incluir os caracteres necessários à língua portuguesa.
}

void fazerIntroducao() { //ao ser chamado, apresenta a introdução do sistema.
	cout<<"Olá, este sistema foi feito para uma eleição entre três candidatos com 10 votos."<<endl;
}
	
void darInstrucoes() { // ao ser chamado, dá ao usuário as instruções.
	cout<<"Lembre-se: \nPara escolher um candidato digite o respectivo número (1, 2 ou 3). \nPara anular seu voto, digite 5. \nPara deixar seu voto em Branco, digite 0."<<endl;
}

void colherVoto() { //ao ser chamada, atribui o voto ao contador correto.
	if (voto==1){ //se voto = 1, incrementa em 1 a quantidade de votos do candidato 1.
		c1++;
	}
	else if (voto==2){ //se voto = 2, incrementa em 1 a quantidade de votos do candidato 2.
		c2++;
	}
	else if (voto==3){ //se voto = 3, incrementa em 1 a quantidade de votos do candidato 3.
		c3++;
	}
	else if (voto==0){ //se voto = 0, incrementa em 1 a quantidade de votos em branco.
		branco++;
	}
	else if (voto==5){ //se voto = 5, incrementa em 1 a quantidade de votos nulos.
		nulo++;
	}
	else { //neste cenário foi considerado que qualquer entrada diferente das esperadas anulará o voto.
		nulo++; 
	}
	
}

void informarResultado(){ // ao ser chamada, informará a quantidade de votos de cada opção.
	cout<<"O resultado da eleição é:\n";
	cout<<"candidato 1: "<<c1<<endl;
	cout<<"candidato 2: "<<c2<<endl;
	cout<<"candidato 3: "<<c3<<endl;
	cout<<"branco"<<branco<<endl;
	cout<<"nulo"<<nulo<<endl;
}
//espaço destinado ao corpo de código principal

int main() {
	contador = 1; //atribui ao contador o valor 1.
	
	preparacaoDoAmbiente(); //chama a função que configura o ambiente.
	fazerIntroducao(); //chama a função que exibe o texto de introdução.
	darInstrucoes();  //chama a função que exibe as instruções de voto. Neste caso não foi considerado voto secreto, portanto não foi inserido no loop para repetição por não haver "limpeza de tela".
	
	while (contador<=10){ //o loop pede os votos e armazena temporariamente na variável voto, chama a função de colher votos e incrementa o contador.
	
		cout<<"Por favor, insira o voto n° "<<contador<<":"<<endl;
		cin>>voto; // atribui à variável "voto" o valor informado pelo usuário.
		colherVoto(); // chama a função colher voto que atribuirá às variáveis dedicada a contar cada voto.
		contador++; // incrementa o valor do contador.
	}
	informarResultado(); //chama a função que exibe o resultado da eleição.
}


