#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    
    Complex() {
        real = 0;
        imag = 0;
    }

    
    Complex(int r, int i) {
        real = r;
        imag = i;
    }

    
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;   
    }

  
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main() {
    Complex c1(5, 3),c2(2, 7),c3;
    
   
    c3 = c1.add(c2);

    cout << "Result (c1 + c2): ";
    c3.display();

    return 0;
}
