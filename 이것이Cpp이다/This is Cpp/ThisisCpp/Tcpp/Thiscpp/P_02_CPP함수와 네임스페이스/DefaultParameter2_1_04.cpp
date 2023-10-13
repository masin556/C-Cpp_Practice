/*디폴트 매개변수를 적극적으로 활용한 예
1. CalcLayout() 함수는 2013년에 철수가 작성했고 같은해에 길도이가 사용(호출)했다고 가정
2. 시간이 흘러 사용자인 영희가 함수 원형을 변경해서 사용하려 했다 가정
- 함수원형이 변경되었고 함수 자체 설계가 달라진 셈이다.
그러나 2013년에 길동이 가 만든 코드는 변경할 수가 없는데, 이는 영희는 상관없겠지만.
2013년에 길동이가 작성한 코드는 함수 원형이 달라져 컴파일 오류가 발생할 것이기 때문이다.
모두를 만족하기 위해 2013년 길동이의 코드를 변경하는 것이 불가피해 보인다. 하지만 철수가 CalcLayout()함수의 원형을
길동이의 코드를 수정할 필요없이 다시 빌드만 하면된다.

*/


#include "pch.h"

#define MYTPYE_A 100
#define MYTPYE_B 200

//2013년에 철수가 만든 함수
//int CalcLayout(int nWidth, int nHeight)
//{
//	return nWidth * nHeight;
//}

//int CalcLayout(int nWidth, int nHeight, int nType) 영희
int CalcLayout(int nWidth, int nHeight, int nType = MYTPYE_A) //수정
{
	return nWidth * nHeight + nType;
}


//2013년 길동이의 코드
//int main()
//{
//	CalcLayout(10, 5);
//
//	return 0;
//}

//2016 영희의 코드
int main()
{
	CalcLayout(10, 5); //길동

	CalcLayout(10, 5, MYTPYE_A);

	return 0;
}