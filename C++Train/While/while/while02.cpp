//무한 반복  Ctlr + C(정지) 안정적이진 않음 
#include<stdio.h>

int main() {
	int i = 1;
	
	while (true) {
		printf("%d", i);
		i++;
	} //1씩 증가 하게됨 
}