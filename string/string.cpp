#include "string.hpp"
#include <iostream>

String::String() {
	stringSize = 1;
	str = new char[1];
	str[0] = '\0';

}

String::String(char c) {

	stringSize = 2;
	str = new char[2];
	str[0] = c;
	str[1] = '\0'; 


}


String::String(const char c_arr[]) {

	int len = 0;
	while(c_arr[len] != '\0') {
		len++;
	}

	stringSize = len+1;
	str = new char[stringSize];
	int i;
	for(i=0; i<stringSize; ++i) {
		str[i] = c_arr[i];
	}
	str[i] = '\0';

}

String::String(const String& str2) {

	int len = str2.length();
	stringSize = len+1;
	str = new char[stringSize];

	int i;
	for(i=0; i<stringSize; ++i) {
		str[i] = str2.str[i];
	}
	str[i] = '\0';

}

String::~String() {

	if(str != NULL) {
		delete[] str;
	}
}

void String::swap(String& str2) {

	char *temp_str = str;
	str = str2.str;
	str2.str = temp_str;

	int temp_len = stringSize;
	stringSize = str2.stringSize;
	str2.stringSize = temp_len;

}

String& String::operator=(String s) {

	if(str != NULL) {
                delete[] str;
        }
	str = NULL;

	int len = s.length();
	stringSize = len+1;

	str = new char[stringSize];
	int i;
	for (i = 0; i < stringSize; ++i) {
		str[i] = s.str[i];
	}
	str[i] = '\0';

	return *this;


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

	return stringSize - 1;

}

int String::length() const {

	int i;

	for (i=0; i < stringSize; ++i) {

		if(str[i] == '\0'){
			break;
		}
	}

	return i;

}

String String::operator+(const String& str2) const {

String cStr;

int i = 0;

while(str[i] != '\0') {

	cStr.str[i] = str[i];
	i++;

}
int len = length();
int j = 0;

while(str2.str[j] != '\0') {
	cStr.str[len + j] = str2.str[j];
	j++;

}

cStr.str[len+j] = '\0';


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

String& String::operator+= (const String& str2){

int len = length();
int i = 0;

while(str2.str[i] != '\0') {

	str[len + i] = str2.str[i];
	i++;
	if(len + i >= capacity()) {
		break;
	}
}

	str[len+i] = '\0';



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
		in.get(c);

		if(c == ' ') {
			break;
		}
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


//Private Member Functions
void String::resetCapacity(int x) {

stringSize = x-1;

char *ptr =  new char[stringSize];

for(int i = 0; i < stringSize; ++i) {

	str[i] = ptr[i];

}

delete[] ptr;


}

String::String(int x) {
	stringSize = x-1;
	str = new char[stringSize];
	str[0] = '\0';

}

String::String(int x, const char c_arr[]) {

	stringSize = x-1;
	str = new char[stringSize];

	int i;
	for(i = 0; i < stringSize; ++i) {
		str[i] = c_arr[i];
	}
	str[i] = '\0';

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
