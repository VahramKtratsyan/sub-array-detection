#include <gtest/gtest.h>
#include "../header/sub_array.hpp"

TEST(isSubArrayTest, 0isSubArrayOf0)
{
    constexpr int size_of_array = 1;
    constexpr int size_of_sub_array = 1;
    int array[size_of_array] = {0};
    int sub_array[size_of_sub_array] = {0};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), true);
}

TEST(isSubArrayTest, theSubArrayCantBeLargerThenArray)
{
    constexpr int size_of_array = 1;
    constexpr int size_of_sub_array = 2;
    int array[size_of_array] = {0};
    int sub_array[size_of_sub_array] = {0, 0};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), false);
}

TEST(isSubArrayTest, 0isSubArrayOf0_1)
{
    constexpr int size_of_array = 2;
    constexpr int size_of_sub_array = 1;
    int array[size_of_array] = {0,1};
    int sub_array[size_of_sub_array] = {0};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), true);
}

TEST(isSubArrayTest, 1isSubArrayOf0_1)
{
    constexpr int size_of_array = 2;
    constexpr int size_of_sub_array = 1;
    int array[size_of_array] = {0,1};
    int sub_array[size_of_sub_array] = {1};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), true);
}

TEST(isSubArrayTest, 0IsNotSubArrayOf1)
{
    constexpr int size_of_array = 1;
    constexpr int size_of_sub_array = 1;
    int array[size_of_array] = {1};
    int sub_array[size_of_sub_array] = {0};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), false);
}

TEST(isSubArrayTest, 0_0IsNotSubArrayOf0_1)
{
    constexpr int size_of_array = 2;
    constexpr int size_of_sub_array = 2;
    int array[size_of_array] = {0,1};
    int sub_array[size_of_sub_array] = {0,0};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), false);
}

TEST(isSubArrayTest, 0_1isSubArrayOf0_1)
{
    constexpr int size_of_array = 2;
    constexpr int size_of_sub_array = 2;
    int array[size_of_array] = {0,1};
    int sub_array[size_of_sub_array] = {0,1};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), true);
}

TEST(isSubArrayTest, 0_2isSubArrayOf0_1_2)
{
    constexpr int size_of_array = 3;
    constexpr int size_of_sub_array = 2;
    int array[size_of_array] = {0,1,2};
    int sub_array[size_of_sub_array] = {0,2};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), true);
}

TEST(isSubArrayTest, 0_7isSubArrayOf0_2_5_7)
{
    constexpr int size_of_array = 4;
    constexpr int size_of_sub_array = 2;
    int array[size_of_array] = {0,2,5,7};
    int sub_array[size_of_sub_array] = {0,7};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), true);
}

TEST(isSubArrayTest, 0_5isSubArrayOf0_2_5_7_8)
{
    constexpr int size_of_array = 5;
    constexpr int size_of_sub_array = 2;
    int array[size_of_array] = {0,2,5,7,8};
    int sub_array[size_of_sub_array] = {0,5};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), true);
}

TEST(isSubArrayTest, 2_5isSubArrayOf0_2_5_7_8)
{
    constexpr int size_of_array = 5;
    constexpr int size_of_sub_array = 2;
    int array[size_of_array] = {0,2,5,7,8};
    int sub_array[size_of_sub_array] = {2,5};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), true);
}

TEST(isSubArrayTest, 2_5_0IsNotSubArrayOf0_2_5_7_8)
{
    constexpr int size_of_array = 5;
    constexpr int size_of_sub_array = 3;
    int array[size_of_array] = {0,2,5,7,8};
    int sub_array[size_of_sub_array] = {2,5,0};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), false);
}

TEST(isSubArrayTest, 8isSubArrayOf0_2_5_7_8)
{
    constexpr int size_of_array = 5;
    constexpr int size_of_sub_array = 1;
    int array[size_of_array] = {0,2,5,7,8};
    int sub_array[size_of_sub_array] = {8};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), true);
}

TEST(isSubArrayTest, 2isSubArrayOf0_2_5_7_8)
{
    constexpr int size_of_array = 5;
    constexpr int size_of_sub_array = 1;
    int array[size_of_array] = {0,2,5,7,8};
    int sub_array[size_of_sub_array] = {2};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), true);
}

TEST(isSubArrayTest, 1_3_5_7_9isSubArrayOf1_2_3_4_5_6_7_8_9_0)
{
    constexpr int size_of_array = 10;
    constexpr int size_of_sub_array = 5;
    int array[size_of_array] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int sub_array[size_of_sub_array] = {1,3,5,7,9};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), true);
}

TEST(isSubArrayTest, 1_3_5_7_9_8IsNotSubArrayOf1_2_3_4_5_6_7_8_9_0)
{
    constexpr int size_of_array = 10;
    constexpr int size_of_sub_array = 6;
    int array[size_of_array] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int sub_array[size_of_sub_array] = {1,3,5,7,9,8};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), false);
}

TEST(isSubArrayTest, 12IsNotSubArrayOf1_2_3_4_5_14_7_8_9_100_25_13)
{
    constexpr int size_of_array = 12;
    constexpr int size_of_sub_array = 1;
    int array[size_of_array] = {1, 2, 3, 4, 5, 14, 7, 8, 9, 100, 25, 13};
    int sub_array[size_of_sub_array] = {12};
    EXPECT_EQ(isSubArray(array, size_of_array, sub_array, size_of_sub_array), false);
}