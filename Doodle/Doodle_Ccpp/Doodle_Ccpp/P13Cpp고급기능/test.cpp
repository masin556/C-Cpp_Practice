#include <iostream>

class Complex {
  public:
    Complex() : real(0), imag(0) {}

    Complex operator+(const Complex &other)
    {
        Complex result;
        result.real = this->real + other.real;
        result.imag = this->imag + other.imag;
        return result;
    }

    void display()
    {
        std::cout << "Real: " << real << ", Imaginary: " << imag << std::endl;
    }

  private:
    double real;
    double imag;
};

int main()
{
    Complex a, b, c;
    a.display(); // ���: Real: 0, Imaginary: 0
    b.display(); // ���: Real: 0, Imaginary: 0

    c = a + b;
    c.display(); // ���: Real: 0, Imaginary: 0 (�ܼ��� ���� ���̹Ƿ� ����
                 // ������ ����)

    return 0;
}