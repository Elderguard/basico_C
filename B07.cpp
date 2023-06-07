#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

//global var


//code

float calculaIMC(float altura, float peso)
{
	float A;//variavel local da função
	A=peso/(altura*altura);
	return(A);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("color 3f");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	
	float altura, peso, IMC; // variavel local do bloco
	cout<<"Informe a altura da pessoa: \n";
	cin>>altura;
		cout<<"Informe o peso da pessoa: \n";
	cin>>peso;
	
	IMC = calculaIMC(altura, peso);
	cout<<"IMC="<<IMC<<endl;
}

