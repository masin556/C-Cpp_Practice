#include<iostream>

using namespace std;

int main()
{
	int chest = 42;		//10진
	int waist = 0x42;	//16진
	int inseam = 042;	//8진

	cout << "손님 몸매는 한마디로 끝내줍니다!\n";
	cout << "가슴둘레 " << chest << "\n";
	cout << "허리둘레 " << waist << "\n";
	cout << "인심길이 " << inseam << "\n";

	return 0;
}
