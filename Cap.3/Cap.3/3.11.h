/*
3.11-
(Modificando a classe GradeBook) Modifique a classe GradeBook (figuras 3.11�3.12) como mostrado a seguir:
a) Inclua um segundo membro de dados string que representa o nome do instrutor de curso.
b) Forne�a uma fun��o set para alterar o nome do instrutor e uma fun��o get para recuper�-lo.
c) Modifique o construtor para especificar dois par�metros � um para o nome do curso e um para o nome do instrutor.
d) Modifique a fun��o-membro displayMessage de tal maneira que ele primeiro gere a sa�da da mensagem de boas-vindas e o nome 
do curso, depois gere a sa�da de �This course is presented by: � seguido pelo nome do instrutor.
Utilize sua classe modificada em um programa de teste que demonstra as novas capacidades da classe.
*/

#include <string>
using std::string;

class GradeBook
{
	public:
		GradeBook(string name);
		void setCourseName(string);
		void setCourseInstructorName(string);
		string getCourseInstructorName();
		string getCourseName();
		void displayMessage();
	private:
		string courseName;
		string courseInstructorName;
		
};
