#include "arrayFuncs.h"
#include <cstdlib>
#include <iostream>

#include "utility.h"

int countEvens(int a[], int size) {
  //return 42; // STUB!  Replace with correct code.
  int count = 0;
  for(int i = 0; i < size; i ++){
    if(isEven(a[i])){
      count++;
    }
  }
  return count;
}
