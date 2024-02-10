#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    string fname;
    string lname;
	string course;
	string id;
	string level;
	double research;
	double compiler;
	double security;
	double software;
	double vb;
	double database;
	float gpa=2.90;
	cout<<"                         WELCOME TO GCTU STUDENT PORTAL";
	cout<<"\n                        ********************************";
	cout<<"\n                                 RESULT SLIP";
	cout<<"\n                                *************";
	cout<<"\n       PLEASE ENTER YOUR FIRST NAME :";
	getline(cin, fname);
	cout<<"\n       PLEASE ENTER YOUR LAST NAME  :";
	getline(cin, lname);
	cout<<"\n       PLEASE ENTER YOUR INDEX NUMBER :";
	getline(cin, id);
	cout<<"\n       PLEASE ENTER YOUR LEVEL :";
	getline(cin, level);
	cout<<"\n       PLEASE ENTER YOUR COURSE :";
	getline(cin, course);
	cout<<"\n       PLEASE ENTER THE SCORE YOU HAD FOR RESEARCH METHODOLGY :";
	cin>>research;
	cout<<"\n        PLEASE ENTER THE SCORE YOU HAD FOR COMPILERS :";
	cin>>compiler;
	cout<<"\n       PLEASE ENTER THE SCORE YOU HAD FOR COMPUTER SECURITY :";
	cin>>security;
	cout<<"\n        PLEASE ENTER THE SCORE YOU HAD FOR SOFTWARE ENGINEERING :";
	cin>>software;
	cout<<"\n        PLEASE ENTER THE SCORE YOU HAD FOR VISUAL BACIC PROGRAMMING :";
	cin>>vb;
	cout<<"\n         PLEASE ENTER THE SCORE YOU HAD FOR DATABASE :";
	cin>>database;
	cout<<"\nNAME : "<<fname<<" "<<lname;
	cout<<"\nID NUMBER : "<<id;
	cout<<"\nLEVEL : "<<level;
	cout<<"\nCOURSE :"<<course;
	cout<<"\n        ***************************************************";
	cout<<"\n        * COURSE                   *         SCORE        *";
	cout<<"\n        * RESEARCH METHODOLOGY     *   "<<research<<"     *";
	cout<<"\n        * COMPILERS                *   "<<compiler<<"     *";
	cout<<"\n        * COMPUTER SECURITY        *   "<<security<<"     *";
	cout<<"\n        * SOFTWARE ENGINEERING     *   "<<software<<"     *";
	cout<<"\n        * VISUAL BASIC PROGRAMMING *   "<<vb<<"           *";
	cout<<"\n        ***************************************************";
	cout<<"\n          GPA= "<<gpa;
	
	
	return 0;
}
