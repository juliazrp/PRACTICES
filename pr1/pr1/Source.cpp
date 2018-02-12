#include <iostream>
#include <cmath>
#include<ctime>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{//vibor
	int mas[20001];
	int i, j, k, l = 0, min;
	for (i = 0; i<20000; i++)
		mas[i] = 0 + rand() % 10;
	for (j = 0; j < 20000; j++)
	{
		k = i; min = mas[i];
		for (i = j + 1; i<20000; i++)
		{
			if (mas[i] < min)
			{
				min = mas[i];
				k = i;
			}
		}
		mas[k] = mas[j];
		mas[j] = min;
		//cout << mas[j]<<endl;
	}
	system("pause");
	return 0;
}