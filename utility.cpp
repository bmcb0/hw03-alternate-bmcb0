// utility.cpp

// IN THIS FILE, define any of your OWN functions you may need to 
// solve the problems.    

// You will need to include the function prototype in "utility.h" and
// then be sure to  #include "utility.h" in the file where you use
// these functions

#include <iostream>
using namespace std;


bool isOdd(int x) {
  if (x % 2 != 0) {
    return true;
  }	  
  return false;
}
bool isEven(int x) { 
  if (x%2 == 0) {
	  return true;
  }
  return false;
}
bool isPrime(int x) {
  if (x < 0) {
    x = -x; //if it's negative, make it positive; won't matter either way
  }

  if (x == 1 || x == 0) {
    return false;
  }


  for (int index = 2; index < x; index ++) {
    if (x % index == 0) {
	    return false;
    }  
  }
  return true;
}
