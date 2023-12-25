#include <iostream>

// 추상 클래스 정의
class Shape {
  public:
    // 순수 가상 함수, 하위 클래스에서 반드시 구현되어야 함
    virtual void Draw() const = 0;

    // 일반 멤버 함수
    void PrintInfo() const { std::cout << "This is a shape." << std::endl; }

    // 가상 소멸자
    virtual ~Shape() { std::cout << "Shape destructor." << std::endl; }
};

// 추상 클래스를 상속받는 구체 클래스
class Circle : public Shape {
  public:
    // 추상 클래스의 순수 가상 함수를 구현
    void Draw() const override
    {
        std::cout << "Drawing a circle." << std::endl;
    }

    // Circle 클래스의 추가적인 멤버 함수
    void PrintRadius() const { std::cout << "Radius: 5 units." << std::endl; }

    // Circle 클래스의 소멸자
    ~Circle() { std::cout << "Circle destructor." << std::endl; }
};

// 추상 클래스를 상속받는 다른 구체 클래스
class Square : public Shape {
  public:
    // 추상 클래스의 순수 가상 함수를 구현
    void Draw() const override
    {
        std::cout << "Drawing a square." << std::endl;
    }

    // Square 클래스의 추가적인 멤버 함수
    void PrintSideLength() const
    {
        std::cout << "Side length: 4 units." << std::endl;
    }

    // Square 클래스의 소멸자
    ~Square() { std::cout << "Square destructor." << std::endl; }
};

int main()
{
    // 추상 클래스 포인터를 사용하여 구체 클래스의 객체 다루기
    Shape *shape1 = new Circle();
    Shape *shape2 = new Square();

    // 다형성을 이용하여 각 도형 그리기
    shape1->Draw();
    shape2->Draw();

    // 추가된 멤버 함수도 호출 가능
    dynamic_cast<Circle *>(shape1)->PrintRadius();
    dynamic_cast<Square *>(shape2)->PrintSideLength();

    // 추상 클래스 포인터로도 일반 멤버 함수 호출 가능
    shape1->PrintInfo();
    shape2->PrintInfo();

    // 동적 할당한 객체들 소멸
    delete shape1;
    delete shape2;

    return 0;
}
