/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/


// Exerc�cio 4.22: ex04_22.cpp
// O que esse programa imprime?
#include <iostream>
	using std::cout;
	using std::endl;
	int main()
	{
	int row = 10; // inicializa a linha
	int column; // declara a coluna
	while ( row >= 1 ) // faz loop at� linha < 1 
	{ 
	column = 1; // configura coluna como 1 quando a itera��o inicia
	while ( column <= 10 ) // faz o loop 10 vezes
 	{ 
	cout << ( row % 2 ? "<" : ">" ); // sa�da
	column++; // incrementa coluna
	} // fim do while interno
	row--; // decrementa linha
	cout << endl; // inicia nova linha de sa�da
	} // fim do while externo
	return 0; // indica termina��o bem-sucedida
 	} 

/* Resposta:

	O programa imprime esses simbolos ">" / "<", no qual depende do valor de row, por exemplo,
	row inicia com o valor 10 enquanto a column inicia com valor 1. No caso, o row vai subtraindo at� chegar em 1, enquanto a column se mant�m at� 
	o loop do row acabar. 
	Como o valor inicial do row � 10, e 10 % 2 = 0, o que ser� mostrado ser� a parte "na direita" desse "? "<" :">", ou seja:
		(? 1 : 0);
		>>>>>>>>>>
		<<<<<<<<<<
		>>>>>>>>>>
*/
