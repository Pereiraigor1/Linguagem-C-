/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
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

	cout <<"Digite o raio do círculo: ";
	cin >> raio;
	diametro = 2*raio;
	cout <<"\n O diâmetro é: " <<diametro;
	circuferencia = 2*PI*raio;
	cout <<"\n A circuferência é: " <<circuferencia;
	area = PI*pow(raio,2);
	cout <<"\n A área é de: " <<area;
	return 0;	
}
