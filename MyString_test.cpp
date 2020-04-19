#include "gtest/gtest.h"
#include "MyString.cpp"

TEST(GTestTests, DefautlConstructorTest) {
	MyString string;
	const char* Cstring = string.c_str();
	EXPECT_STREQ(Cstring, "Hello World");
}

TEST(GTestTests, CopyConstructorTest) {
	MyString string("Hello World");
	MyString cpy_string(string);
	EXPECT_STREQ(string.c_str(), cpy_string.c_str());

	MyString empty_string("");
	MyString cpybis_string(empty_string);
	EXPECT_STREQ(empty_string.c_str(), cpybis_string.c_str());
};

TEST(GTestTests, CStrTest) {
	MyString string("Hello World");
	EXPECT_STREQ(string.c_str(), "Hello World");
};

TEST(GTestTests, ClearTest) {
	MyString string("Hello World");
	string.clear();
	EXPECT_STREQ(string.c_str(), "");
	size_t expected_size = 0;
	EXPECT_EQ(string.size(), expected_size);
};



