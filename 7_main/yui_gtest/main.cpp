#include <limits.h>
#include "tools.h"
#include "gtest/gtest.h"
namespace {

//测试哪个函数以及这个测试的名字（也不一定要这样写，只是这样更加清楚）
TEST(ConcatenateTest, IsOk) {
    CTools tools;
    // This test is named "Negative", and belongs to the "FactorialTest"
    // test case.
    // 断言，运行Factorial(-5)并对比结果是不是等于1（Factorial(-5)==1？）
    EXPECT_EQ("123", tools.Concatenate('1','2','3'));
    EXPECT_EQ("123456.7", tools.Concatenate(1,'2', "3", 45, 6.7));
    // 断言，运行Factorial(-10)并对比结果是不是小于0（0 > actorial(-10)?）
    //EXPECT_GT(Factorial(-10), 0);
}

TEST(GetVirtualStkAcctTest, IsOk) {
    CTools tools;
    // This test is named "Negative", and belongs to the "FactorialTest"
    // test case.
    // 断言，运行Factorial(-5)并对比结果是不是等于1（Factorial(-5)==1？）
    EXPECT_EQ("12345600", tools.GetVirtualStkAcct("123456","00"));
    EXPECT_EQ("12345600", tools.GetVirtualStkAcct("123456","00", 8));
    EXPECT_EQ("1234345600", tools.GetVirtualStkAcct("123456","00", 10));
    EXPECT_EQ("1230012300", tools.GetVirtualStkAcct("123","00", 10));
    EXPECT_EQ("1234789100", tools.GetVirtualStkAcct("1234567891","00", 10));
    // 断言，运行Factorial(-10)并对比结果是不是小于0（0 > actorial(-10)?）
    //EXPECT_GT(Factorial(-10), 0);
}

//GetVirtualStkAcct
}  // namespace

int main(int argc, char **argv) {
    //初始化gtest
    ::testing::InitGoogleTest(&argc, argv);
    //运行所有测试用例
    return RUN_ALL_TESTS();
}