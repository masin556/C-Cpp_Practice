#include <stdio.h>

int main() {
	int a, b, c;

	scanf("%d%d%d", &a, &b, &c);

	if (a > b) {
		if (a > c) printf("%d\n", a);
		else printf("%d\n", c);	
	}
	else if (b > c) printf("%d\n", b);
	else printf("%d\n", c);
}

//중괄호를 줄이고 else if문을 사용할 수 도 있다. 
//코드가 짧아 질수록 이해하는데 오래걸린다. 
//경우에 따라서 저렇게 띄어쓰기 없고 중괄호 없이 쓸 수 있다. 
//되도록 중괄호 안에 쓰자