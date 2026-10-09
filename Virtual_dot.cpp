#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of Shape" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() override {
        cout << "Area of Rectangle = 10 * 20 = "
             << 10 * 20 << endl;
    }
};

int main() {
    Rectangle R;

    R.area();

    return 0;
}