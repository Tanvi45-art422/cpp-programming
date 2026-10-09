#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0;
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

    Shape *ptr = &R;

    ptr->area();

    return 0;
}