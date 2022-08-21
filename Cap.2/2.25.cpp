/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/


//2.25 - Escreva um programa que lê dois inteiros e determina e imprime se 
//o primeiro é um múltiplo do segundo. [Dica: Utilize o operador módulo.]


#include <iostream>
#include <locale.h>

using std::cin;
using std::cout;

main(){
	setlocale(LC_ALL,"Portuguese");
	int N1,N2;
	cout << "Digite o primeiro número: ";
	cin >> N1;
	cout << "Digite o segundo número: ";
	cin >>N2;
	if (N1 % N2 == 0) cout << "O número " << N1 << " é multiplo de " << N2<<".";
	else cout << "O número " << N1 << " não é multiplo de " << N2 <<".";
	
	return 0;
	
}
