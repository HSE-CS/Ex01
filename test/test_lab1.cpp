#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_EQ(3571,get_prime(500));

}

TEST(task1, test2)
{
     ASSERT_EQ(2,get_prime(1));
	
}

TEST(task1, test3)
{
     ASSERT_EQ(3,get_prime(2));
	
}
