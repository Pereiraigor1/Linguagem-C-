/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/


#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#define PI 3.14159
#include <locale>
#include <cmath>
int main(){
	setlocale(LC_ALL,"Portuguese");
	double raio,diametro,circuferencia,area;

	cout <<"Digite o raio do c�rculo: ";
	cin >> raio;
	diametro = 2*raio;
	cout <<"\n O di�metro �: " <<diametro;
	circuferencia = 2*PI*raio;
	cout <<"\n A circufer�ncia �: " <<circuferencia;
	area = PI*pow(raio,2);
	cout <<"\n A �rea � de: " <<area;
	return 0;	
}
