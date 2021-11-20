#include <stdio.h>
#include <string.h>

//字符串就是由双引号引起来的一串字符
int main()
{
	"hello";
	"123fa";
	//字符数组-数组：一组相同类型的元素
	//字符串的末尾隐藏了一个\0，是字符串的结束标志
	//char arr[] = "hello";
	
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/

	//求字符串长度用函数strlen，需引入头文件<string.h>
	int len = strlen("abc");
	//printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	return 0;
}