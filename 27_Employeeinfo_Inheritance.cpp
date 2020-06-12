#include <iostream>
using namespace std;

class EmployeeData
{
  protected:
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
};

class Department
{
  protected:
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
};

class employee: private EmployeeData, private Department
{
  public:
    void GetEmployeeInfo(void)
    {
      cout << "Enter the employee's Basic information"<<endl;
      cout << endl;
      GetBasicInfo();
      cout << endl;
      cout << "Enter the employee's Department Information" << endl;
      cout << endl;
      GetDepartmentInfo();
    }
    void PrintEmployeeInfo(void)
    {
      cout << endl;
      cout << "*******************************************"<<endl;
      cout << endl;
      cout << "Basic information" << endl;
      cout << endl;
      cout << "Name : " << name << endl;
      cout << "Age : " << age << endl;
      cout << "Gender : " << gender << endl;
      cout << endl;
      cout << "Department Information"<<endl;
      cout << endl;
      cout << "Department Name : " << depname << endl;
      cout << "Employee id : " << id <<endl;
      cout << endl;
      cout << "*******************************************"<<endl;
    }
};

int main() {
  employee emp;
  emp.GetEmployeeInfo();
  emp.PrintEmployeeInfo();
}

//try the code at : https://repl.it/@Aravind1444/employeeinfocpp#main.cpp
