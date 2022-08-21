/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/


// Exercício 4.22: ex04_22.cpp
// O que esse programa imprime?
#include <iostream>
	using std::cout;
	using std::endl;
	int main()
	{
	int row = 10; // inicializa a linha
	int column; // declara a coluna
	while ( row >= 1 ) // faz loop até linha < 1 
	{ 
	column = 1; // configura coluna como 1 quando a iteração inicia
	while ( column <= 10 ) // faz o loop 10 vezes
 	{ 
	cout << ( row % 2 ? "<" : ">" ); // saída
	column++; // incrementa coluna
	} // fim do while interno
	row--; // decrementa linha
	cout << endl; // inicia nova linha de saída
	} // fim do while externo
	return 0; // indica terminação bem-sucedida
 	} 

/* Resposta:

	O programa imprime esses simbolos ">" / "<", no qual depende do valor de row, por exemplo,
	row inicia com o valor 10 enquanto a column inicia com valor 1. No caso, o row vai subtraindo até chegar em 1, enquanto a column se mantém até 
	o loop do row acabar. 
	Como o valor inicial do row é 10, e 10 % 2 = 0, o que será mostrado será a parte "na direita" desse "? "<" :">", ou seja:
		(? 1 : 0);
		>>>>>>>>>>
		<<<<<<<<<<
		>>>>>>>>>>
*/
