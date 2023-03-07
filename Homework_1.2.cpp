#include <iostream>

class Complex {
private:
    double real;
    double imag;

public:

    Complex(double r = 0.0, double i = 0.0) {
        real = r;
        imag = i;
    }




    void set_real(double r) {
        real = r;
    }


    void set_imag(double i) {
        imag = i;
    }

    double get_real(){
        return real;
    }


    double get_imag(){
        return imag;
    }

    Complex add(const Complex& a) {
        double r = real + a.real;
        double i = imag + a.imag;
        return Complex(r, i);
    }


    Complex add(double r)  {
        double i = imag;
        return Complex(real + r, i);
    }

  
    void print()  {
        std::cout << real;
        if (imag >= 0.0) {
            std::cout << "+";
        }
        std::cout << imag << "i" << std::endl;
    }
};

int main() {
    Complex a(1.0, -2.0);
    Complex b(3.14);

    b.set_imag(-5);

    Complex c = a.add(b);

    c.print();

    return 0;
}
