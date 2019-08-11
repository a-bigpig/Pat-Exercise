/*题目：

读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：
每个测试输入包含 1 个测试用例，即给出自然数 n 的值。这里保证 n 小于 10的100次方

输出格式：
在一行内输出 n 的各位数字之和的每一位，拼音数字间有 1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu

我的代码：*/

#include <iostream>
#include <stdio.h>
using namespace std;
void putout(int n);

int main()
{
	int sum = 0, i = 0, c[100];
	char b[101];
	gets_s(b);
	for (i = 0;b[i] != '\0';i++)
		sum = sum + b[i] - 48;
	int j = 0;
	while (sum != 0)
	{
		c[j] = sum % 10;
		sum = sum / 10;
		j++;
	}
	for (i = j - 1;i > 0;i--)
	{
		putout(c[i]);
		cout << " ";
	}
	putout(c[0]);
	return 0;
}

void putout(int n)
{
	switch (n)
	{
	case 0:cout << "ling";break;
	case 1:cout << "yi";break;
	case 2:cout << "er";break;
	case 3:cout << "san";break;
	case 4:cout << "si";break;
	case 5:cout << "wu";break;
	case 6:cout << "liu";break;
	case 7:cout << "qi";break;
	case 8:cout << "ba";break;
	case 9:cout << "jiu";break;
	}
}
