/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama J�nior
	     Claudemir Valente Soares
	     Washigton Henrique Alves J�nior
*/


/*

5.18 - Assuma i = 1, j = 2, k = 3 e m = 2. O que cada uma das seguintes instru��es imprime? Os par�nteses s�o necess�rios em cada 
caso?

a) cout << (i == 1) << endl;
Resposta:
	Apresentar� na tela o valor de 1 para i. Nesse caso, o par�ntese � necess�rio.
	
b) cout << (j==3) << endl;
Resposta:
	Apresentar� 0(falso booleano) como resultado, pois h� um erro que o programa "deixa passar", no caso, seria a defini��o da vari�vel j=2 e a sa�da na tela da vari�vel
	j = 3.

c) cout << (i>=1 && j<4) <<endl; 
	
	Apresentar� verdadeiro como resposta, ou o 1. J� que, o i pode ser 1 e o j s� tem que ser menor que 4, sendo assim:
					V && V = V; Precisa sim do par�nteses.
					
d) cout << ( m <=99 && k < m ) << endl;
			(2 <= 99 && 3<2)
			( V && F) = F , ou seja, a sa�da ser� 0. Precisa SIM do par�nteses.
			
e) cout << (j >= i || k == m) << endl;
		   (2 >=1 || 3 == 2)
		   ( V || F) = V , ou seja, por se tratar de um simbolo OU(||), se uma das alternativas derem verdadeiras, significa que a saida ser� verdadeira. 
		   					Precisa usar par�nteses.
		   					
f) cout << ( k+m<j || 3-j>=k) << endl;
		    ( 3+2<2 || 3-2>=3) 
		    (1<2 || 1>=3) 
		    ( V || F) , assim como a quest�o anterior, a sa�da ser� Verdadeira. Precisa usar par�nteses.
		    
g) cout << (!m) << endl;
			F , no caso, o operador utilizado � o N�O, como m=3 � Verdadeiro, a sa�da !m gera um valor falso. N�o precisa usar par�nteses.
			
h) cout << (!(j-m)) <<endl;
		   (!(2-2)) 
		     (!(0))
		      V, no caso, � necess�rio usar o par�nteses apenas onde se encontra a subtra��o, j� que se n�o tivesse, o operador provavelmente mudaria o resultado
		      da sa�da.
		      
i) cout <<(!(k>m)) <<endl.
		   (!(3>2))
		   (!(V)) 
		     F , o N�o de verdadeiro � o FALSE, no caso, sairia 0 em um compilador de linguagem.
	
	
