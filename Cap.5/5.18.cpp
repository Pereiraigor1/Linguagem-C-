/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/


/*

5.18 - Assuma i = 1, j = 2, k = 3 e m = 2. O que cada uma das seguintes instruções imprime? Os parênteses são necessários em cada 
caso?

a) cout << (i == 1) << endl;
Resposta:
	Apresentará na tela o valor de 1 para i. Nesse caso, o parêntese é necessário.
	
b) cout << (j==3) << endl;
Resposta:
	Apresentará 0(falso booleano) como resultado, pois há um erro que o programa "deixa passar", no caso, seria a definição da variável j=2 e a saída na tela da variável
	j = 3.

c) cout << (i>=1 && j<4) <<endl; 
	
	Apresentará verdadeiro como resposta, ou o 1. Já que, o i pode ser 1 e o j só tem que ser menor que 4, sendo assim:
					V && V = V; Precisa sim do parênteses.
					
d) cout << ( m <=99 && k < m ) << endl;
			(2 <= 99 && 3<2)
			( V && F) = F , ou seja, a saída será 0. Precisa SIM do parênteses.
			
e) cout << (j >= i || k == m) << endl;
		   (2 >=1 || 3 == 2)
		   ( V || F) = V , ou seja, por se tratar de um simbolo OU(||), se uma das alternativas derem verdadeiras, significa que a saida será verdadeira. 
		   					Precisa usar parênteses.
		   					
f) cout << ( k+m<j || 3-j>=k) << endl;
		    ( 3+2<2 || 3-2>=3) 
		    (1<2 || 1>=3) 
		    ( V || F) , assim como a questão anterior, a saída será Verdadeira. Precisa usar parênteses.
		    
g) cout << (!m) << endl;
			F , no caso, o operador utilizado é o NÃO, como m=3 é Verdadeiro, a saída !m gera um valor falso. Não precisa usar parênteses.
			
h) cout << (!(j-m)) <<endl;
		   (!(2-2)) 
		     (!(0))
		      V, no caso, é necessário usar o parênteses apenas onde se encontra a subtração, já que se não tivesse, o operador provavelmente mudaria o resultado
		      da saída.
		      
i) cout <<(!(k>m)) <<endl.
		   (!(3>2))
		   (!(V)) 
		     F , o Não de verdadeiro é o FALSE, no caso, sairia 0 em um compilador de linguagem.
	
	
