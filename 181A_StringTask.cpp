#include <iostream>
#include <string>
 
using namespace std;

int main()
{
	string str, out;
	
	
	cin >> str;
	
	
	
	for(char k: str)
	{
		
		
		if(tolower(k) == 'a' or tolower(k) == 'o' or tolower(k) == 'y' or tolower(k) == 'e' or tolower(k) == 'u' or tolower(k) == 'i')
		{
			continue;
		}
		else if(isupper(k))
		{
			out += '.';
			out += tolower(k);
		}
		else
		{
			out += '.';
			out += k;
			
		}
	}
	cout << out;
	
} 
