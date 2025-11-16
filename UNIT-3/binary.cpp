#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;

public:
   
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }


   
    void display() {
       
            cout << real <<"+"<<imag<<"i"<<endl;
    }

    
    Complex operator+(const Complex &c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, c3;
    c3 = c1 + c2;

    cout << "\nFirst Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Sum of Complex Numbers: ";
    c3.display();

    return 0;
}
