#include "unit_test.h"

class MagicAddition
{
public:
	int DoStuff(int a, int b)
	{
		return 4;	// fix this line to pass all the tests
	}
};

UNIT_TEST(magic_tests, two_plus_two)
{
	MagicAddition magic;
	Assert(magic.DoStuff(2, 2) == 4, "2 + 2 does not equal 4");
}

UNIT_TEST(magic_tests, two_plus_three)
{
	MagicAddition magic;
	Assert(magic.DoStuff(2, 3) == 5, "2 + 3 does not equal 5");
}
