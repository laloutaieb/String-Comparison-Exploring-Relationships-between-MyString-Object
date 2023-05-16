#include "MyString.h"

#include"MyString.h"
#include<string.h>
#include <iostream>

using namespace std;

MyString::MyString(const char* a)
{
	str = a; 
}

bool MyString::operator<(const MyString& a) const
{
	return(*this<a);
} 

bool MyString::operator>(const MyString& a) const
{
	return(*this>a);
}

bool MyString::operator>=(const MyString& a) const
{
	int x = (strcmp(str, a.str)); 
	if (x > 0 || x == 0)
		return true;
	else
		return false; 
}

bool MyString::operator<=(const MyString& a) const
{
	int x = (strcmp(str, a.str));
	if (x < 0 || x == 0)
		return true;
	else
		return false;
}

bool MyString::operator==(const MyString& a)const
{
	if (len == a.len && (strcmp(str, a.str) == 0))
		return true; 
	else
		return false; 
}


bool MyString::operator!=(const MyString& a)const
{
	if (len == a.len && (strcmp(str, a.str) == 0))
		return false;
	else
		return true;
}

MyString::MyString(const MyString& str) : MyString(str.str) {} // c'est le copy constructor 
//demander a dylan l'explication de ce texte 

char& MyString::operator[](int index)
{
	if (str)
	{
		if (index > 0 && index < len)
			cout << str[index];
		else
			cout << "ERROR" << endl;
	}
	else
		cout << "ERROR" << endl;
}

MyString MyString::insert(int index, const char* caractere)
{
	if (index < len)
	{
		int size = strlen(caractere); // taille du caractere 
		MyString newstr; // nouvelle str; 
		// newstr.len = str.len; -------- TRES IMPORTANT ---- on ne peux pas faire comme ca 
		// en gros str c rien ca veux rien dire on n'as pas l'information qui nous permet 
		// de savoir qu'elle est l'objet qui va utiliser le insert et qui sera avant 
		// objet.insert donc on utilise le this->len 
		newstr.len = (this->len + size);
		int SizeNewStr = newstr.len; 
		newstr.str = new char[SizeNewStr]; 
		for (int i = 0; i < index ; i++)
		{
			newstr.str[i] = this->str[i]; 
		}
		for (int i = index; i < index + size; i++)
		{
			newstr.str[i] = caractere[i];  // demander a dylan pourquoi dans correction c'est different de celui ci ? 
		}
		for (int i = index + size; i < SizeNewStr; i++)
		{
			newstr.str[i] = this->str[i]; // pas compris la correction de moshe encore une fois 
		}
		return newstr; // c quoi return c pas cout pas oublie ! 
	}
	else
	{
		cout << "ERROR" << endl; 
		cout << "move ctor\n"; 
		return MyString(); // pas compris ce systeme est ce un construc vide  
	}

}


/*apprendre a ne plus mettre endl, mais \n*/




