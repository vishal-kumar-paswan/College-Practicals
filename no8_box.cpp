#include <iostream>
#include <string>
using namespace std;
class Box {
    private:
        int length, breadth, height, result;
    public:
        void input (void); //to input length, breadth and height
        int surfaceArea (void); //to calculate surface area
        int volume (void); //to calculate volume
        int operator-- (void); //overloaded -- operator
        int operator++ (void); //overloaded ++ operator
        friend string operator==(Box &obj1, Box &obj2); //friend funtion to compare two shapes
        int check(void); //to check whether it is cube or cuboid
        void output(Box, Box); //to print the details
};

void Box::input(void) {
    cout << "Enter the length, breadth and height: ";
    cin >> length >> breadth >> height;
}

int Box::surfaceArea(void) {
    int checkShape = check();
    if (checkShape==1)
        return (6 * length * length);
        else
            return (2 * (length * breadth + breadth * height + length * height));
}

int Box::volume(void) {
    return length * breadth * height;
}

int Box::operator-- () {
    result = surfaceArea();
    result--;
    return result;
}

int Box::operator++ () {
    result = volume();
    result++;
    return result;
}

string operator== (Box &obj1, Box &obj2) {
            return (obj1.length == obj2.length && obj1.breadth == obj2.breadth && obj1.height == obj2.height ? "Yes" : "No");
}
int Box::check(void) {
    return (length == breadth && length == height ? 1 : 2);
} 

void Box::output (Box obj1, Box obj2) {
    cout << "Surface Area: " << surfaceArea() << " Sq. Cm.\n";
    cout << "Volume " << volume() << " Cubic Cm.\n";
    cout << "Decremented Surface Area: " << --obj1<<" Sq. Cm.\n";
    cout << "Incremented Volume: " << ++obj1<<" Cubic Cm.\n";
    cout << "Are the two shapes equal?\n " << (obj1 == obj2) << "\n";
    cout << (check() == 1 ? "It is a cube!" : "It is a cuboid!");
}

int main() {
    Box obj1, obj2;
    obj1.input();
    cout << "For the second cube/cuboid...\n";
    obj2.input();
    obj1.output(obj1, obj2); //passing the same object obj1 as argument to output()
    return 0;
}