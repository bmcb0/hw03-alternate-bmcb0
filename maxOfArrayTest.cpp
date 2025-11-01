#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {
        int maxAtStart[5] = {5,4,3,2,1};
        assertEquals(5,maxOfArray(maxAtStart,5), "maxOfArray(maxAtStart,5)");

        int maxAtEnd[5] = {1,2,3,4,5};
        assertEquals(5,maxOfArray(maxAtEnd,5), "maxOfArray(maxAtEnd,5)");

        int maxInMiddle[5] = {1,2,5,3,4};
        assertEquals(5,maxOfArray(maxInMiddle,5), "maxOfArray(maxInMiddle,5)");

        int multiMax[5] = {1,2,3,2,3};
        assertEquals(3, maxOfArray(multiMax,5), "maxOfArray(multiMax,5)");

        int mix[10] = {1,2,3,4}; //the rest will be 0
        assertEquals(4, maxOfArray(mix,10), "maxOfArray(mix,10)");

        int negatives[5] = {-2,-1,0,1,2};
        assertEquals(2, maxOfArray(negatives,5), "maxOfArray(negatives,5)");

        int zeroes[3] = {0,0,0};
        assertEquals(0, maxOfArray(zeroes,3), "maxOfArray(zeroes,3)");

        return 0;
}
