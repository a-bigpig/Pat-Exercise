/*��Ŀ��

����һ�������� n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��
ÿ������������� 1 ��������������������Ȼ�� n ��ֵ�����ﱣ֤ n С�� 10
?100
?? ��

�����ʽ��
��һ������� n �ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ��� 1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu

�ҵĴ��룺*/

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