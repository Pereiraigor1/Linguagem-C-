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

#include "3.13.h"

Invoice::Invoice(string NumIdent,string descricao, int quant,int preco)
{
	setNumIdent(NumIdent);
	setdescricao(descricao);
	setquant(quant);
	setpreco(preco);
}
//Número de Idenficicação
void Invoice::setNumIdent(string NumIdent){
		a = NumIdent;
}

string Invoice::getNumIdent(){
	return a;
}

//Descrição

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

// Preço
void Invoice::setpreco(int preco){
	d = preco;
}

int Invoice::getpreco(){
	return d;
}

int Invoice::getInvoiceAmount(){
	if (c <0 || d <0){
		e = 0;
		cout <<"\nNão há INVOICEAMOUNT já que o preço ou a quantidade é menor que 0.";
		
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
	
	cout << "Número de Identificação: " <<Cliente1.getNumIdent();
	cout << "\nDescrição: " <<Cliente1.getDescricao();
	cout << "\nQuantidade: " << Cliente1.getquant();
	cout << "\nPreço: " <<Cliente1.getpreco();
	cout << "\nInvoiceAmount: " <<Cliente1.getInvoiceAmount();
	
	cout << "\n\nNúmero de Identificação: " <<Cliente2.getNumIdent();
	cout << "\nDescrição: " <<Cliente2.getDescricao();
	cout << "\nQuantidade: " << Cliente2.getquant();
	cout << "\nPreço: " <<Cliente2.getpreco();
	cout << "\nInvoiceAmount: " <<Cliente2.getInvoiceAmount();
	
	return 0;
}
