#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int sID, char sName[]) 
{
  studentId=sID;
  strcpy(name,sName);
}

// Display StudentId and Name
void Student::display() 
{
  cout<<"Student ID is : "<<studentId<<endl;
  cout<<"Student Name : "<<name<<endl;
}
