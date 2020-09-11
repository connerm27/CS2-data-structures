
#ifndef _BIGINT_HPP_
#define _BIGINT_HPP_



#include <iostream>

class bigint {


  public:

	const int CAPACITY = 400;

	bigint(); //Default Constructor

	bigint(int val); //Constructor to initilize a bigint  to a value I provide

	bigint(const char bigVal[]);  //Constructor to initilize a bigint to a big int val






};


#endif
