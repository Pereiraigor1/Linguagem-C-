/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/


// 2.24 - Escreva um programa que lê um inteiro e determina e imprime se ele é ímpar ou par. [Dica: Utilize o operador módulo. Um número par 
// é um múltiplo de dois. Qualquer múltiplo de dois deixa um resto de zero quando dividido por 2.

#include <iostream>
#include <locale.h>
	using std::cin;
	using std::cout;

main(){
	setlocale(LC_ALL,"Portuguese");
	int N1;
	cout << "Digite um número para verificar se é impar ou par: ";
	cin >> N1;
	if (N1 % 2 == 1) cout << "O número é impar";
	else cout <<" O número é par";
	
	return 0;
}
