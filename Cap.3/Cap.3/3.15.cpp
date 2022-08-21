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

#include "3.15.h"

Date::Date(int dia, int mes, int ano)
{
	setano(ano);
	setmes(mes);
	setdia(dia);
}
//Definindo Ano
void Date::setano(int ano){
	 ano1 = ano;
}
int Date::getano(){
	return ano1;
}
// Definindo Mes
void Date::setmes(int mes){
		mes1 = mes;
	}
int Date::getmes(){
	return mes1;
}
// Definindo dia
void Date::setdia(int dia){
	dia1 = dia;
}

int Date::getdia(){
	return dia1;
}

void Date::displayMessage(){
	if (getmes()>1 &&  getmes()<=12){
	cout <<"A data escolhida pelo usuário é : " << getdia() <<"/" <<getmes() <<"/" <<getano() <<endl;
}
	else 
		cout <<"Mês inválido" <<endl;
}	
#include <locale>
int main()
{
	setlocale(LC_ALL,"Portuguese");
	Date Data1(12,14,1299);
	Data1.displayMessage();
}
