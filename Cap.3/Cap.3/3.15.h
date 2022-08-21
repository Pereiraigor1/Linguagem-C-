
/*
(Classe Date) Crie uma classe chamada Date que inclua tr�s partes de informa��es como membros de dados � um m�s (tipo int), um 
dia (tipo int) e um ano (tipo int). Sua classe deve ter um construtor com tr�s par�metros que utilize os par�metros para inicializar os tr�s 
membros de dados. Para o prop�sito desse exerc�cio, assuma que os valores fornecidos para o ano e o dia s�o corretos, mas certifique-se 
de que o valor de m�s esteja no intervalo 1�12; se n�o estiver, configure o m�s como 1. Forne�a uma fun��o set e uma fun��o get para 
cada membro de dados. Forne�a uma fun��o-membro displayDate que exiba o dia, o m�s e o ano separados por barras normais (/). 
Escreva um programa de teste que demonstre as capacidades da classe Date.
*/


#include <string>
using std::string;

class Date{
	public:
		Date(int ano, int mes, int dia);
		void setmes(int);
		void setdia(int);
		void setano(int);
		int getmes();
		int getano();
		int getdia();
		void displayMessage();
	private:
		int ano1;
		int mes1;
		int dia1;
};
