//  print.h
//  Created by Daniel Illescas Romero on 09/09/2016.

#ifndef print_h
#define print_h

#include <iostream>

using namespace std;

/* PRINT functions */

template <typename Type>
void print(const Type& value) {
	cout << value << endl;
}

template<typename Type, typename... Args>
void print(const Type& value, const Args& ...args) {
	cout << value << ' ';
	print(args...) ;
}

/* TO_STRING functions */

// Return a string given a container (vector, array, list...)
template <class container>
string to_string(const container& cont) {
	
	string str;
	unsigned int position = 0;
	
	str += "[";
	
	for (auto values: cont) {
		str += to_string(values);
		
		if (position+1 < cont.size()) {
			str += ", ";
		}
		
		position++;
	}
	
	str += "]";
	
	return str;
}

// Return a string given a classic array and its size
template <class T>
string to_string(const T * array, size_t size) {
	
	string str;
	
	str += "[";
	
	for (int i = 0; i < size; i++) {
		str += to_string(array[i]);
		
		if (i+1 < size) {
			str += ", ";
		}
	}
	
	str += "]";
	
	return str;
}

#endif /* print_h */