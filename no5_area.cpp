#include <iostream>
#include <math.h>
using namespace std;

class Area {
    private:
        int choice, len, bdth;
        double calc, r, l, b, h;

    public:
        void input(void);
        void area(double);
        void area(int, int);
        void area(double, double);
};

void Area::input(void) {
    cout << "1. Area of circle\n";
    cout << "2. Area of rectangle\n";
    cout << "3. Area of triangle\n";
    cout << "4. Exit\n";
    cout << "Enter your choice...\n=>";
    cin >> choice;
    system("cls");

    switch (choice) {
        case 1:
            cout << "Enter the radius: ";
            cin >> r;
            area(r);
            input();
        case 2:
            cout << "Enter the length and breadth: ";
            cin >> len >> bdth;
            area(len, bdth);
            input();
        case 3:
            cout << "Enter the base and height: ";
            cin >> b >> h;
            area(b, h);
            input();
        case 4:
            exit(0);
        default:
            cout << "Invalid choice!\n";
            input();
    }
}

void Area::area(double rad) {
    cout << "Area of the circle: " << (M_PI  * rad * rad) << " Sq. Cm.\n";
}

void Area::area(int ln, int bd) {
    cout << "Area of the rectangle: " << (ln * bd) << " Sq. Cm.\n";
}

void Area::area(double bs, double ht) {
    cout << "Area of the triangle: " << (0.5 * bs * ht) << " Sq. Cm.\n";
}

int main() {
    Area obj;
    obj.input();
    return 0;
}