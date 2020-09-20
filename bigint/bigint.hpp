#ifndef _BIGINT_HPP_
#define _BIGINT_HPP_

#include <iostream>

const int CAPACITY = 400;


class bigint {


  public:
        bigint(); //Default Constructor

        bigint(int val); //Constructor to initilize a bigint to integer

        bigint(const char bigArr[]);  //Constructor to initilize a bigint


	void debugPrint(std::ostream&) const;

	friend std::ostream& operator<<(std::ostream& out, const bigint& bi); //Operator

	friend  bool operator==(const bigint& bi1, const bigint& bi2);  //Operator

	friend std::istream& operator>>(std::istream& in, const bigint& bi); //Operator

	bigint operator+(const bigint& bi) const; //Operator

	int operator[](int) const; //Operator

  private:
	int arr[CAPACITY];





};


#endif
