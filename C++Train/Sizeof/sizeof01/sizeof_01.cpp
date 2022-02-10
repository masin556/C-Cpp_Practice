#include <stdio.h>
// sizeof 
int main() {
	printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double)); //각각 바이트의 값만큼 출력 됨

	int a; char b; float c; double d; //변수 4개 선언 
	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d)); // 변수 대입 
	/*int 
		a,
		b,
		c,
		d이런식으로 사용도 가능*/
}
//출력값 : 4 1 4 8 4 1 4 8


//sizeof(x) : x의 크기를 알려준다. 
// x에는 형에대한 이름이 들어간다. (int, float 등등)
//변수의 이름이 들어갈 수 있다. 
