#include "arrayFuncs.h"
#include "tddFuncs.h"

int main() {
        int normalNums[5] = {5,4,3,2,1};
        assertEquals(9,sumOdds(normalNums,5), "sumOdds(normalNums,5)");

        int oneOdd[1] = {5};
        assertEquals(5,sumOdds(oneOdd,1), "sumOdds(oneOdd,1)");

        int oneEven[1] = {2};
        assertEquals(0,sumOdds(oneEven,1), "sumOdds(oneEven,1)");

        int multiEvens[5] = {2,4,6,8,10};
        assertEquals(0, sumOdds(multiEvens,5), "sumOdds(multiEvens,5)");

        int mix[10] = {1,2,3,4}; //the rest will be 0
        assertEquals(4, sumOdds(mix,10), "sumOdds(mix,10)");

        int negatives[5] = {-2,-1,0,3,4};
        assertEquals(2, sumOdds(negatives,5), "sumOdds(negatives,5)");

        int zeroes[3] = {0,0,0};
        assertEquals(0, sumOdds(zeroes,3), "sumOdds(zeroes, 3)");

        return 0;
}
