/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/

/*
5.6 -Escreva um programa que utiliza uma instru��o for para calcular e imprimir a m�dia de v�rios inteiros. Assuma que o �ltimo valor lido 
� o sentinela 9999. Uma t�pica seq��ncia de entrada talvez seja
 10 8 11 7 9 9999
que indica que o programa deve calcular a m�dia de todos os valores que precedem 9999.

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
	cout <<"Digite um n�mero: ";
	cin >>num;
	for (int i=num;num!=9999;i++)
	{
		soma +=num;
		cont++;
		cout <<"Informe um valor: ";
		cin >>num;
		media = float (soma/cont);
	}
	cout << "A m�dia �: "<< media;
	return 0;
}
