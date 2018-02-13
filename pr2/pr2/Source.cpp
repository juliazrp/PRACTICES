#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int mas1[20000], mas2[20000];
	int i, j, k,l = 0, min;
	string line;
	ifstream in;
	int temp;
	in.open("forpr2.txt", ios_base::in);
	if (!in.is_open())
		cout << "ERROR!" << endl;
	else
	{
		for (i = 0; i < 20000; i++) {
			getline(in, line);
			temp = stoi(line);
			mas1[i] = temp;
		}
	}
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
	}

	system("pause");
	return 0;
}