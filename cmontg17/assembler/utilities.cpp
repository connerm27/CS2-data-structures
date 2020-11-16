#include "string.hpp"
#include "utilities.hpp"
#include "stack.hpp"
#include <iostream>


String infix_to_postfix(std::vector<String> v1) {

//std::vector<String> v1;

//v1 = s.split(' ');
int i = 0;

stack<String> final;

while(v1.at(i) != ';') {

if(v1.at(i) == ')') {

	String right = final.pop();
	right += " ";
	String oper = final.pop();
	//oper += " ";
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


String evaluate(String s, std::ostream& out) {


	std::vector<String> v1;

	v1 = s.split(' ');

	int i = 0;
	stack<String> final;
	String t;
	int counter = 0;


while(v1.at(i) != ";") {

	String current;
	t = v1.at(i);

	if (t != "*" && t != "/" && t != "+" && t != "-") {
		final.push(t);

	} else {
		counter++;
		String right = final.pop();
		String left = final.pop();
		String rlt = evaluate(left, t, right, counter, out);
		final.push(rlt);

	}


	i++;
}

return final.top();
}

String evaluate(String left, String t, String right, int c, std::ostream& out) {
//std::cout <<  "This is right" << right << std::endl;


String loadLeft;
String op;
String rightSide;
String store;
String tmpN;
String final;

char ch = (48+c);
String N(ch);
//std::cout << ch << std::endl;
//std::cout << N << std::endl;
tmpN = "Tmp";
tmpN += N;

if(t == "*") {
	op = "MU";
} else if(t == "/") { 
        op = "DV";
} else if(t == "+") { 
        op = "AD";
} else  if(t == "-") { 
        op = "SB";
} else {
	op = "";
}

loadLeft = "LD  " + left;
rightSide = op;
store = "ST  " + tmpN;

out << "    " <<  loadLeft << "\n";
out << "    " << op << "  ";
out << right << "\n";
out << "    " << store << "\n";
//if(c == 1) {
//	final = loadLeft + "\n" + rightSide + "\n" + right  + "\n" + store + "\n";
//} else {
//	final = right + loadLeft + "\n" + rightSide + "\n" + store + "\n";
//}

//	out << final;

//Should return tmpN
return tmpN;

}


String infix_to_prefix(std::vector<String> v1) {

//std::vector<String> v1;

//v1 = s.split(' ');
int i = 0;

stack<String> final;

while(v1.at(i) != ';') {

if(v1.at(i) == ')') {

        String right = final.pop();
       // right += " ";
        String oper = final.pop();
        oper += " ";
        String left = final.pop();
        left += " ";

        String fullExp = oper + left + right;

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



String evaluate_prefix(String s, std::ostream& out) {


        std::vector<String> v1;

        v1 = s.split(' ');

        int i = 0;
        stack<String> final;
        String t;
        int counter = 0;

	while(v1.at(i) != ";") {

        String current;
        t = v1.at(i);

        if (t != "*" && t != "/" && t != "+" && t != "-") {
                final.push(t);

        } else {
		final.pop();

		if(!final.empty()) {
	                counter++;
        	        String right = final.pop();
               		String left = final.pop();
                	String rlt = evaluate(left, t, right, counter, out);
                	final.push(rlt);
		} else {
			final.push(t);
		}
        }


	i++;
}


return final.top();
}



String evaluate_prefix(String left, String t, String right, int c, std::ostream& out) {
//std::cout <<  "This is right" << right << std::endl;


String loadLeft;
String op;
String rightSide;
String store;
String tmpN;
String final;

char ch = (48+c);
String N(ch);


tmpN = "Tmp";
tmpN += N;

if(t == "*") {
	op = "MU";
} else if(t == "/") { 
        op = "DV";
} else if(t == "+") { 
        op = "AD";
} else  if(t == "-") { 
        op = "SB";
} else {
        op = "";
}

loadLeft = "LD  " + left;
rightSide = op;
store = "ST  " + tmpN;

out << "    " <<  loadLeft << "\n";
out << "    " << op << "  ";
out << right << "\n";
out << "    " << store << "\n";


return tmpN;

}

