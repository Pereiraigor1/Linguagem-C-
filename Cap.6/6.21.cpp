/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/

/*
6.21 - Escreva um programa que insere uma s�rie de inteiros e os passa um por vez 
para a fun��o even, que utiliza o operador m�dulo para determinar se um inteiro � par. 
A fun��o deve aceitar um argumento inteiro e retornar true se o inteiro for par e false caso contr�rio.
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
	cout <<"\nDigite um inteiro para verificar se ele � par ou n�o: ";
	cin >> a;
	cout << even(a);
	}while(a!=9999);
	return 0;
}
