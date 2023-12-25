#include <iostream>

// 도형을 나타내는 추상 클래스 Shape
class Shape {
  public:
    // 순수 가상 함수로 GetArea 선언
    virtual double GetArea() const = 0;

    // 순수 가상 함수로 Resize 선언
    virtual void Resize(double factor) = 0;

    // 가상 소멸자
    virtual ~Shape() {}
};

// 사각형을 나타내는 클래스 Rectangle, Shape를 상속
class Rectangle : public Shape {
  private:
    double width;
    double height;

  public:
    // 생성자
    Rectangle(double w, double h) : width(w), height(h) {}

    // GetArea 함수를 구현
    double GetArea() const override { return width * height; }

    // Resize 함수를 구현
    void Resize(double factor) override
    {
        width *= factor;
        height *= factor;
    }
};

// 원을 나타내는 클래스 Circle, Shape를 상속
class Circle : public Shape {
  private:
    double radius;

  public:
    // 생성자
    Circle(double r) : radius(r) {}

    // GetArea 함수를 구현
    double GetArea() const override
    {
        return 3.141592653589793 * radius * radius;
    }

    // Resize 함수를 구현
    void Resize(double factor) override { radius *= factor; }
};

int main()
{
    // Shape 포인터 배열을 사용하여 다형성 활용
    Shape *shapes[] = {new Rectangle(3, 4), new Circle(2)};

    for (Shape *shape : shapes) {
        // 다형성을 통해 GetArea 호출
        std::cout << "Area: " << shape->GetArea() << std::endl;

        // 다형성을 통해 Resize 호출
        shape->Resize(1.5);
        std::cout << "Resized Area: " << shape->GetArea() << std::endl;

        delete shape; // 동적 할당한 객체 소멸
    }

    return 0;
}
