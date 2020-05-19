#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
    private:
        double a, b, c, result;

    public:
        void input(Triangle, Triangle);
        void area(double);
        void area(double, double);
        void area(double, double, double);
        void operator=(Triangle);
        void operator==(Triangle);
        void output(void);
};

void Triangle::input(Triangle obj1, Triangle obj2) {
    int choice;
    cout << "--- TRIANGLE CALCULATIONS ---" << endl;
    cout << "1. Equilateral Triangle" << endl;
    cout << "2. Isosceles Traiangle" << endl;
    cout << "3. Scalene Triangle" << endl;
    cout << "4. Compare Two Triangles" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice..." << endl;
    cout << "->";
    cin >> choice;
    system("cls");
    switch (choice)
    {
        case 1:
            cout << "Enter the side of the triangle: ";
            cin >> a;
            obj1.area(a);
            obj2 = obj1;
            break;
        case 2:
            cout << "Enter the two sides of the triangle: ";
            cin >> a >> b;
            obj1.area(a, b);
            obj2 = obj1;
            break;
        case 3:
            cout << "Enter the three sides of the triangle: ";
            cin >> a >> b >> c;
            obj1.area(a, b, c);
            obj2 = obj1;
            break;
        case 4:
            cout << "Enter the three sides of the first triangle: ";
            cin >> a >> b >> c;
            obj1.area(a, b, c);
            cout << "Enter the three sides of the second triangle: ";
            cin >> a >> b >> c;
            obj2.area(a, b, c);
            obj1 == obj2;
            break;
        case 5:
            exit(0);
        default:
            cout << "Invalid Choice!" << endl;
    }

    cout << "Do you wish to continue?" << endl;
    cout << "Enter Y for Yes and N for No..." << endl;
    cout << "->";
    char ch;
    cin >> ch;
    system("cls");
    if (ch=='Y')
    input(obj1, obj2);
}

void Triangle::area(double a) {
    result = (sqrt(3) / 4) * a * a;
}

void Triangle::area(double a, double b) {
    result = (a * b) / 2;
}

void Triangle::area(double a, double b, double c) {
    double s = a + b + c;
    result = sqrt(s * (s - a) * (s - b) * (s - c));
}

void Triangle::operator=(Triangle obj2) {
    result = obj2.result;
    obj2.output();
}

void Triangle::operator==(Triangle obj2) {
    bool check = (result == obj2.result);
    if (check)
        cout << "Yes, they're equal!" << endl;
        else
            cout << "No, they aren't equal!" << endl;
}

void Triangle::output(void) {
    cout << "Area: " << result << "Cm Sq." << endl;
}

int main() {
    Triangle obj1, obj2;
    obj1.input(obj1, obj2);
    return 0;
}