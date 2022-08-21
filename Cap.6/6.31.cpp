/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/

/*
6.31 - (Dígitos invertidos) Escreva uma função que aceita um valor inteiro e retorna o número com seus dígitos invertidos. Por exemplo, dado 
o número 7.631, a função deve retornar 1.367.
*/

int qtde_digitos(int numero)
{
	int cont =0;
	
	while(numero>=1){
		numero = numero/10;
		cont++;
	}
	return cont;	
}

#include <cmath>
int inverte (int numero)
{
	int invertido = 0,contador;
	contador = qtde_digitos(numero);
	while(numero>=1){
		invertido = invertido+(numero%10)*pow(10,(contador-1));
		numero = numero/10;
		contador --;
	}
	return invertido;
}

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <locale>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int n;
	cout <<"Digite um número: ";
	cin >>n;
	cout << "\nNúmero invertido: " << inverte(n);
}
