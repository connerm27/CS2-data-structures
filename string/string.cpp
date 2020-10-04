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
		if(str[i] == '\0') {
			break;
		}
	}

	return i;

}

String String::operator+(const String& str2) const {

String cStr;
int len = length();
int len2 = str2.length();

for(int i=0; i < len; ++i) {

	cStr.str[i] = str[i];
}

for(int i=len; i < len+len2; ++i) {
	cStr.str[i] = str2.str[i];
}

cStr[len + len2] = '\0';

return cStr;


}

bool String::operator==(const String& str2) const {

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

	for(int i= 0; i <= len2 - len1; ++i) {

		if(substr(i, i+len1-1) ==  (*this))
			return true;
	}

	return false; 



}

String String::operator+= (const String& str2){

int len = length();
int i = 0;

while(str2.str[i] != '\0') {

	str[len + i] = str2.str[i];
	i++;
	if(len + i >= capacity()) {
		break;
	}
	str[len+i] = '\0';

	return *this;

}

return *this;


}

String String::substr(int start, int end) const {

	if(start < 0) {
		start = 0;
	}
	if(start>length()) {
		return String();
	}
	if(start > end) {
		return String();
	}
	if(end >= length()) {
		end = length() - 1;
	}

	String rlt;
	int i;
	for(i=start; i<=end; ++i) {
		rlt.str[i-start] = str[i];
	}
	rlt.str[i-start] = '\0';

	return rlt;


}

int String::findch(int pos, char ch) const {

	if(pos < 0) {
		pos = 0;
	}
	if(pos > length()-1) {
		return -1;
	}

	int i;
	int len = length();
	for(i=pos; i<len; ++i) {
		if(str[i] == ch) {
			return i;
		}
	}

	return -1; 


}


int String::findstr(int pos, const String& str2) const {

	int len = length();
	int len2 = str2.length();

	if(pos < 0) {
		pos = 0;
	}
	if(pos > length() -1) {
		return -1;
	}
	if(len2 > len - pos) {
		return -1;
	}

	int i;
	for(i=pos; i<len; ++i) {
		if(substr(i, i+ len2-1) == str2) {
			return i;
		}
	}

	return -1;




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

std::ostream& operator<<(std::ostream& out, const String& s) {


	for(int i=0; i<s.length(); ++i) {
		out << s[i];
	}

	return out;
}


//Non member functions


String operator+(const char c[], const String& s) {

String makeString = c;

return makeString + s;

}

String operator+(char c, const String& s) {

String makeString = c;

return makeString + s;

}


bool operator==(const char c[],  const String& s) {

String makeString = c;

if(makeString == s) {
	return true;
}

return false;

}

bool operator==(char c, const String& s) {

String makeString = c;

if(makeString == s) { 
        return true;
}

return false;

}

bool operator<(const char c[],  const String& s) {

String makeString = c;

if(makeString < s) { 
        return true;
}

return false;


}

bool operator<(char c, const String& s) {

String makeString = c;

if(makeString < s) { 
        return true;
}

return false;

}

bool operator<=(const String& s, const String& s2) {

if(s < s2 || s == s2) {
	return true;
}

return false;


}

bool operator!=(const String& s, const String& s2) {
if (!(s == s2)) {
	return true;
}

return false;

}

bool operator>=(const String& s, const String& s2) {

if (!(s < s2)) {
 return true;
}

return false; 

}

bool operator>(const String& s, const String& s2) {

if (!(s < s2) && !(s == s2)) {
	return true;
}

return false;

}
