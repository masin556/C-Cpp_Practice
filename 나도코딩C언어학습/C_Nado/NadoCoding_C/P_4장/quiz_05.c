/*카페에 있는 키오스크 프로그램의 일부 실행결과를 올바르게*/
#include <stdio.h>

enum Cafe
{
	bread = 1,
	coffee = 2,
	cake = 3,
};

int main()
{
	int choices[4] = { 0 }; // 각 메뉴 항목의 주문 수량 저장 배열(인덱스 1부터)
	
	while (1)
	{
		printf("메뉴를 선택하세요\n");
		printf("1 : bread, 2 : coffee, 3 : cake, 0 : 주문완료\n");

		int num; //선택 변수선언
		scanf_s("%d", &num);


		if (num >= 1 && num <= 3) //유효메뉴인지
		{
			printf("주문 수량을 입력하시오 : \n");
			int quantity;
			scanf_s("%d", &quantity);

			if (quantity > 0)
			{
				choices[num] += quantity; //선택 메뉴에 수량을더함 
			}
		}
		else if (num == 0)
		{
			break; //주문 완료 선택시 루프 종료
		}
		else
		{
			printf("유효하지 않은 메뉴 번호입니다.\n");
		}
	}

	//제품 파악
	printf("주문하신 메뉴는 : 빵 %d개, 커피 %d개, 케잌 %d개\n", choices[1], choices[2], choices[3]);


	if (choices[1] > 0)
	{
		printf("빵은 조리시간이 5분 이상 걸릴 수 있습니다.\n");
	}

	if (choices[2] > 0)
	{
		printf("매장 안에서는 일회용 컵을 사용할 수 없습니다\n");
	}

	if (choices[3] > 0)
	{
		printf("케익은 맛있습니다\n");
	}

	printf("주문이 완료됐습니다\n");

	return 0;

}
