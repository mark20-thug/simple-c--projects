#include<iostream>
using namespace std;

class it{
	private:
		int regNo;
	public:
		int Year, Semester;
		string Name;
		string Course;
		void setRegNo(int regNumber){
			regNo = regNumber;
			cout<<"enter your regNo:";
			cin>>regNumber;
		}
	it(int year, int semester, string name, string course){
	Year = year;
	Semester = semester;
	Name = name;
	Course = course;
}
	void showmyData(){
	cout<<"Name: "<<Name<<endl;
	cout<<"Year: "<<Year<<endl;
	cout<<"Semester: "<<Semester<<endl;
	cout<<"Course: "<<Course<<endl;
}

};
class software:it{
	public:
		string courseUnit;
		string FevprogrammingLang;
		
software(int year, int semester, string name, string course, string Courseunit, string fevProgrammingLang)
	:it(year, semester, name, course){
	courseUnit = Courseunit;
	FevprogrammingLang = fevProgrammingLang;
}
void moredata(){
	cout<<"CourseUnit: "<<courseUnit<<endl;
	cout<<"Fev programming Lang: "<<FevprogrammingLang<<endl;
}
};


int main(){
	cout<<"\n";
	it student= it(1,2,"sserunjogi mark","BSSE");
	student.showmyData();
	software stw = software(1,2,"sserunjogi mark","BSSE","OOP", "C++");
	stw.moredata();
	
	cout<<"\n";
	it student2 =it(1,2,"Sanyu Luyiga Imaculet", "BIT");
	student2.showmyData();
	
	cout<<"\n";
	it student4= it(1,2,"Kafeero proferious","BSSE");
	student4.showmyData();
	software stw3 = software(1,2,"Kafeero proferious","BSSE","WEBDEV", "JAVASCRIPT");
	stw3.moredata();
	
	cout<<"\n";
	it student5= it(1,2,"katabi emmanuel","BSSE");
	student5.showmyData();
	software stw4 = software(1,2,"katabi emmanuel","BSSE","NETWORKING", "LINUX");
	stw4.moredata();	
	
	cout<<"\n";
	it student6= it(2,2,"Ahebwa henry","BCS");
	student6.showmyData();

	
	
	
	
	
	
}
