#include<iostream>
#include<locale.h>
using namespace std;

//global var


//code

int AreaRetangulo(int lado1, int lado2)
{
	int A;//variavel local da função
	A=lado1*lado2;
	return(A);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	int lado1, lado2, area; // variavel local do bloco
	cout<<"Informe o tamanho de um dos lados do retângulo: \n";
	cin>>lado1;
		cout<<"Informe o tamanho do outro lado do retângulo: \n";
	cin>>lado2;
	
	area = AreaRetangulo(lado1, lado2);
	cout<<"Area="<<area<<endl;
}

