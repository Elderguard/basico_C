#include<iostream>
#include<locale.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

//global var


//code

float calcula(float x)
{
	float F;//variavel local da função
	F = 2*(x*x)-(3*x)+5;
	return(F);
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	system("color 3f");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),2);
	
	float x, F; // variavel local do bloco
	
	x=0;
	while(x<=10){
		F= calcula(x);
		cout<<"F= "<<F<<" quando x ="<<x<<endl;
		x++;
	}
}

