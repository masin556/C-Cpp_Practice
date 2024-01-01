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
    a.display(); // 출력: Real: 0, Imaginary: 0
    b.display(); // 출력: Real: 0, Imaginary: 0

    c = a + b;
    c.display(); // 출력: Real: 0, Imaginary: 0 (단순히 더한 것이므로 값은
                 // 변하지 않음)

    return 0;
}