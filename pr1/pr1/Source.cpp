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
	int t = clock();
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
	cout << "Selection sort (200000 elements): " << ((float)t) / CLOCKS_PER_SEC << " sec" << endl;
	//count
	int c[10];
	int mas1[200001];
	for (i = 0; i<200000; i++)
		mas1[i] = 0 + rand() % 10;
	int t1 = clock();
	for (i = 0; i < 10; i++)
		c[i] = 0;
	for (i = 0; i < 200000; i++) {
		c[mas1[i]] = c[mas1[i]] + 1;
	}
	i = 0;
	for (j = 0; j < 10; j++) {
		while (c[j] != 0) {
			mas1[i] = j;
			c[j]--;
			i++;
		}
	}
	cout << "Count sort (200000 elements): " << ((float)t1) / CLOCKS_PER_SEC << " sec" << endl;
	system("pause");
	return 0;
}