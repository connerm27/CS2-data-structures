#include "string.hpp"
#include <iostream>

String::String() {
	//NULL array
	str[0] = '\0';

}

String::String(char c) {

	//One character
	str[0] = c;
	str[1] = '\0';

}


String::String(const char c_arr[]) {

	int i;
	for(i=0; i<STRING_SIZE; ++i) {
		if(c_arr[i] == '\0') {
			break;
		}
		str[i] = c_arr[i];
	}
	str[i] = '\0';

}

char& String::operator[](int index) {

	if(index>=0 && index<length()) 
		return str[index];

}

char String::operator[](int index) const {

	if(index>=0 && index<length())
		return str[index];

}


int String::capacity() const {

	return STRING_SIZE;

}

int String::length() const {

	int i;

	for (i=0; i < STRING_SIZE; ++i) {
		if(str[i] == '\0' {
			break;
		}
	}

	return i;

}

String String::operator+(const String& str2) const {

String cStr;

for(int i=0; i < STRING_SIZE; ++i) {

	cStr.str[i] = str[i];


}

}

bool String::operator==(const String&s str2) const {

	//Length  of string
	int len1 = length();
	//Length of string passed in
	int len2 = str2.length();

	if(len1 != len2) {
		return false;
	}

	int i;
	for(i=0; i< len1; ++i) {
		if(str[i] != str2.str[i]) {
			return false;
		}
	}

	return true;

}

bool String::operator<(const String& str2) const {

	int len1 = length();
	int len2 = str2.length();

	if (len1 >= len2) {
		return false;
	}



}

String String::operator+= (const String& str2) const {


}

String String::substr(int start, int end) {


}

int String::findch(int pos, char ch) {

}


int String::findstr(int pos, const String& str) {


}

std::istream& operator>>(std::istream& in, String& s) {

	char c;
	int i=0;
	while (!in.eof()) {
		in >> c;
		s.str[i] = c;
		i++;
	}

	s.str[i] = '\0';

	return in;


}

std::ostream& operator<<(std::ostream& out, String& s) {

	out << s.str;
	return out;
}


//Non member functions


String  operator+(const char[] c, const String& s) {

}

String  operator+(char c, const String& s) {

}


bool operator==(const char[] c,  const String& s) {

}

bool operator==(char c, const String& s) {

}

bool operator<(const char[] c,  const String& s) {

}

bool operator<(char c, const String& s) {

}

bool operator<=(const String& s, const String& s2) {

}

bool operator!=(const String& s, const String& s2) {

}

bool operator>=(const String& s, const String& s2) {

}

bool operator>(const String& s, const String& s2) {


}
