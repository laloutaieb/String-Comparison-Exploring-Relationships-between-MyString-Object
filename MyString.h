#pragma once
#include <iostream>
#include <string.h>
using namespace std; 

class MyString
{ 
private : 
	int len = 0; 
	char* str; 
public: 
	MyString() : str(nullptr), len(0) {}// pas du tous compris cette formulation demander explication 
	// pourquoi nullprt c quoi, et qu'elle est la stucture de donner de ce systeme ? 
	MyString(const char*);// constructor 7
	MyString(const MyString&);// copy constructor
	char& operator [](int index); // []
	MyString insert(int index, const char* str); 
	bool operator<(const MyString&) const; 
	bool operator>(const MyString&) const;
	bool operator<=(const MyString&) const;
	bool operator>=(const MyString&) const;
	bool operator!=(const MyString&) const;
	bool operator==(const MyString&) const; 
};


/*je me suis demander si quand >= c'est par rapport a la taille 
du string ou bien c'est par rapport au valeur, vue la correction
de moshe c'est par rapport a la valeur qui dans la case et pas a la
taille mais j'ai pas compris la correction c'est par rapport a quelle 
case exactement ? 
bool MyString::operator>(const MyString& str2) const
return !(*this <= str2);

bool MyString::operator<(const MyString& a) const
toujours pas compris pourquoi y'a un const a la fin 




*/
