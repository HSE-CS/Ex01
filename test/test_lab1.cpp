#include "task1.h"

#include "gtest/gtest.h"

TEST(task1, test1)
{
    ASSERT_EQ(3571,getPrime(500));

}

TEST(task1, test2)
{
     ASSERT_EQ(2,getPrime(1));
	
}

TEST(task1, test3)
{
     ASSERT_EQ(3,getPrime(2));
	
}
