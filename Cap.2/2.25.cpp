/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/


//2.25 - Escreva um programa que l� dois inteiros e determina e imprime se 
//o primeiro � um m�ltiplo do segundo. [Dica: Utilize o operador m�dulo.]


#include <iostream>
#include <locale.h>

using std::cin;
using std::cout;

main(){
	setlocale(LC_ALL,"Portuguese");
	int N1,N2;
	cout << "Digite o primeiro n�mero: ";
	cin >> N1;
	cout << "Digite o segundo n�mero: ";
	cin >>N2;
	if (N1 % N2 == 0) cout << "O n�mero " << N1 << " � multiplo de " << N2<<".";
	else cout << "O n�mero " << N1 << " n�o � multiplo de " << N2 <<".";
	
	return 0;
	
}
