#include "pch.h"
#include "../PrimeFactor/PrimeFactor.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactors, Of1) {
	PrimeFactor primeFactor;
	vector<int> expected = {};
	EXPECT_EQ(expected, primeFactor.of(1));
}