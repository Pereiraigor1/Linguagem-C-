/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/


// 2.24 - Escreva um programa que l� um inteiro e determina e imprime se ele � �mpar ou par. [Dica: Utilize o operador m�dulo. Um n�mero par 
// � um m�ltiplo de dois. Qualquer m�ltiplo de dois deixa um resto de zero quando dividido por 2.

#include <iostream>
#include <locale.h>
	using std::cin;
	using std::cout;

main(){
	setlocale(LC_ALL,"Portuguese");
	int N1;
	cout << "Digite um n�mero para verificar se � impar ou par: ";
	cin >> N1;
	if (N1 % 2 == 1) cout << "O n�mero � impar";
	else cout <<" O n�mero � par";
	
	return 0;
}
