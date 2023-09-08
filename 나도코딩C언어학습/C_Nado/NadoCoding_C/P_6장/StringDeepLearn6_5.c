/*문자열 깊게 다루기*/

#include <stdio.h>

int main()
{

#pragma region 문자열배열과널문자
	char c_array[7] = { 'c', 'o', 'd', 'i', 'n', 'g', '\0' };
	printf("%s\n", c_array);

#pragma endregion

	printf("\n\n ------------- \n");

#pragma region 문자열배열과널문자2
	char c_array2[10] = { 'c', 'o', 'd', 'i', 'n', 'g' };

	for (int i = 0; i < sizeof(c_array2); i++)
	{
		printf("%d\n", c_array2[i]); 

	}

#pragma endregion

	printf("\n\n ------------- \n");

#pragma region 문자열입력받기6_5_2
	char name[256];
	printf("이름이 뭐예요? : ");
	scanf_s("%s", name, sizeof(name));
	printf("%s\n", name);
#pragma endregion


	return 0;
}