// char : 1바이트 정수형 (int : 4바이트)
// character(문자) char라는 변수안에는 문자를 저장하는데 특화 되어있다.
// 반각문자만 가능하다 (A B C acb 12376+\;/#%) 
// 해당X (한글 , 한자, 러시아어, 아랍어 등등) 
// Halfwidth (반각문자) / Fullwidth (정각문자?= 못쓰는것)

#include <stdio.h>

int main() {
	//char a = 65;;// 정수형 변수이니까 저장할 수 있다. 

	char a = 67;
	printf("%c\n", 'C'); // 'C' == 67 써도 똑같다  
	// 67이 C를 의미한다. 
}

//ASCII : American Standard Code 표준 (문자 - 숫자 대응 시키는)
