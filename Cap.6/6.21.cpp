/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/

/*
6.21 - Escreva um programa que insere uma série de inteiros e os passa um por vez 
para a função even, que utiliza o operador módulo para determinar se um inteiro é par. 
A função deve aceitar um argumento inteiro e retornar true se o inteiro for par e false caso contrário.
*/


int even (int a) {
	int x;
	x = a;
	if (x%2 == 0) 
		return true;
	else 
		return false;	
}
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <locale>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int a;
	cout <<"\nObs: PAR = TRUE(1)   IMPAR = FALSE(0) PARA CANCELAR DIGITE 9999\n";
	do{
	cout <<"\nDigite um inteiro para verificar se ele é par ou não: ";
	cin >> a;
	cout << even(a);
	}while(a!=9999);
	return 0;
}
