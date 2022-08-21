/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <cmath>
#include <locale>
int main(){
	setlocale(LC_ALL,"Portuguese");
	int fat,exp=1,i,j,X,M,numero,soma=0,num=1.0,N;
	float f,E=1,K=1;
	//A) Fatorial de um número
	cout <<"Digite um número: ";
	cin >>numero;
	for (fat = 1; numero >1;numero=numero-1){
		fat = fat*numero;
	}	
	if (numero <1) cout <<"Número inválido";
	else
		cout << "O fatorial do número é: " <<fat;
	// B) Valor da Constante Matemática C) E^X
	cout <<"\n\nDetermine o número de termos para a constante matemática e: ";
	cin >> N;
	cout <<"\n Determine o valor de X: ";
	cin >>X;
	for (i=1;i<=N;i++){
		f = 1;
		for(j=1;j<=i;j++){
			f = f*j;
			exp++;
		}
		E = E +1.0/f;
		K=1+(pow(X,exp)/f);
	}
	cout <<"\nO valor da constante 'e' é: "<<E;
	cout <<"\nO valor da constante 'e^x é: " <<K;
	return 0;	

}


