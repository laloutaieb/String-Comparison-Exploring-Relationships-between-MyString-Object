#include"MyString.h"
#include<string.h>
#include <iostream>
using namespace std;

int main()
{
	char* str1 = new char[20]; 
	char* str2 = new char[20]; 
	cin >> str1 >> str2; 
	int num1, num2; 
	cin >> num1; 
	MyString a(str1), b(str2), newStr; 
	if (a < b)
		cout << "a<b\n";
	else if (a > b)
		cout << "a>b\n";
	else
		cout << "a=b\n"; 

}

/* 
Dans cette exercice on a toujours le probleme de comment remplir
un array un string sur un main il faut l'apprendre par coeurs; 




*/