#include<iostream>
using namespace std;
int main()
{
	int sum = 0;
	for (int i = 1; i <= 100; i++)
	{
		if (i % 2 == 0)
			sum += i;
	}
	cout << "1부터 100까지의 짝수의 합 : " << sum << endl;
	return 0;
}