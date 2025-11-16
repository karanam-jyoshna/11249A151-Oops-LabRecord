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
};


int Student::studentCount = 0;

int main() {
    Student s1(101);
    s1.display();
   
    Student s2(102);
    s2.display();
  
    Student s3(103);
    s3.display();
  
    cout << "Total number of students created = " << Student::studentCount << endl;

    return 0;
}
