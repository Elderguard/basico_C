#include<iostream>
#include<locale.h>
using namespace std;

/* Exerc�cio 1.
Em uma elei��o para prefeito existem tr�s candidatos. Os votos s�o informados 
atrav�s de c�digos. Os dados utilizados para a contagem dos votos obedecem � 
seguinte codifica��o:
� 1,2,3 = voto para os respectivos candidatos;
� 5 = voto nulo;
� 0 = voto em branco;
Elabore um algoritmo que leia os votos (c�digo do candidato) de 10 eleitores. Calcule 
e escreva:
- total de votos para cada candidato;
- total de votos nulos;
- total de votos em branco; */

//espa�o destinado a vari�veis globais

int c1,c2,c3,nulo,branco; //vari�veis que armazenar�o os votos. Referentes aos candidatos 1, 2 e 3, votos nulos e brancos.
int contador, voto; //vari�vel contador contar� os 10 votos e vari�vel voto receber� o input do usu�rio.


//espa�o destinado a fun��es

void preparacaoDoAmbiente(){ // ao ser chamado, configura o ambiente que executa o c�digo.
	setlocale(LC_ALL, "Portuguese"); //utilizado para incluir os caracteres necess�rios � l�ngua portuguesa.
}

void fazerIntroducao() { //ao ser chamado, apresenta a introdu��o do sistema.
	cout<<"Ol�, este sistema foi feito para uma elei��o entre tr�s candidatos com 10 votos."<<endl;
}
	
void darInstrucoes() { // ao ser chamado, d� ao usu�rio as instru��es.
	cout<<"Lembre-se: \nPara escolher um candidato digite o respectivo n�mero (1, 2 ou 3). \nPara anular seu voto, digite 5. \nPara deixar seu voto em Branco, digite 0."<<endl;
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
	else { //neste cen�rio foi considerado que qualquer entrada diferente das esperadas anular� o voto.
		nulo++; 
	}
	
}

void informarResultado(){ // ao ser chamada, informar� a quantidade de votos de cada op��o.
	cout<<"O resultado da elei��o �:\n";
	cout<<"candidato 1: "<<c1<<endl;
	cout<<"candidato 2: "<<c2<<endl;
	cout<<"candidato 3: "<<c3<<endl;
	cout<<"branco"<<branco<<endl;
	cout<<"nulo"<<nulo<<endl;
}
//espa�o destinado ao corpo de c�digo principal

int main() {
	contador = 1; //atribui ao contador o valor 1.
	
	preparacaoDoAmbiente(); //chama a fun��o que configura o ambiente.
	fazerIntroducao(); //chama a fun��o que exibe o texto de introdu��o.
	darInstrucoes();  //chama a fun��o que exibe as instru��es de voto. Neste caso n�o foi considerado voto secreto, portanto n�o foi inserido no loop para repeti��o por n�o haver "limpeza de tela".
	
	while (contador<=10){ //o loop pede os votos e armazena temporariamente na vari�vel voto, chama a fun��o de colher votos e incrementa o contador.
	
		cout<<"Por favor, insira o voto n� "<<contador<<":"<<endl;
		cin>>voto; // atribui � vari�vel "voto" o valor informado pelo usu�rio.
		colherVoto(); // chama a fun��o colher voto que atribuir� �s vari�veis dedicada a contar cada voto.
		contador++; // incrementa o valor do contador.
	}
	informarResultado(); //chama a fun��o que exibe o resultado da elei��o.
}


