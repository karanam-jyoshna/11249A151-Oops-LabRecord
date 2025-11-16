#include <iostream>
using namespace std;

class Student {
public:
    int rollNo;                 
    static int studentCount;      

   
    Student(int r) {
        rollNo = r;
        studentCount++;         
        cout << "Student Created. Roll No = " << rollNo << endl;
    }

    
    void display() {
        cout << "Roll No = " << rollNo << endl;
        cout << "Total Students = " << studentCount << endl;
    }

   
    static void showStudentCount() {
        cout << "Total Students (accessed via static function) = " << studentCount << endl;
    }
};

int Student::studentCount = 0;

int main() {
    Student s1(101);
    Student s2(102);
    Student s3(103);


    s1.display();
    s2.display();
    s3.display();
  
    Student::showStudentCount();

    return 0;
}
