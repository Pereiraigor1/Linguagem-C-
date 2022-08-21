/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/


#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>

#include "3.12.h"

Account::Account(){
	cout <<"Digite o valor de entrada (Cash) R$: ";
	cin >>cash;
	if (cash <=0){
		cash = 0;
		cout <<"O saldo inicial � inv�lido\n";
	}
	menu();
}
void Account::menu(){
	int op = 0;
	do{
		cout <<"0. Sair" <<endl;
		cout <<"1. Chegar Saldo" <<endl;
		cout <<"2. Depositar dinheiro" <<endl;
		cout <<"3. Sacar dinheiro"<<endl;
		cin >> op;
		action(op);
	}while(op);
}
void Account::action(int op){
	switch(op){
		case 0:
			cout <<"Fechando Sistema "<<endl;
			break;
		case 1:
			checkBalance();
			break;
		case 2:
			depositCash();
			break;
		case 3:
			withdraw();
			break;
		default:
			cout << "Op��o inv�lida" <<endl;
	}

}

void Account::checkBalance(){
	cout <<"Seu saldo � R$ " << cash <<endl;
}
void Account::depositCash(){
	double val;
	cout <<"Valor que deseja depositar ";
	cin >> val;
	if (val>0){
		cash+= val;
		checkBalance();
	}
	else cout <<"Valor inv�lido! Tente novamente " <<endl;
}

void Account::withdraw(){
	double val;
	cout <<"Valor que deseja sacar ";
	cin >>val;
	if (val <=cash){
		cash -=val;
		checkBalance();
	}
	else 
		cout<<"Debit amount exceeded account balance "<<endl;
}

#include <locale>
int main(){
	setlocale(LC_ALL,"Portuguese");
	Account c;
	Account b;
	return 0;
}
