
/*
(Classe Invoice) Crie uma classe chamada Invoice que uma loja de suprimentos de inform�tica possa utilizar para representar uma 
fatura de um item vendido na loja. Uma Invoice (fatura) deve incluir quatro partes das informa��es como membros de dados � um 
n�mero identificador (tipo string), uma descri��o (tipo string), a quantidade comprada de um item (tipo int) e o pre�o por item (tipo 
int). [Nota: Nos cap�tulos subseq�entes, utilizaremos n�meros que cont�m pontos de fra��o decimal (por exemplo, 2,75) � chamados 
valores de ponto flutuante � para representar quantias em d�lar.] Sua classe deve ter um construtor que inicializa os quatro membros 
de dados. Forne�a uma fun��o set e uma fun��o get para cada membro de dados. Al�m disso, forne�a uma fun��o-membro chamada 
getInvoiceAmount que calcula a quantia da fatura (isto �, multiplica a quantidade pelo pre�o por item) e depois retorna a quantidade 
como um valor int. Se a quantidade n�o for positiva, ela deve ser configurada como 0. Se o pre�o por item n�o for positivo, ele deve ser 
configurado como 0. Escreva um programa de teste que demonstre as capacidades da classe Invoice.

*/

#include <string.h>
using std::string;

class Invoice {
	public:
		Invoice(string NumIdent, string descricao, int quant, int preco);
		void setNumIdent(string);
		void setdescricao(string);
		void setquant(int);
		void setpreco(int);
		string getNumIdent();
		string getDescricao();
		int getquant();
		int getpreco();
		int getInvoiceAmount();
		void saida();
	private:
		string a;
		string b;
		int c;
		int d;
		int e;
	
};
