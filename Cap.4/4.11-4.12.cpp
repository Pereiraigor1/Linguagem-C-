/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/


/*

4.11 - Identifique e corrija o(s) erro(s) em cada um dos seguintes:
a) if ( age >= 65 );
 cout << �Age is greater than or equal to 65� << endl;
else
 cout << �Age is less than 65 << endl�;

Resposta:
	O erro se encontra no ";" presente ap�s a declara��o do if.


b) if ( age >= 65 )
 cout << �Age is greater than or equal to 65� << endl;
else;
 cout << �Age is less than 65 << endl�
 
Resposta:
 	O erro se encontra ap�s a declara��o do "else";

 	
c) int x = 1, total;
while ( x <= 10 )
 {
 total += x;
 x++;
 }
 
Resposta: 
	O erro se encontra na palavra "total", pois a mesma n�o tem um "inicio" definido e acaba gerando erro no loop.
	 
 
 
d) While ( x <= 100 )
 total += x;
 x++;
 
Resposta:
	O erro se encontra na forma de escrita do "while", no qual o compilador acaba por n�o o reconhecer, como tamb�m, o "total" n�o � definido igual a 0;
 	Falta chave no loop.
 
e) while ( y > 0 )
 {
 cout << y << endl;
 y++;
 }
 
Resposta:
	Vai gerar um loop infinito, j� que n�o tem limite para y.
	

4.12 - O que o programa a seguir imprime:


// Exerc�cio 4.12: ex04_12.cpp
// O que esse programa imprime?
#include <iostream>
using std::cout;
using std::endl;

int main()
	{
		int y; // declara y
		int x = 1; // inicializa x
 		int total = 0; // inicializa o total
 		while ( x <= 10 ) // faz o loop 10 vezes
 		{
 			 y = x * x; // realiza os c�lculos
 			cout << y << endl; // gera a sa�da dos resultados
 			total += y; // adiciona y a total
 			x++; // incrementa o contador x
		 } // fim do while 
	 	cout << �Total is � << total << endl; // exibe o resultado
 		return 0; // indica termina��o bem-sucedida
	} // fim de main


Reposta: 

Basicamente, o programa t� imprimindo a soma dos quadrados dos n�meros no intervalo [1,10], e gerando a saida do quadrado de cada n�mero.


