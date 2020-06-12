#include <iostream>
using namespace std;

class EmployeeData
{
  char name[30];
  int age;
  char gender;
  public:
    void GetBasicInfo(void)
    {
      cout << "Enter the name : ";
      cin >> name;
      cout << "Enter the age : ";
      cin >> age;
      cout << "Enter the gender : ";
      cin >> gender;
    }
    
    void PrintBasicInfo(void)
    {
      cout << endl;
      cout << "*******************************************"<<endl;
      cout << endl;
      cout << "Basic Information" << endl;
      cout << endl;
      cout << "Name : " << name << endl;
      cout << "Age : " << age << endl;
      cout << "Gender : " << gender << endl;
      cout << endl;
    }
};

class DepartmentInfo: public EmployeeData
{
  char depname[50];
    int id;
  public:
    void GetDepartmentInfo(void)
    {
      cout << "Enter the Department name : ";
      cin >> depname;
      cout << "Enter the employee id : ";
      cin >> id;
    }

    void PrintDepartmentInfo(void)
    {
      cout << endl;
      cout << "Department Information"<<endl;
      cout << endl;
      cout << "Department Name : " << depname << endl;
      cout << "Employee id : " << id <<endl;
      cout << endl;
      cout << "*******************************************"<<endl;
      cout << endl;
    }
};

class Employee: public DepartmentInfo
{
  public:
    void GetEmployeeInfo(void)
    {
      cout << "Enter the employee's Basic information"<<endl;
      cout << endl;
      EmployeeData::GetBasicInfo();
      cout << endl;
      cout << "Enter the employee's Department Information" << endl;
      cout << endl;
      DepartmentInfo::GetDepartmentInfo();
    }

    void PrintEmployeeInfo(void)
    {
      EmployeeData::PrintBasicInfo();
      DepartmentInfo::PrintDepartmentInfo();
    }
};

int main() {
  Employee emp;
  emp.GetEmployeeInfo();
  emp.PrintEmployeeInfo();
}

//try the code at : https://repl.it/@Aravind1444/multilevelinheritancecpp#main.cpp
