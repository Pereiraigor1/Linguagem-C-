/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/

/*
5.6 -Escreva um programa que utiliza uma instrução for para calcular e imprimir a média de vários inteiros. Assuma que o último valor lido 
é o sentinela 9999. Uma típica seqüência de entrada talvez seja
 10 8 11 7 9 9999
que indica que o programa deve calcular a média de todos os valores que precedem 9999.

*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <locale>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	int num,cont=0;
	float soma=0,media=0;
	cout <<"Digite um número: ";
	cin >>num;
	for (int i=num;num!=9999;i++)
	{
		soma +=num;
		cont++;
		cout <<"Informe um valor: ";
		cin >>num;
		media = float (soma/cont);
	}
	cout << "A média é: "<< media;
	return 0;
}
