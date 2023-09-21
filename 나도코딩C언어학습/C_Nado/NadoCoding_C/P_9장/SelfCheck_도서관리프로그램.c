/*도서 관리 프로그램
1. 다음과 같은 정보가 담긴 구조체를 정의합니다. 각 도서는 번호(ID), 제목, 대출가능여부(0: 대출중, 1:대출 가능)정보를 가진다.
2. 구조체 배열을 이용해 예시와 같이 도서 4권을 정의한다. 각 도서의 번호는 순서대로 1,2,3,4이다.
예시 : C입문편, 파이썬 기본편, 자바 기본편, 파이썬 중급편
3. 전체 도서 정보를 출력
4. 사용자로부터 도서 번호를 입력받는다.
5. 해당 도서가 현재 대출 중이면 반납, 대출 가능한 상태면 대출로 처리
6. 사용자로부터 -1을 입력 받을 때 까지 3~5단계를 반복한다. 사용자가 -1을 입력하면 프로그램 종료
*/

#include <stdio.h>

struct book {
	int id; //번호 
	char* title; //책 이름
	int available; // 도서 현황
};

void print_books(struct book* books);

void print_BookList();

int main(void)
{
	int input; //사용자 입력을 저장할 변수

	struct book books[4] = {
		{ 1, "C입문편", 1 },
		{ 2, "파이썬 기본편", 1},
		{ 3, "자바 기본편", 1},
		{ 4, "파이썬 중급편", 1}
	};

	while (1)
	{
		print_books(books); //전체 도서 출력
		printf("대출/반납할 책 번호를 입력하세요.(종료 : -1) : ");
		scanf_s("%d", &input);

		if (input == -1) {
			printf("프로그램을 종료합니다.\n\n");
			break;
		}
		if (input < 1 || input > 4) {
			printf("잘 못 된 입력입니다.Asshole");
			continue;
		}
		input -= 1;
		if (books[input].available == 0)
		{
			printf("'%s' 반납이 완료됐습니다.\n\n", books[input].title);
			books[input].available = 1;
		}
		else {
			//대출 가능도서
			printf("'%s' 대출이 완료됐습니다.\n\n", books[input].title);
			books[input].available = 0; 
		}

	}
	return 0;
}


//전체 도서 정보 출력, books 배열은 구조체 포인터로 처리
void print_books(struct book* books)
{
	char* available = "대출 가능";
	char* unavailable = "대출 중";

	printf("전체 도서 목록입니다.\n");
	printf("==========================================\n");
	for (int i = 0; i < 4; i++) {
		printf("%d. %-16s ", books[i].id, books[i].title);
		//대출여부 출력
		if (books[i].available)
		{
			printf("[%s]\n", available);
		}
		else
		{
			printf("[%s]\n", unavailable);
		}
	}
	printf("======================================\n");
}

