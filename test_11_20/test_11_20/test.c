#include <stdio.h>
#include <string.h>

//�ַ���������˫������������һ���ַ�
int main()
{
	"hello";
	"123fa";
	//�ַ�����-���飺һ����ͬ���͵�Ԫ��
	//�ַ�����ĩβ������һ��\0�����ַ����Ľ�����־
	//char arr[] = "hello";
	
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/

	//���ַ��������ú���strlen��������ͷ�ļ�<string.h>
	int len = strlen("abc");
	//printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}