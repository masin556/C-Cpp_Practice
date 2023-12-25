#include <iostream>

// ������ ��Ÿ���� �߻� Ŭ���� Shape
class Shape {
  public:
    // ���� ���� �Լ��� GetArea ����
    virtual double GetArea() const = 0;

    // ���� ���� �Լ��� Resize ����
    virtual void Resize(double factor) = 0;

    // ���� �Ҹ���
    virtual ~Shape() {}
};

// �簢���� ��Ÿ���� Ŭ���� Rectangle, Shape�� ���
class Rectangle : public Shape {
  private:
    double width;
    double height;

  public:
    // ������
    Rectangle(double w, double h) : width(w), height(h) {}

    // GetArea �Լ��� ����
    double GetArea() const override { return width * height; }

    // Resize �Լ��� ����
    void Resize(double factor) override
    {
        width *= factor;
        height *= factor;
    }
};

// ���� ��Ÿ���� Ŭ���� Circle, Shape�� ���
class Circle : public Shape {
  private:
    double radius;

  public:
    // ������
    Circle(double r) : radius(r) {}

    // GetArea �Լ��� ����
    double GetArea() const override
    {
        return 3.141592653589793 * radius * radius;
    }

    // Resize �Լ��� ����
    void Resize(double factor) override { radius *= factor; }
};

int main()
{
    // Shape ������ �迭�� ����Ͽ� ������ Ȱ��
    Shape *shapes[] = {new Rectangle(3, 4), new Circle(2)};

    for (Shape *shape : shapes) {
        // �������� ���� GetArea ȣ��
        std::cout << "Area: " << shape->GetArea() << std::endl;

        // �������� ���� Resize ȣ��
        shape->Resize(1.5);
        std::cout << "Resized Area: " << shape->GetArea() << std::endl;

        delete shape; // ���� �Ҵ��� ��ü �Ҹ�
    }

    return 0;
}
