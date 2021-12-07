#include<iostream>
#include<string>
using namespace std;
int main() {
	setlocale(LC_ALL, "ru");

	string str, res, s;
	int g{ 0 }, max{ 0 };
	getline(cin, str);
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ')
		{
			g += 1;

		}
		if (max < g) max = g;
	}
	cout << g;
}