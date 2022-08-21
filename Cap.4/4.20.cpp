/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/


#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "4.20.h"

void Analysis::processExamResults()
{
	int passes = 0;
	int failures = 0;
	int studentCounter = 1;
	int result;

	while (studentCounter <=10 )
	{
		cout << "Enter result (1 = pass, 2 = fail): ";
		cin >> result;
		if (result==1) passes+=1;
		if (result==2) failures+=1;	
	studentCounter++;
	}
	cout <<"Passed: " << passes <<"\nFailed: " << failures <<endl;
	
	if (passes >8) cout <<"Raise tuition" <<endl;
}


int main()
{
	Analysis application;
	application.processExamResults();
	return 0;
}
