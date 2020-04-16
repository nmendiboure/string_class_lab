#include<iostream>
#include "gtest/gtest.h"
#include "MyString.cpp"
TEST(GTestTests, DummyTest) {
	MyString string;
	bool check = true;
	char* c_string = string.c_str();
	char hello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r','l', 'd', '\0'};
	short int i = 0;
	while(c_string[i] != '\0' && hello[i] != '\0'){
		if (c_string[i] != hello[i])
		{
			check = false;
		}
		i++;
	}
	EXPECT_TRUE(check);
}



