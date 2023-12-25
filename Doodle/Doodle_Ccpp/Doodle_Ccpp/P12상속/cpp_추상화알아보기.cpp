#include <iostream>

// �߻� Ŭ���� ����
class Shape {
  public:
    // ���� ���� �Լ�, ���� Ŭ�������� �ݵ�� �����Ǿ�� ��
    virtual void Draw() const = 0;

    // �Ϲ� ��� �Լ�
    void PrintInfo() const { std::cout << "This is a shape." << std::endl; }

    // ���� �Ҹ���
    virtual ~Shape() { std::cout << "Shape destructor." << std::endl; }
};

// �߻� Ŭ������ ��ӹ޴� ��ü Ŭ����
class Circle : public Shape {
  public:
    // �߻� Ŭ������ ���� ���� �Լ��� ����
    void Draw() const override
    {
        std::cout << "Drawing a circle." << std::endl;
    }

    // Circle Ŭ������ �߰����� ��� �Լ�
    void PrintRadius() const { std::cout << "Radius: 5 units." << std::endl; }

    // Circle Ŭ������ �Ҹ���
    ~Circle() { std::cout << "Circle destructor." << std::endl; }
};

// �߻� Ŭ������ ��ӹ޴� �ٸ� ��ü Ŭ����
class Square : public Shape {
  public:
    // �߻� Ŭ������ ���� ���� �Լ��� ����
    void Draw() const override
    {
        std::cout << "Drawing a square." << std::endl;
    }

    // Square Ŭ������ �߰����� ��� �Լ�
    void PrintSideLength() const
    {
        std::cout << "Side length: 4 units." << std::endl;
    }

    // Square Ŭ������ �Ҹ���
    ~Square() { std::cout << "Square destructor." << std::endl; }
};

int main()
{
    // �߻� Ŭ���� �����͸� ����Ͽ� ��ü Ŭ������ ��ü �ٷ��
    Shape *shape1 = new Circle();
    Shape *shape2 = new Square();

    // �������� �̿��Ͽ� �� ���� �׸���
    shape1->Draw();
    shape2->Draw();

    // �߰��� ��� �Լ��� ȣ�� ����
    dynamic_cast<Circle *>(shape1)->PrintRadius();
    dynamic_cast<Square *>(shape2)->PrintSideLength();

    // �߻� Ŭ���� �����ͷε� �Ϲ� ��� �Լ� ȣ�� ����
    shape1->PrintInfo();
    shape2->PrintInfo();

    // ���� �Ҵ��� ��ü�� �Ҹ�
    delete shape1;
    delete shape2;

    return 0;
}
