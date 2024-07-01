#include <iostream>

using namespace std;

int main()
{
	// 행의 갯수 지정
    int rows = 3;
	// 행의 포인터 배열을 생성
    int **JaggedArray = new int *[rows];

	// 각 행에 대해 서로 다른 크기의 배열을 할당
    JaggedArray[0] = new int[2]; // 첫 번째 행 : 2개의 요소
    JaggedArray[1] = new int[3]; // 두 번째 행 : 3개의 요소
    JaggedArray[2] = new int[4]; // 세 번째 행 : 4개의 요소

    // 배열에 값 할당 예
    /*
    jaggedArray[0][0] = 1; jaggedArray[0][1] = 2;
    jaggedArray[1][0] = 3; jaggedArray[1][1] = 4; jaggedArray[1][2] = 5;
    jaggedArray[2][0] = 6; jaggedArray[2][1] = 7; jaggedArray[2][2] = 8; jaggedArray[2][3] = 9;
    */

    // 배열 출력
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < (i + 2); ++j) { // 각 행의 길이에 맞게
            std::cout << JaggedArray[i][j] << " ";
        }
        std::cout << std::endl;
    }

        // 동적 메모리 해제
    for (int i = 0; i < rows; ++i) {
        delete[] JaggedArray[i];
    }
    delete[] JaggedArray;

    return 0;
}