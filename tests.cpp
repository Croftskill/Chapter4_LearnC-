#include "whattotest.cpp"
#include <gtest/gtest.h>
 
TEST(SolutionTest, Simple) { 
int A[] = {1, 2, 3, 4, -1};
 
   EXPECT_EQ(2, solution(A, 5));
}
 
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

