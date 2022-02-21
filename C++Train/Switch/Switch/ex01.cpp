// switch제어문 if 문으로 대체가능 if보다 간단한 형태 
#include <stdio.h>

int main() {
	int choice;

	printf("새 게임 : 1\n");
	printf("불러오기  : 2\n");
	printf("설정 : 3\n");
	printf("크레딧 : 4\n");

	scanf("%d", &choice);

	switch (choice) { //choice 값에 따라서 
	case 1: 
		printf("새 게임\n");
		break;

	case 2:
		printf("불러오기\n");
		break;
		
	case 3:
		printf("설정\n");
		break;

	case 4:
		printf("크레딧\n");
		break;

	default:
		printf("잘못 입력하였습니다.\n");
		break;
	}

	//C언어 문법에 switch문법이 좀 특이하다 
	/*switch문 중괄호 밖에 먼저 나가서 밑에 printf(출력)할게 있다면 안에 break가 있을시 중괄호 밖으로 나가서 출력을 하게되겠지만 
	내부에 case안  break가 없으면 1번을 눌렀을때 출력하고 그다음 case2로 넘어가게된다. 2가 아닌데 2번 명령어가 실행되는 것 break를 잘 걸어줘야한다. 
	switch문에서 else는 default로 처리한다. */

	/*goto라는 문도 있는데 사용 안하는 편이 좋다.
	위에 makeChoice: 이런형식으로 만들고 아래에 goto makeChoice; 하게되면 다시 makechoice가 있던 곳으로 간다
	처음부터 다시 출력하게 된다. 정상적으로 입력하면 break부분에서 걸림
	이게 새로운 새롭게 출력 하게될 것이 추가 되면 코드가 난장판이 되어서 안된다.
	그래서 스파게티 된다고 해서 사용을 안한다. 
	*/
}