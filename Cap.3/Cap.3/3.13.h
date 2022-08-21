
/*
(Classe Invoice) Crie uma classe chamada Invoice que uma loja de suprimentos de informática possa utilizar para representar uma 
fatura de um item vendido na loja. Uma Invoice (fatura) deve incluir quatro partes das informações como membros de dados — um 
número identificador (tipo string), uma descrição (tipo string), a quantidade comprada de um item (tipo int) e o preço por item (tipo 
int). [Nota: Nos capítulos subseqüentes, utilizaremos números que contêm pontos de fração decimal (por exemplo, 2,75) — chamados 
valores de ponto flutuante — para representar quantias em dólar.] Sua classe deve ter um construtor que inicializa os quatro membros 
de dados. Forneça uma função set e uma função get para cada membro de dados. Além disso, forneça uma função-membro chamada 
getInvoiceAmount que calcula a quantia da fatura (isto é, multiplica a quantidade pelo preço por item) e depois retorna a quantidade 
como um valor int. Se a quantidade não for positiva, ela deve ser configurada como 0. Se o preço por item não for positivo, ele deve ser 
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
