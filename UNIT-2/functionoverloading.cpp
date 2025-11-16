#include <iostream>
using namespace std;

class Math {
public:

    
    int add(int a, int b) {
        return a + b;
    }

    
    int add(int a, int b, int c) {
        return a + b + c;
    }

    
    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Math m;

    cout << "Addition of 2 integers : " << m.add(5,10) << endl;
    cout << "Addition of 3 integers : " << m.add(1,2,3) << endl;
    cout << "Addition of 2 doubles : " << m.add(2.5,3.7) << endl;

    return 0;
}
