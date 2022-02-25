//break 반복문 break
//continue
// 중첩 for 문 (중요) 

// break : 반복문 한개를 빠져나옴
//숫자입력  -> 숫자 출력
// 1번째 : 7
// 2번째 : 5
//..

#include <stdio.h>

int main() {
	for (int i = 1; ; i++) { //for문 안으로 들어와서 k을 입력 받는다 
		int k; 
		scanf("%d", &k);

		if (k == 0) { //k가 0인지 확인 
			break; //0이라면 중괄호 밖으로 아에 빠져나간다.
		}// 아니라면 break안되고 넘어간다. 

		printf("%d번째  : %d\n", i, k);
	}
}