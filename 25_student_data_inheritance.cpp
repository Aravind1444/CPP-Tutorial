#include <iostream>
using namespace std;

class student
{
  private:
    char name[30];
    int age;
    char gender;
  public:
    void getdata(void)
    {
      cout << "Enter the basic information of the student : " <<endl;
      cout << "Name : ";
      cin >> name;
      cout << "Age: ";
      cin >> age;
      cout << "Gender : ";
      cin >> gender;
    }
    void printdata(void)
    {
      cout << endl;
      cout<< "Student Data" <<endl;
      cout << endl;
      cout << "Name : " << name << ", Age : " << age << ", Gender : " << gender <<endl;
    }
};

class result: public student{
  private:
    int totalMarks;
    char grade;
  public:
    void getResult(void)
    {
      cout << "Enter the student's result information : "<<endl;
      cout<< "Total Marks : ";
      cin >> totalMarks;
      cout << "Grade : ";
      cin >> grade;
    }
    void printResult(void)
    {
      cout << "Total Marks : " << totalMarks << ", Grade : " <<grade << endl;
    }
};

int main() {
  result std;

  std.getdata();
  std.getResult();

  std.printdata();
  std.printResult();

  return 0;
  
}

try the code at : https://repl.it/@Aravind1444/inheritancestudentdataincpp
