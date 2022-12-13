#include<iostream>
#include<set>
#include <string>
using namespace std;
int main(){
	string s;
	set <char>distinctString;
	getline(cin,s);
	for(int i=0;i<s.length();i++)
	{
		if(!( s[i]==','||s[i]=='{'||s[i]=='}'||s[i]==' '))
			distinctString.insert(s[i]);		
	}
    cout<<distinctString.size();
}
