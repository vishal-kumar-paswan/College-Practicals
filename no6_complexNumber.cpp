#include <iostream>
using namespace std;

class Complex {
    private:
        int real, img;
    public:
    Complex() {} //default constructor

    Complex(int r, int i) { //parameterised constructor
        real = r;
        img = i;
    }
    Complex operator+ (Complex obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.img = img + obj.img;
        return temp;
    }

    void output(void) {
        cout << "Sum: " << real << " + " << img << "i";
    }
};

int main() {
    Complex obj1, obj2, obj3;
    obj1 = Complex(5, 10);
    obj2 = Complex(10, 5);
    obj3 = obj1 + obj2; // obj.adds(obj)
    obj3.output();
    return 0;
}