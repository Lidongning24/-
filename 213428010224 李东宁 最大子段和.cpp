#include<stdlib.h>
#include<iostream>

using namespace std;

int main()
{
	int a[100];
	int i, j = 0, k = 0, n = 0, m = 0, max = 0, now = 0;
	cout << "输入整数数量！" << endl;
	cin >> n;
	cout << "输入所有数字！" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	i = 0;
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < n + 1 - i; j++)
		{
			now = 0;
			for (k = j, m = 0; m < i; m++, k++)
			{
				now = now + a[k];
			}
			if (max < now)
				max = now;
		}
	}
	cout << "最大子段和为：" << endl << max << endl;
	system("pause");
	return 0;
}