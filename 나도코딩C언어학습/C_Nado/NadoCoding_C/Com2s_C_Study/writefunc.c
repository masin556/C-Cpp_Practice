#pragma region ����
/*write()�Լ� ���

open()�Լ��� ���⸦ �� ���Ͽ� ���⸦ �Ѵ�. 
- fcntl.h�� ����
size_t open("���ϸ�", ����)
����
 �б� ���� - O_RDONLY
 ���� ���� - O_WRONLY
 �б� ���� ���� O_RDWR

read()
ssize_t read(int fd, void *bug, size_t size);
- ������ �д� �Լ�
- fd open �Լ� �޾ƿ� ���ϵ�ũ���� ������ ����
size ũ�� ��ŭ�� �����͸� ���� �� *buf ���� ������ �Ҵ�
- �б� ������ �о�� �������� ũ�⸦ ��ȯ, ���н� -1��ȯ


write()
ssize_t write(int fd, void *buf, size_t size);
- ���Ͽ� �����͸� ���

write(���ϵ�ũ����ǥ�� ��� ����, ����ϰ����ϴ� ���� �޸� ��ġ ����Ŵ, Ư�� �����Ͱ� ����Ű�� ���ڿ� ǥ�� ���)

close()
int close(int fd);
open()���� ����� ������ �ݴ� �Լ�
���� ���������� �ݴ´ٸ� 0�� ��ȯ ���н� -1

write(), read(), close()
- unistd.h�� ���ǵ� //�����쿡�� io.h

���� : ssize_t write (int fd, const void *buf, size_t n)

*/
#pragma endregion


#include <stdio.h>
#include <io.h>

int main()
{
	//�⺻ write�Լ� ���
	char str[] = "Hello";

	_write(1, str, sizeof(str));
	//POSIX ǥ�ؿ� ���� write�� ���� ���� �������� ����
}


