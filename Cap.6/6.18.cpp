/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/

/*
6.18 - Escreva uma função integerPower( base, exponent ) que retorna o valor de
		baseexponent
 	  Por exemplo, integerPower( 3, 4 ) = 3 * 3 * 3 * 3. Pressuponha que o expoente seja um inteiro não-zero positivo e que a 
      base seja um inteiro. A função integerPower deve utilizar for ou while para controlar o cálculo. Não utilize funções da biblioteca  
      matemática.
*/



int integerPower(int a,int b){
		int x,n,baseexponent=1,contador=0;
		x = a;
		n = b;
		while (contador!=n){
			baseexponent = baseexponent*x;
			contador++;
		}
		return baseexponent;
}

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <locale>
int main(){
	int bas,expon;
	setlocale(LC_ALL,"Portuguese");
	cout <<"Digite a base para a exponencial: ";
	cin >> bas;
	cout <<"\nDigite o expoente para a exponencial: ";
	cin >> expon;
	cout << "A função integerPower tem como base " <<bas <<" e expoente "<< expon << " ,sua resposta é: "<< integerPower(bas,expon);	
}
