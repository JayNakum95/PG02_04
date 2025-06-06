#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;

// ���ۃN���X
class Shape {
public:
    virtual double size() const = 0;  // �ʐς����߂�
    virtual void draw() const = 0;    // �ʐς�\������
    virtual ~Shape() = default;
};

// ��`�N���X
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double size() const override {
		return width * height;// �ʐς��v�Z
    }

    void draw() const override {
		cout << "Rectangle area: " << size() << endl;// �ʐς�\��
    }
};

// �~�N���X
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double size() const override {
		return M_PI * radius * radius;// �ʐς��v�Z (��r^2)
    }

    void draw() const override {
		cout << "Circle area: " << size() << endl; // �ʐς�\��
    }
};

// ���C���֐�
int main() {
    Shape* s1 = new Rectangle(5.0, 3.0);
    Shape* s2 = new Circle(2.0);

    s1->draw();  // Rectangle area: 15
    s2->draw();  // Circle area: 12.5664...
	
	

    delete s1;
    delete s2;

    return 0;
}
