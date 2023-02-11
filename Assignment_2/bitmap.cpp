#include<iostream>
#include<cstring>
#include"bitmap.h"
using namespace std;

Student::Student()
{
	rollno=0;
	strcpy(name," ");
	marks[0]={0};

}

Student::Student(int r, const char *n, int m1, int m2, int m3, int m4, int m5) // here m1,m2,m3,m4 and m5 are marks in each subject
{
	rollno=r;
	strcpy(name,n);
	marks[0]=m1;
	marks[1]=m2;
	marks[2]=m3;
	marks[3]=m4;
	marks[4]=m5;
}

void Student::Accept()
{
	cin>>rollno;
	cin>>name;
	cin>>marks[0]>>marks[1]>>marks[2]>>marks[3]>>marks[4];
}


void Student::Display()
{
	cout<<"roll no.:"<<rollno;
	cout<<"name:"<<name;
	cout<<"marks:"<<marks[1]<<", "<<marks[2]<<", "<<marks[3]<<", "<<marks[4];
}

float Student::calcAverage()
{
	float avg;
	for(int i=0;i<5;i++)
	avg+=marks[i];
	avg/=5.0;
	return avg;
}

char Student::calcGrade()
{
	char grade;
	float avg=calcAverage();
	if(avg>=60)
		grade='A';
	else if(avg>=50)
		grade='B';
	else if(avg>=40)
		grade='C';
	else
		grade='D';
	return grade;
}

int Student::highestMarks()
{
	int highest;
	highest=marks[0];
	for(int i=1;i<5;i++){
		if(marks[i]>highest)
		highest=marks[i];
	}
	return highest;
}

int Student::lowestMarks()
{
	int lowest;
	lowest=marks[0];
	for(int i=1;i<5;i++){
		if(marks[i]>lowest)
		lowest=marks[i];
	}
	return lowest;
}