#include <iostream>
using namespace std;

const double PI = 3.141592653589793; // 원주율 값을 상수로 저장


class Shape {
  public:
    virtual ~Shape() {}

    virtual double GetArea() const = 0;     // 순수 가상 함수
    virtual void Resize(double factor) = 0; // 순수 가상 함수
};

// 원
class Circle : public Shape {
  public:
    Circle(double r) : r(r) {}

    double GetArea() const // 오바라이딩(구현)
    {
        return r * r * PI; // 원의 넓이 = 반지름 * 반지름 *원주율
    }

    void Resize(double factor) // 오바라이딩(구현)- 위 순수 가상함수에 대한
    {
        r *= factor; // 반지름을 factor배 만큼 확대 /축소
    }

  private:
    double r;
};

// 직사각형
class Rectangle : public Shape {
  public:
    Rectangle(double a, double b) : a(a), b(b) {}

    double GetArea() const
    {
        return a * b; // 직사각형의 넓이 = 가로 * 세로
    }

    void Resize(double factor)
    {
        a *= factor; // 가로, 세로를 각각 factor배 만큼 확대 /축소
        b *= factor;
    }

  private:
    double a, b;
};

int main()
{
    // shape를 가리키는 포인터 배열을 통해 두 종류의 도형을 배열에 한꺼번에 담을
    // 수 있다.
    Shape *shapes[] = {new Circle(1), new Rectangle(1, 2)};

    for (Shape *s : shapes) {
        s->Resize(2); // 각 도형을 2배씩 확대한다
    }

    for (Shape *s : shapes) {
        cout << s->GetArea() << endl; // 각 도형의 넓이를 출력한다.
    }

    for (Shape *s : shapes) {
        delete s;
    }
}