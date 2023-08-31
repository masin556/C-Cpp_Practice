/*신발 쇼핑몰 회원가입*/
/*저장되어야할 정보
1. 이름
2. 아이디
3. 나이
4. 생일
5. 신발크기*/
#include <stdio.h>

int main(void)
{
	char name[256];
	char id[256];
	int age;
	char birth[256];
	int footsize;

	printf("회원 이름을 입력해주세요 : ");
	scanf_s("%s", name, sizeof(name));

	printf(" 회원 ID를 설정해주세요 : ");
	scanf_s("%s", id, sizeof(id));

	printf(" 나이를 입력해 주세요 : ");
	scanf_s("%d", &age);

	printf(" 생일을 입력해주세요 : ");
	scanf_s("%s", birth, sizeof(birth));

	printf(" 신발사이즈가 어떻게 되시나요? : ");
	scanf_s("%d", &footsize);

	printf("\n");

	printf("==== 회원 정보 ====\n");
	printf("이름 : %s\n", name);
	printf("ID : %s\n", id);
	printf("나이 : %d\n", age);
	printf("생일 : %s\n", birth);
	printf("신발 사이즈 : %d\n", footsize);

	return 0;
}