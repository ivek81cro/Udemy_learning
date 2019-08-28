#include <iostream>
#include <string>


using namespace std;

void PrintPyramid(string &s) 
{

	if (s.empty()) 
	{
		return;
	}

	int charsToPrint = 1;

	while (charsToPrint <= s.length())
	{
		//ident
		int ident = s.length() - charsToPrint;
		for (int i = 0; i < ident; i++) 
		{
			cout << " ";
		}

		// forward
		for (int i = 0; i < charsToPrint; i++) 
		{
			cout << s[i];
		}

		// backward
		for (int i = charsToPrint - 2; i >= 0; i--) 
		{
			cout << s[i];
		}

		// start a new line and increase charsToPrint
		cout << endl;
		charsToPrint++;
	}
}

int main()
{
	string str{};

	cout << "Enter a string : ";
	cin>>str;

	int current_chars = 1;

	while (current_chars <= str.length())
	{
		int pos = str.length() - current_chars;
		for (int i = 0; i < pos; i++) 
		{
			cout << " ";
		}

		for (int i = 0; i < current_chars; i++) 
		{
			cout << str[i];
		}

		for (int i = current_chars - 2; i >= 0; i--) {
			cout << str[i];
		}
		current_chars++;
		cout << endl;
	}

}