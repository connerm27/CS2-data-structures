//
//
// File:        logentry.cpp  
//       
// Version:     1.0
// Date:        
// Author:      
//
// Description: Class implementation for a log entry.
//
//

////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>

#include "string.hpp" 
#include "logentry.hpp"


////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
LogEntry::LogEntry(String s) {
	std::cout << "Before split" << std::endl;
    std::vector<String> vec = s.split(' ');
	std::cout << "after split" << std::endl;
    if(vec.size() == 10) {

	//host
	host = vec.at(0);

	String fullStr = vec.at(3);

	//date
		String dayStr = fullStr.substr(1,2);
		String monthStr = fullStr.substr(4,6);
		String yearStr = fullStr.substr(8,11);
	date.setDay(dayStr);
	date.setMonth(monthStr);
	date.setYear(toInt(yearStr));

	//time
		String hourStr = fullStr.substr(13,14);
		String minuteStr = fullStr.substr(16, 17);
		String secondStr = fullStr.substr(19,20);
	time.setHour(toInt(hourStr));
	time.setMinute(toInt(minuteStr));
	time.setSecond(toInt(secondStr));

	//request
	String rPart1 = vec.at(5);
	rPart1 = rPart1.substr(1,3);
	String rPart2 = vec.at(6);
	String rPart3 = vec.at(7);
	rPart3 = rPart3.substr(0, rPart3.length() -1);
	request = rPart1 + rPart2 + rPart3;

	//status
	status = vec.at(8);

	//Number of Bytes
	if(vec.at(9) == '-') {
		number_of_bytes = 0;
	} else {
		number_of_bytes = toInt(vec.at(9));
	}

    } else {
	host = String();
	Date d;
	Time t;
	request = String();
	status = String();
	number_of_bytes = 0;
    }

}

void Date::setDay(String s) {

	day = s;

}

void Date::setMonth(String s) {
	month = s;
}

void Date::setYear(int x) {

	year = x;

}

String Date::getDay() const {
	return day;
}

String Date::getMonth() const { 
        return month;
}

int Date::getYear() const { 
        return year;
}




void Time::setHour(int x) {
	hour = x;
}

void Time::setMinute(int x) {
	minute = x;
}

void Time::setSecond(int x) {
	second = x;
}

int Time::getHour() const {
	return hour;
}

int Time::getMinute() const {
        return minute;
}

int Time::getSecond() const {
        return second;
}

int LogEntry::getBytes() const {
	return number_of_bytes;

}

String LogEntry::getHost() const {
	return host;
}

//logentry output operator

std::ostream& operator<<(std::ostream& out, const LogEntry& log) {

	out << "Host: " << log.host << std::endl;
	out << "Date: " << log.date.getDay() << "/" << log.date.getMonth() << "/" << log.date.getYear() << std::endl;
	out << "Time: " << log.time.getHour() << ":" << log.time.getMinute() << ":" << log.time.getSecond() << std::endl;
	out << "Request: " << log.request << std::endl;
	out << "Status: " << log.status << std::endl;
	out << "Bytes: " << log.status << std::endl;

return out; 

}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
std::vector<LogEntry> parse(std::istream& in) {

    std::vector<LogEntry> result;
	char c;
	String s;
	while(!in.eof()) {

		in.get(c);

		while(c != '\n'||!in.eof()) {
			in.get(c);
			std::cout << "this is c: " << c << std::endl;
			s = s + c;
			std::cout << "This is s: " << s << std::endl;
		}
		std::cout << s << std::endl;
		LogEntry log(s);
		std::cout << "called" << std::endl;
		result.push_back(log);
		s = "";
		std::cout << s << std::endl;
	}

    return result;
}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void output_all(std::ostream& out, const std::vector<LogEntry> &vecLogs) {

for(int i=0; i < vecLogs.size(); ++i) {

	out << vecLogs.at(i) << std::endl;
}



}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
void by_host(std::ostream& out, const std::vector<LogEntry>& vecLogs) {

for(int i = 0; i < vecLogs.size(); ++i) {

	out << vecLogs.at(i).getHost() << std::endl;
}



}

////////////////////////////////////////////////////////// 
// REQUIRES:  
// ENSURES: 
//
int byte_count(const std::vector<LogEntry> &vecLogs) {

	int totalBytes = 0;
	for(int i=0; i < vecLogs.size(); ++i) {
		totalBytes += vecLogs.at(i).getBytes();
	}

    return totalBytes;
}

int toInt(String str) {
int x = 0;
int c = str.length() - 1;
for(int i=0; i<str.length(); ++i) {
	int temp  = str[i] - '0';
	x = x + temp*(10^c);

	c--;
}

return x;


}
