#include "gtest/gtest.h"
#include "string_utils.h"

using namespace StringUtils;

TEST(StringUtilsTest, SplitEmptyString) {
    auto result = split("", ",");
    EXPECT_TRUE(result.empty());
}

TEST(StringUtilsTest, SplitSingleToken) {
    auto result = split("hello", ",");
    ASSERT_EQ(result.size(), 1);
    EXPECT_EQ(result[0], "hello");
}

TEST(StringUtilsTest, SplitMultipleTokens) {
    auto result = split("a,b,c", ",");
    ASSERT_EQ(result.size(), 3);
    EXPECT_EQ(result[0], "a");
    EXPECT_EQ(result[1], "b");
    EXPECT_EQ(result[2], "c");
}

TEST(StringUtilsTest, TrimEmptyString) {
    EXPECT_EQ(trim(""), "");
}

TEST(StringUtilsTest, TrimWithSpaces) {
    EXPECT_EQ(trim("  hello  "), "hello");
    EXPECT_EQ(trim("\thello\t"), "hello");
    EXPECT_EQ(trim("\nhello\n"), "hello");
}

TEST(StringUtilsTest, ToLower) {
    EXPECT_EQ(toLower("HELLO"), "hello");
    EXPECT_EQ(toLower("Hello"), "hello");
    EXPECT_EQ(toLower("123"), "123");
}

TEST(StringUtilsTest, ToUpper) {
    EXPECT_EQ(toUpper("hello"), "HELLO");
    EXPECT_EQ(toUpper("Hello"), "HELLO");
    EXPECT_EQ(toUpper("123"), "123");
}

TEST(StringUtilsTest, StartsWith) {
    EXPECT_TRUE(startsWith("hello", "he"));
    EXPECT_FALSE(startsWith("hello", "ab"));
    EXPECT_TRUE(startsWith("hello", ""));
}

TEST(StringUtilsTest, EndsWith) {
    EXPECT_TRUE(endsWith("hello", "lo"));
    EXPECT_FALSE(endsWith("hello", "ab"));
    EXPECT_TRUE(endsWith("hello", ""));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
    