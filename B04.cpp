#include<iostream>
using namespace std;

//global var


//code

int AreaQuadrado(int lado)
{
	int A;//variavel local da função
	A=lado*lado;
	return(A);
}

int main(){
	int lado, area; // variavel local do bloco
	cout<<"Informe o tamanho da lateral do quadrado: \n";
	cin>>lado;
	
	area = AreaQuadrado(lado);
	cout<<"Area="<<area<<endl;
}

