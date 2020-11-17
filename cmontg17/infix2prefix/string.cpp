#include "string.hpp"
#include <iostream>
#include <cassert>

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

	stringSize = str2.stringSize;
	str = new char[stringSize];

	int i;
	for(i=0; i<stringSize; ++i) {
		str[i] = str2.str[i];
	}
	str[stringSize-1] = '\0';

}

String::~String() {


	delete[] str;

}

void String::swap(String& str2) {

	char *temp_str = str;
	str = str2.str;
	str2.str = temp_str;

	int temp_len = stringSize;
	stringSize = str2.stringSize;
	str2.stringSize = temp_len;


}

String& String::operator=(String rhs) {
//if (str == rhs.str) return *this; //check to see if they are already pointing to the same address

//delete [] str;

//stringSize = rhs.stringSize;

//str = new char [stringSize];

//for (int i = 0; i < capacity(); ++i)

//str[i] = rhs.str[i];

swap(rhs);

return *this;


}

char& String::operator[](int index) {

	assert(index>=0 && index<length()); 
		return str[index];

}

char String::operator[](int index) const {

	assert(index>=0 && index<length());
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

String String::operator+(const String& rhs) const {

char *c = new char[length() + rhs.stringSize];

int i = 0;

while(str[i] != 0) {

c[i] = str[i];

++i;

}

int j = 0;

while(rhs.str[j] != 0) {

c[i++] = rhs.str[j++];

}

c[i] = '\0';

String *k = new String(c);

return *k ;

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

	int s = len1;

	if(len2 < len1) {
		s = len2;
	}

	for(int i=0; i<s; ++i) {
		if(str[i] == str2.str[i]) {
			continue;
		}

		if(str[i] < str2.str[i]) {
			return true;
		}
	}


	if (str == str2.substr(0, len1-1) && len1 < len2) {
		return true;
	}

	return false;



}

String& String::operator+= (const String& str2){

*this = operator+(str2);

return *this;


}

String String::substr(int start, int end) const {

if (start < 0) return String();

if (start > end) return String();

if (end >= length()) {
	end = length();
}

String result;

int i = start;

while (i <= end) {

result += str[i];

++i;

}

String *k = new String(result);

return *k;


}

int String::findch(int pos, char ch) const {

	if(pos < 0) {
		pos = 0;
	}
	if(pos > length()-1) {
		pos = length();
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

	char c[s.stringSize];
	if(!in.eof()) {
		in >> c;
		s.stringSize++;
		s = String(c);
	}

	return in;


}

std::ostream& operator<<(std::ostream& out, const String& s) {


	for(int i=0; i<s.length(); ++i) {
		out << s[i];
	}

	return out;
}


std::vector<String> String::split(char c) const {
std::vector<String> v1;

//std::cout << "|" << str << "|" << c << "|" <<  std::endl;

int saved = 0;
int x = 0;
int count = 0;

for(int i=0; i<stringSize; ++i) {

	if(str[i] == c){
		count++;
	}
}

//std::cout << "This is the count: " <<  count << std::endl;

if(count == 0) {
//	std::cout << "The character was not found in the string, returns the string" << std::endl;
	v1.push_back(substr(0, length()-1));
	return v1;

}

//String temp;
//String last;
for(int i = 0; i<count; ++i) {
	x = findch(saved, c);
//	std::cout << "This is the value of x: " << x <<  std::endl;
	String temp(substr(saved, x-1));
//	std::cout << "This is the value of temp: " << temp <<  std::endl;
	v1.push_back(temp);
	saved = x+1;
//	std::cout << "This is the value of saved var: " << saved << std::endl;

	if(count-1 == i) {
//		std::cout << "This should be the last loop through" << std::endl;
		String last(substr(saved, stringSize-1));
//		std::cout << "This is the value of last: " << last << std::endl;
		v1.push_back(last);
	}
}


//This is for testing purposes
//for(int i =0; i<v1.size(); ++i) {
//	std::cout << v1.at(i) << std::endl;
//}
//std::cout << "---------------" <<  std::endl << std::endl;


return v1;
}


//Private Member Functions
void String::resetCapacity(int x) {

stringSize = x-1;

char *ptr =  new char[stringSize];
int i;
for(i = 0; i < stringSize; ++i) {

	ptr[i] = str[i];

}

ptr[i] = '\0';

delete[] str;

str = ptr;
//delete[] ptr;

}

String::String(int x) {
	stringSize = x+1;
	str = new char[stringSize];
	str[0] = '\0';

}

String::String(int x, const char c_arr[]) {

	stringSize = x+1;
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
