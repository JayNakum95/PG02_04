#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;

// ŪNX
class Shape {
public:
    virtual double size() const = 0;  // ŹĻšßé
    virtual void draw() const = 0;    // ŹĻš\¦·é
    virtual ~Shape() = default;
};

// é`NX
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double size() const override {
		return width * height;// ŹĻšvZ
    }

    void draw() const override {
		cout << "Rectangle area: " << size() << endl;// ŹĻš\¦
    }
};

// ~NX
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double size() const override {
		return M_PI * radius * radius;// ŹĻšvZ (Īr^2)
    }

    void draw() const override {
		cout << "Circle area: " << size() << endl; // ŹĻš\¦
    }
};

// CÖ
int main() {
    Shape* s1 = new Rectangle(5.0, 3.0);
    Shape* s2 = new Circle(2.0);

    s1->draw();  // Rectangle area: 15
    s2->draw();  // Circle area: 12.5664...
	
	

    delete s1;
    delete s2;

    return 0;
}
