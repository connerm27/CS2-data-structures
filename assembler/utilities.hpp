#ifndef UTILITIES_HPP_
#define UTILITIES_HPP_

#include "string.hpp"
#include <iostream>

String infix_to_postfix(std::vector<String>);

String evaluate( String s, std::ostream& );

String evaluate(String left, String t, String right, int c, std::ostream&);

String infix_to_prefix(std::vector<String>);



#endif
