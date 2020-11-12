#include "string.hpp"
#include "utilities.hpp"
#include "stack.hpp"
#include <iostream>


String infix_to_postfix(String s) {

std::vector<String> v1;

v1 = s.split(' ');
int i = 0;

stack<String> final;

while(v1.at(i) != ';') {

if(v1.at(i) == ')') {

	String right = final.pop();
	right += " ";
	String oper = final.pop();
	oper += " ";
	String left = final.pop();
	left += " ";

	String fullExp = left + right + oper;

	final.push(fullExp);

} else {

	if(v1.at(i) != '(') {
		final.push(v1.at(i));
	}
}

i++;

}

return final.top() + " ;";

}
