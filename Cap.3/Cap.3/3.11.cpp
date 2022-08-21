/*
Equipe : Igor Rafael da Silva Pereira
	     Evaldo Pereira Gama Júnior
	     Claudemir Valente Soares
	     Washigton Henrique Alves Júnior
*/


#include <iostream>
using std::cout;
using std::endl;

#include "3.11.h"
GradeBook::GradeBook(string name)
{
	setCourseName (name);
}
void GradeBook::setCourseName(string name)
{
	courseName = name;
}	
string GradeBook::getCourseName()
{
	return courseName;
}

void GradeBook::setCourseInstructorName(string name)
{
	courseInstructorName = name;
}
string GradeBook::getCourseInstructorName()
{
	return courseInstructorName;	
}

void GradeBook::displayMessage()
{
	cout << "Welcome to the grade book for\n" <<getCourseName() << "!" << endl;
	cout <<"This course is 	presented by: " << getCourseInstructorName() <<endl;
}


int main()
{
	GradeBook gradeBook1 ("CS101 Introduction to C++ Programming");
	GradeBook gradeBook2 ("CS102 Data Structures in C++");	
	GradeBook instrutor ("Igor Rafael da Silva Pereira");
	cout <<"gradeBook1 created for course: " <<gradeBook1.getCourseName()
	<<"\ngradeBook2 created for course: " << gradeBook2.getCourseName() 
	<<"\nInstrutor do Curso: " << instrutor.getCourseName()
	<< endl;
	return 0;	
}

