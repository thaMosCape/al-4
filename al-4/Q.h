#pragma once
#include "al-4.h"



class Q
{

public:
	Q(int m = 0, unsigned int n = 1);

	int m;
	unsigned int n;

	friend Q operator* (const Q& lhs, const Q& rhs);
	friend Q operator+ (const Q& lhs, const Q& rhs);
};
