/*생성자에 디폴트 매개변수*/

//#include <iostream>
#include "..\help.h"

class Complex 
{
public:
	//c1은 이곳에서 real_과 imag_으로 매개변수 인수값이 없어 0인 디폴트 값으로 초기화
	Complex(double real_ = 0, double imag_ = 0)
	{
		//재정의 된 변수값
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
	Complex c1; // real_, imag_ 에 해당 하는 인수가 없으므로 디폴트 값으로 초기화
	Complex c2 = Complex(2, 3);
	Complex c3(2, 3);


	//SetReal()과 SetImag()에 해당 변수값이 리턴된다.  
	cout << "c1 = " << c1.GetReal() << ", " << c1.GetImag() << endl;
	cout << "c2 = " << c2.GetReal() << ", " << c2.GetImag() << endl;
	cout << "c3 = " << c3.GetReal() << ", " << c3.GetImag() << endl;
}