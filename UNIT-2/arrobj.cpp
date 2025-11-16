#include <iostream>
using namespace std;

class Employee {
   
    int empId;
    float salary;

public:
   void getData(){
    cout<<"enter employee id & salary:";
    cin>>empid>>salary;
    }

   
    void displayData() {
        cout << "Employee ID: " << empId
             << ", Salary: $" << salary << endl;
    }
};

int main() {

    Employee e[2];
      cout<<"enter details of 2 employees :"<<endl;
      for(int i = 0; i<2; i++){
        e[i].getData();
      }
       cout << "Employee Details:" << endl;
        for(int i = 0; i<2; i++){
             e[i].displayData();
    }

    return 0;
}
