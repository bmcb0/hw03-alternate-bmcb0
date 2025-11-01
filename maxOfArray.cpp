#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

int maxOfArray(int a[], int size) {
	if (size < 1) {
		std::cerr << "ERROR: maxOfArray called with size < 1" << std::endl;
		exit(1);
	}	
	int maxIndex = 0; //the index of the biggest element

	for (int i = 0; i < size; i++) {
		if (a[maxIndex] < a[i]) {
			maxIndex = i;
		}
	}

	return a[maxIndex];
}
