/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/


// Exercício 4.21: ex04_21.cpp
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
	O programa imprime o cout definido pelo módulo de 2, no caso, quando o módulo é um número "decimal", o primeiro valor é definido = "****". 
	Se o módulo for um número inteiro, o segundo valor é definido = "++++++++".
*/
