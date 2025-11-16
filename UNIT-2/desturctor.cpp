#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    Demo(int a) {
        x = a;
        cout << "Parameterized Constructor Called. x = " << x << endl;
    }

    
    ~Demo() {
        cout << "Destructor Called for object with x = " << x << endl;
    }
 
};

int main() {
    Demo d1(5)    
    Demo d2(10);  
    Demo d3(15) 
    cout<<"objects are going out of space ...."<<endl;
   
    return 0; 
}
