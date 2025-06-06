#include <iostream>
#include <cmath>
#define M_PI 3.14159265358979323846
using namespace std;

// 抽象クラス
class Shape {
public:
    virtual double size() const = 0;  // 面積を求める
    virtual void draw() const = 0;    // 面積を表示する
    virtual ~Shape() = default;
};

// 矩形クラス
class Rectangle : public Shape {
private:
    double width, height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double size() const override {
		return width * height;// 面積を計算
    }

    void draw() const override {
		cout << "Rectangle area: " << size() << endl;// 面積を表示
    }
};

// 円クラス
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double size() const override {
		return M_PI * radius * radius;// 面積を計算 (πr^2)
    }

    void draw() const override {
		cout << "Circle area: " << size() << endl; // 面積を表示
    }
};

// メイン関数
int main() {
    Shape* s1 = new Rectangle(5.0, 3.0);
    Shape* s2 = new Circle(2.0);

    s1->draw();  // Rectangle area: 15
    s2->draw();  // Circle area: 12.5664...
	
	

    delete s1;
    delete s2;

    return 0;
}
