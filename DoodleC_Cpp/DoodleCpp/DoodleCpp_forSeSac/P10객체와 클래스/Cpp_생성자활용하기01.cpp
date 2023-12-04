/*�����ڿ� ����Ʈ �Ű�����*/

//#include <iostream>
#include "..\help.h"

class Complex 
{
public:
	//c1�� �̰����� real_�� imag_���� �Ű����� �μ����� ���� 0�� ����Ʈ ������ �ʱ�ȭ
	Complex(double real_ = 0, double imag_ = 0)
	{
		//������ �� ������
		real = real_;
		imag = imag_;
	}

	double GetReal()
	{
		return real;
	}

	void SetReal(double real_)
	{
		real = real_;
	}

	double GetImag()
	{
		return imag;
	}

	void SetImage(double imag_)
	{
		imag = imag_;
	}

private:
	double real;
	double imag;
};

int main()
{
	Complex c1; // real_, imag_ �� �ش� �ϴ� �μ��� �����Ƿ� ����Ʈ ������ �ʱ�ȭ
	Complex c2 = Complex(2, 3);
	Complex c3(2, 3);


	//SetReal()�� SetImag()�� �ش� �������� ���ϵȴ�.  
	cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag() << endl;
	cout << "c2 = " << c2.GetReal() << ", " << c2.GetImag() << endl;
	cout << "c3 = " << c3.GetReal() << ", " << c3.GetImag() << endl;
}