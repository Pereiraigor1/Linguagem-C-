/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/

//5.9 - Escreva um programa que utiliza uma instru��o for para calcular e imprimir o produto dos inteiros �mpares de 1 a 15.
// 1 3 5 7 9 11 13 15
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cmath>
#include <locale>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int soma = 1;
	cout <<"Inteiro impares:";
	for (int i=1;i<=15;i=i+2)
	{
		cout <<"\n" <<i;	
		soma = soma*i;
		
	}
	cout <<"\n\nA multiplica��o dos inteiros �mpares �: " << soma;
}



