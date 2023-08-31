#include <stdio.h>
/*경찰관이 물어봐야 할 것 
1. 이름
2. 나이
3. 몸무게
4. 키
5. 범죄명
*/

int main(void)
{
	//name
	char name[256];
	printf("자네 이름이 뭔가 : ");
	scanf_s("%s", name, sizeof(name));

	//age
	int age;
	printf("나이는? : ");
	scanf_s("%d", &age);

	//weight
	float weight;
	printf("몸무게는 얼마나 되지? : ");
	scanf_s("%f", &weight);

	//height
	double height;
	printf("키는 어떻게 되지? : ");
	scanf_s("%lf", &height);

	//criminal name
	char what[256];
	printf("너 죄목이 뭐야! : ");
	scanf_s("%s", what, sizeof(what));

	printf(" \n ");
	//범죄명 정리
	printf("=== 범죄자 정보 ====\n");
	printf("%s\n", name);
	printf("%d\n", age);
	printf("%.2f\n", weight);
	printf("%.2lf\n", height);
	printf("%s\n", what);

	return 0;
}