#include <stdio.h>
// sizeof 
int main() {
	printf("%d %d %d %d\n", sizeof(int), sizeof(char), sizeof(float), sizeof(double)); //���� ����Ʈ�� ����ŭ ��� ��

	int a; char b; float c; double d; //���� 4�� ���� 
	printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d)); // ���� ���� 
	/*int 
		a,
		b,
		c,
		d�̷������� ��뵵 ����*/
}
//��°� : 4 1 4 8 4 1 4 8


//sizeof(x) : x�� ũ�⸦ �˷��ش�. 
// x���� �������� �̸��� ����. (int, float ���)
//������ �̸��� �� �� �ִ�. 
