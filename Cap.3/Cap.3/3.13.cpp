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

#include "3.13.h"

Invoice::Invoice(string NumIdent,string descricao, int quant,int preco)
{
	setNumIdent(NumIdent);
	setdescricao(descricao);
	setquant(quant);
	setpreco(preco);
}
//N�mero de Idenficica��o
void Invoice::setNumIdent(string NumIdent){
		a = NumIdent;
}

string Invoice::getNumIdent(){
	return a;
}

//Descri��o

void Invoice::setdescricao(string descricao){
	b = descricao;
}

string Invoice::getDescricao(){
	return b;
}

// Quantidade 

void Invoice::setquant(int quant){
	c = quant;
}

int Invoice::getquant(){
	return c;
}

// Pre�o
void Invoice::setpreco(int preco){
	d = preco;
}

int Invoice::getpreco(){
	return d;
}

int Invoice::getInvoiceAmount(){
	if (c <0 || d <0){
		e = 0;
		cout <<"\nN�o h� INVOICEAMOUNT j� que o pre�o ou a quantidade � menor que 0.";
		
	}
	else 
		e = d*c;
		return e;
}
#include <locale>
int main(){
	setlocale(LC_ALL,"Portuguese");
	Invoice Cliente1("20890","Jogador de Geshin Impact",4,-400);
	Invoice Cliente2("21213","Jogador de tenis",4,399);
	
	cout << "N�mero de Identifica��o: " <<Cliente1.getNumIdent();
	cout << "\nDescri��o: " <<Cliente1.getDescricao();
	cout << "\nQuantidade: " << Cliente1.getquant();
	cout << "\nPre�o: " <<Cliente1.getpreco();
	cout << "\nInvoiceAmount: " <<Cliente1.getInvoiceAmount();
	
	cout << "\n\nN�mero de Identifica��o: " <<Cliente2.getNumIdent();
	cout << "\nDescri��o: " <<Cliente2.getDescricao();
	cout << "\nQuantidade: " << Cliente2.getquant();
	cout << "\nPre�o: " <<Cliente2.getpreco();
	cout << "\nInvoiceAmount: " <<Cliente2.getInvoiceAmount();
	
	return 0;
}
