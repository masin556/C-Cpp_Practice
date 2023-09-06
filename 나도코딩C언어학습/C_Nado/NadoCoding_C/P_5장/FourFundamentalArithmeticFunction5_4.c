/*»çÄ¢¿¬»ê ÇÔ¼ö ¸¸µé±â*/

#include <stdio.h>
void p(int num);
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);



int main()
{
	int num = 2;
	p(num);

	num = add(num, 3); //´õÇÏ±â ÇÔ¼ö È£Ãâ
	p(num);

	num = sub(num, 1); //»©±â
	p(num);

	num = mul(num, 3); //°ö¼À
	p(num);

	num = div(num, 6); //³ª´°¼À
	p(num);

}

void p(int num) {
	printf("numÀº %d ÀÔ´Ï´Ù\n", num);
}

int add(int num1, int num2)
{
	return num1 + num2;
}

int sub(int num1, int num2)
{
	return num1 - num2;
}

int mul(int num1, int num2)
{
	return num1 * num2;
}

int div(int num1, int num2)
{
	return num1 / num2;
}