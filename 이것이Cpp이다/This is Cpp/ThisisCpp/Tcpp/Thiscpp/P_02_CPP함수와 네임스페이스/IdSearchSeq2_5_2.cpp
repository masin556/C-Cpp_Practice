/*상위 블록 범위 : 
접근자 코드가 속해 있는 범위에서 식별자 선언을 찾지 못한다면 중첩된 블록 범위의 상위 (혹은 바깥쪽) 으로 검색 범위를 확장 한다.

확장 범위는 최대 함수 몸체 까지로 제한한다. 
함수 몸체를 벗어나면 네임스페이스 범위 혹은 클래스 범위로 확장된다. */

#include"pch.h"

int main()
{
	int nInput = 0; 
	cout << "11 이상의 정수를 입력 하시오 : " << endl;
	cin >> nInput;

	if (nInput > 10)
	{
		cout << nInput << endl;
	}
	else
	{
		cout << "Error" << endl;
	}

	return 0;
}