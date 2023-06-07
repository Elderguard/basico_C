#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

//global var


//code

float converte(float F)
{
	float celsius;//variavel local da função
	celsius = (5.0/9.0)*(F-32);
	return(celsius);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("color 3f");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	
	float fahr, cel; // variavel local do bloco
	
	fahr=0;
	while(fahr<=100){
		cel= converte(fahr);
		cout<<fahr<<" Fahr ="<<cel<<"Celsius"<<endl;
		fahr=fahr+5;
	}
}

