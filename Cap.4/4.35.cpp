/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
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
	//A) Fatorial de um n�mero
	cout <<"Digite um n�mero: ";
	cin >>numero;
	for (fat = 1; numero >1;numero=numero-1){
		fat = fat*numero;
	}	
	if (numero <1) cout <<"N�mero inv�lido";
	else
		cout << "O fatorial do n�mero �: " <<fat;
	// B) Valor da Constante Matem�tica C) E^X
	cout <<"\n\nDetermine o n�mero de termos para a constante matem�tica e: ";
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
	cout <<"\nO valor da constante 'e' �: "<<E;
	cout <<"\nO valor da constante 'e^x �: " <<K;
	return 0;	

}


