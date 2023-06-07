#include<iostream>
using namespace std;

//var
int k; //variavel global

//code

void AreaQuadrado(int lado)
{
	int A;//variavel local da função
	A=lado*lado;
	cout<<"Area="<<A<<endl;
}

int main(){
	int x; // variavel local do bloco
	AreaQuadrado(2);
	AreaQuadrado(5);
	AreaQuadrado(10);
	
}

