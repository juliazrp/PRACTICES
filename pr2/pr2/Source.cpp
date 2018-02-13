#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include<ctime>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int mas1[20001], mas2[20000];
	int i, j, k,l = 0, min, c[10];
	string line;
	ifstream in;
	fstream out1,out2;
	out1.open("resultvibor.txt", fstream::out);
	out2.open("resultcount.txt", fstream::out);
	int temp;
	in.open("in.txt", ios_base::in);
	if (!in.is_open())
		cout << "ERROR!" << endl;
	else
	{
		for (i = 0; i <= 20000; i++) {
			getline(in, line);
			temp = stoi(line);
			if (temp>=0)
			mas1[i] = temp;
		}
		for (i = 0; i < 20000; i++) {
			getline(in, line);
			if (temp >= 0)
			temp = stoi(line);
			mas2[i] = temp;
		}
	}
	int t = clock();
	for (j = 0; j < 20000; j++)
	{
		k = i;
		min = mas1[i];
		for (i = j + 1; i<20000; i++)
		{
			if (mas1[i] < min)
			{
				min = mas1[i];
				k = i;
			}
		}
		mas1[k] = mas1[j];
		mas1[j] = min;
		out1 << mas1[j] << endl;
	}
	cout << "Selection sort (20000 elements): " << ((float)t) / CLOCKS_PER_SEC << " sec" << endl;
	int t1 = clock();
	for (i = 0; i < 10; i++)
		c[i] = 0;
	for (i = 0; i < 20000; i++) {
		c[mas2[i]] = c[mas2[i]] + 1;
	}
	i = 0;
	for (j = 0; j < 10; j++) {
		while (c[j] != 0) {
			mas2[i] = j;
			out2 << mas2[j] << endl;
			c[j]--;
			i++;
		}
	}
	cout << "Count sort (200000 elements): " << ((float)t1) / CLOCKS_PER_SEC << " sec" << endl;
	system("pause");
	return 0;
}