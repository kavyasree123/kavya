#include <cheat.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

CHEAT_TEST(Recursion_works,
	cheat_assert(multiplyNumbers(3) == 6);
	cheat_assert_not(multiplyNumbers(2)== 5);
)

CHEAT_TEST(Recursion1_work,
	cheat_assert(multiplyNumbers(0) == 1);
	cheat_assert_not(multiplyNumbers(4)== 10);
)

CHEAT_DECLARE(

    int multiplyNumbers(int n)
    {
        if (n >= 1)
            return n*multiplyNumbers(n-1);
        else
            return 1;
    }
	
)





