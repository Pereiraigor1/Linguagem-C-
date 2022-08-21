/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/

/*
5.26 - O que o seguinte segmento de programa faz?

for ( int i = 1; i <= 5; i++ )
	{
		for ( int j = 1; j <= 3; j++ ) 
		{
			 for ( int k = 1; k <= 4; k++ )
				cout << ‘*’;
		cout << endl;
		} // fim do for interno
			cout << endl;
	} // fim do for externo

*/

/* Resposta:
	Esse segmento do programa faz com que seja feito asteristicos organizados da seguinte forma:
		K significa a quantidade de asterísticos por coluna, no caso, são 4.
		J significa a quantidade de linhas que cada grupo de 4 asterísticos estão combinados. - 3 linhas por cada grupo
		I significa a quantidade de grupos - No total são 5 grupos.
		endl interno- faz o espaçamento de cada grupo.
		endl externo - finaliza o cout;
		
		****
		****
		****
		
		****
		****
		****
		
		****
		****
		****
		
		****
		****
		****

		****
		****
		****
		****
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <locale>

int main()
{
	setlocale(LC_ALL,"Portuguese");
	for ( int i = 1; i <= 5; i++ )
	{
		for ( int j = 1; j <= 3; j++ ) 
		{
			 for ( int k = 1; k <= 4; k++ )
				cout << "*";
		cout << endl;
		} // fim do for interno
		cout << endl;
	} // fim do for externo
}



