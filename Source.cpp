#include <iostream>
#include <string.h>
#pragma warning( disable : 4996 )
using namespace std;

int main()
{
	freopen("Input.txt", "rt", stdin);
	freopen("Output.txt", "w+t", stdout);
	char num[31], table[27] = { "22233344455566677778889999" };
	while (cin >> num)
	{
		for (int i = 0; i < strlen(num); i++)
		{
			if (num[i] == '1' || num[i] == '0' || num[i] == '-')
				cout << num[i];
			else
				cout << table[num[i] - 'A'];
		}
		cout << endl;
	}
	return 0;
}