#pragma region 설명
/*write()함수 사용

open()함수로 열기를 한 파일에 쓰기를 한다. 
- fcntl.h에 정의
size_t open("파일명", 권한)
권한
 읽기 전용 - O_RDONLY
 쓰기 전용 - O_WRONLY
 읽기 쓰기 전용 O_RDWR

read()
ssize_t read(int fd, void *bug, size_t size);
- 파일을 읽는 함수
- fd open 함수 받아온 파일디스크립터 파일을 구분
size 크기 만큼의 데이터를 읽은 후 *buf 저장 공간에 할당
- 읽기 성공시 읽어온 데이터의 크기를 반환, 실패시 -1반환


write()
ssize_t write(int fd, void *buf, size_t size);
- 파일에 데이터를 출력

write(파일디스크립터표준 출력 내용, 출력하고자하는 형태 메모리 위치 가르킴, 특정 포인터가 가르키는 문자열 표준 출력)

close()
int close(int fd);
open()으로 열어둔 파일을 닫는 함수
파일 정상적으로 닫는다면 0을 반환 실패시 -1

write(), read(), close()
- unistd.h에 정의됨 //윈도우에서 io.h

형태 : ssize_t write (int fd, const void *buf, size_t n)

*/
#pragma endregion


#include <stdio.h>
#include <io.h>

int main()
{
	//기본 write함수 출력
	char str[] = "Hello";

	_write(1, str, sizeof(str));
	//POSIX 표준에 따라 write만 쓰는 것을 권장하지 않음
}


