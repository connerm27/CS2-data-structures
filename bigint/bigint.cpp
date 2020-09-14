#include "bigint.hpp"
#include <iostream>


bigint::bigint() {

	for(int i=0; i<CAPACITY;++i) {
		arr[i] = 0;
	}
}

bigint::bigint(int val) {

	int placeholder = val;

 for(int i=0; i<CAPACITY;++i) {
                arr[i] = 0;
        }


	for(int i=0; i<CAPACITY; ++i) {
		arr[i] = placeholder % 10;
		placeholder = placeholder/10;

		if(placeholder == 0) {

			break;
		}
	}

}

bigint::bigint(const char bigArr[]) {

	//Sets all elements of arr to 0
	for(int i=0; i<CAPACITY; ++i) {
                arr[i] = 0;
        }



	for(int i=CAPACITY-1; i>=0;  --i) {
		arr[i] = bigArr[i]-48;
	}


}

void bigint::debugPrint(std::ostream& out) const {
	for(int i=CAPACITY-1; i>=0; i--) {
		out << arr[i] << "|";
	}

}


std::ostream& operator<<(std::ostream& out, const bigint& bi) {

	int count = 0;
	int flag = 0;

	for(int i=CAPACITY-1; i>=0; --i) {



		if(bi.arr[i]!=0 || i==0) {

			flag = 1;
		}

		if(flag == 1) {

			if(count%80 == 0){
				out << std::endl;
			}

			count++;
				out << bi.arr[i];

		}


	}

	return out;
}


bool operator==(const bigint& bi1, const bigint& bi2) {



	bool result = true;

	for(int i=0; i<CAPACITY; i++) {
		if(bi1.arr[i]!=bi2.arr[i]) {
			result = false;
		}
	}

	return result;


}










