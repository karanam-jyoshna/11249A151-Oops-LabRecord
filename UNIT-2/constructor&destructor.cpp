#include <iostream>
using namespace std;

class Demo {
public:
    int x;

    Demo() {
        x = 0;
        cout << "Default Constructor Called. x = " << x << endl;
    }

    Demo(int a) {
        x = a;
        cout << "Parameterized Constructor Called. x = " << x << endl;
    }

    Demo(const Demo &d) {
        x = obj.x;
        cout << "Copy Constructor Called. x = " << x << endl;
    }


    ~Demo() {
        cout << "Destructor Called for object with x = " << x << endl;
    }

};

int main() {

    Demo d1;
    d1.display();


    Demo d2(50);
    d2.display();

   
    Demo d3 = d2;
    d3.display();

    return 0;
}
