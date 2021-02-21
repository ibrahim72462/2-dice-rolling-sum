#include<iostream>
using namespace std;
int main()
{
	int roll1, roll2, sum;
	int array[11] = { 0,0,0,0,0,0,0,0,0,0,0};
	for (int i = 0; i < 36000; i++)
	{
		roll1 = (rand() % 6 + 1);
		roll2 = (rand() % 6 + 1);
		int sum = 0;
		sum = roll1 + roll2;
		for (int j = 2; j <= 12; j++)
		{
			if (sum == j)
			{
				array[j - 2]++;
			}
		}
	}
	for (int i = 0; i < 11; i++)
	{
		cout << "the sum was = [" << i + 2 << "], numbers of time [" << array[i] << "]\n";
	}
	return 0;
}