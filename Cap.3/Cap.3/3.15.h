
/*
(Classe Date) Crie uma classe chamada Date que inclua três partes de informações como membros de dados — um mês (tipo int), um 
dia (tipo int) e um ano (tipo int). Sua classe deve ter um construtor com três parâmetros que utilize os parâmetros para inicializar os três 
membros de dados. Para o propósito desse exercício, assuma que os valores fornecidos para o ano e o dia são corretos, mas certifique-se 
de que o valor de mês esteja no intervalo 1–12; se não estiver, configure o mês como 1. Forneça uma função set e uma função get para 
cada membro de dados. Forneça uma função-membro displayDate que exiba o dia, o mês e o ano separados por barras normais (/). 
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
