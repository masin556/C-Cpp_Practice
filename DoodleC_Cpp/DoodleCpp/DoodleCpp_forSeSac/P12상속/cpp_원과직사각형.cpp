#include <iostream>
using namespace std;

const double PI = 3.141592653589793; // ������ ���� ����� ����


class Shape {
  public:
    virtual ~Shape() {}

    virtual double GetArea() const = 0;     // ���� ���� �Լ�
    virtual void Resize(double factor) = 0; // ���� ���� �Լ�
};

// ��
class Circle : public Shape {
  public:
    Circle(double r) : r(r) {}

    double GetArea() const // ���ٶ��̵�(����)
    {
        return r * r * PI; // ���� ���� = ������ * ������ *������
    }

    void Resize(double factor) // ���ٶ��̵�(����)- �� ���� �����Լ��� ����
    {
        r *= factor; // �������� factor�� ��ŭ Ȯ�� /���
    }

  private:
    double r;
};

// ���簢��
class Rectangle : public Shape {
  public:
    Rectangle(double a, double b) : a(a), b(b) {}

    double GetArea() const
    {
        return a * b; // ���簢���� ���� = ���� * ����
    }

    void Resize(double factor)
    {
        a *= factor; // ����, ���θ� ���� factor�� ��ŭ Ȯ�� /���
        b *= factor;
    }

  private:
    double a, b;
};

int main()
{
    // shape�� ����Ű�� ������ �迭�� ���� �� ������ ������ �迭�� �Ѳ����� ����
    // �� �ִ�.
    Shape *shapes[] = {new Circle(1), new Rectangle(1, 2)};

    for (Shape *s : shapes) {
        s->Resize(2); // �� ������ 2�辿 Ȯ���Ѵ�
    }

    for (Shape *s : shapes) {
        cout << s->GetArea() << endl; // �� ������ ���̸� ����Ѵ�.
    }

    for (Shape *s : shapes) {
        delete s;
    }
}