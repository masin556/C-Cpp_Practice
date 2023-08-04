//정수 한계값을 초과
#include <iostream>
#include <climits>		// INT_MAX가 int 형의 최대값으로 정의되어있다.

#define ZERO 0;			//값 0으로 대체될 기호 상수 ZERO 를 정의

using namespace std;

int main()
{
	short Dohee = SHRT_MAX;			// 변수를 최대값으로 초기화
	unsigned short Insuk = Dohee;  // Dohee 가 정의 되어 있으므로 맞다?

	cout << "도희의 계좌에는 " << Dohee << "원이 들어있고, ";
	cout << "인숙의 계좌에도 " << Insuk << "원이 들어있다. " << endl;
	cout << "각각의 계좌에 1원씩 입금한다. " << endl << "이제 ";

	Dohee = Dohee + 1;  // Dohee += 1; or ++Dohee? 
	Insuk = Insuk + 1; 
	cout << "도희의 잔고는 " << Dohee << "원이 되었고,"; 
	cout << "인숙의 잔고는 " << Insuk << "원이 되었다, " << endl;

	cout << "도희 대출?" << endl;
	Dohee = ZERO;
	Insuk = ZERO;

	cout << "도희의 계좌에는 " << Dohee << "원이 되었고,"; 
	cout << "인숙의 계좌에도 " << Insuk << "원이 되었다, " << endl;
	cout << "각각 계좌에 1원씩 인출" << endl;

	Dohee = Dohee - 1; // Dohee -= 1;
	Insuk = Insuk - 1;
	cout << "도희의 잔고는 " << Dohee << "원이 되었고,";
	cout << "인숙의 잔고는 " << Insuk << "원이 되었다, " << endl;
	cout << "인숙 복권당첨?" << endl;

	return 0;
}

#pragma region 설명
/*
1. short형 변수 (Dohee)와 unsigned short형 변수(Insuk)를 short형 최대값인 32.767로 설정 
2. 각 변수에 1을 더한다. 이 경우 insuk에게 문제는 없다.(32.767에 1을 더해도 unsigned short형의 최대값인 65.535보다 작기때문)
3. short형은 32.767에서 - 부호가 붙은 것으로 넘어가 버린다. (즉 비트로 볼때 0111 1111 1111 1111 의 2바이트형 비트데이터가 1이 더해지면 1000 0000 0000 0000 이 되어 -32.768이 된다. 
4. Dohee 와 Insuk을 0으로 설정한 후 Dohee에서 1을 빼는 것은 문제가 발생하지 않지만 unsigned short는 1을 빼면 0에서 65.535로 갑자기 넘어간다. (즉 unsigned 의 값의 표현범위가 늘어남으로 0000 0000 0000 0000 1111 1111 1111 1111 이된다) 
5. 정수의 오버플로 현상이다.

표현 한계값을 벗어날 때 (오버플로, 언더플로가 발생할 때 ) - 부호가 없는 (unsigned)정수형의 경우 항상 이와 같이 동작한다. 부호있는 (signed)정수형의 경우에는 이와 같이 동작한다고 보장할 수 없다. 
대부분 C++에서는 이와같이 동작한다. 


*/

#pragma endregion

