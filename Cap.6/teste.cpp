

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include <locale>
#include <iomanip>
using std::setprecision;
int main(){
	setlocale(LC_ALL,"Portuguese");
	float N1,N2,N3, media;
	cout << "Digite a primeira nota do aluno: ";
	cin >> N1;
	cout << "Digite a segunda nota do aluno: ";
	cin >>N2;
	cout << "Digite a terceira nota do aluno: ";
	cin >>N3;
	media = (N1+N2+N3)/3;
	cout << fixed << setprecision(2);
	cout << "A média do aluno é de " << media <<endl;
	return 0;
	
	
	
}
