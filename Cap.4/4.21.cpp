/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/


// Exerc�cio 4.21: ex04_21.cpp
// O que esse programa imprime?
 #include <iostream>
	using std::cout;
	using std::endl;
int main(){

 	int count = 1; 
 	while ( count <= 10 ) 
  { 
	cout << ( count % 2 ? "****" : "++++++++" ) << endl;
 	count++; 
} 
  return 0;
 } 
 
/*
Resposta:
	O programa imprime o cout definido pelo m�dulo de 2, no caso, quando o m�dulo � um n�mero "decimal", o primeiro valor � definido = "****". 
	Se o m�dulo for um n�mero inteiro, o segundo valor � definido = "++++++++".
*/
