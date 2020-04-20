#include "gtest/gtest.h"
#include "MyString.cpp"
#include <iostream>
TEST(GTestTests, DefautlConstructorTest) {
	MyString string;
	/*bool check=1;
	char test[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r','l', 'd','\0'};
	char stringtest[]= string.c_str(); 
	for(int i=0; i<string.length();i++){
		if(stringtest[i]!=test[i]){
		check=0;
		};
	};
	EXPECT_TRUE(check);
	*/
	const char* Cstring = string.c_str();
	EXPECT_STREQ(Cstring, "Hello World");
};

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


TEST(GTestTests, CharAssignementOperatorTest) {
	MyString string;
	string='c';
	EXPECT_STREQ(string.c_str(), "c");
};

TEST(GTestTests, MyStringAssignementOperatorTest) {
	MyString string;
	MyString string2("AZERTYUIOP");
	string=string2;
	EXPECT_STREQ(string2.c_str(), string.c_str());
	EXPECT_STREQ(string.c_str(), "AZERTYUIOP");
};

TEST(GTestTests, CharConcatenationOperatorTest) {
	MyString string3("AZERTYUIOP");
	string3=string3+'z';
	EXPECT_STREQ(string3.c_str(), "AZERTYUIOPz");
};
//test de la fonction à corriger
TEST(GTestTests, StringConcatenationOperatorTest) {
	MyString s("AZERTYUIOP");
	char* test=new char[4];
	for(int i=0;i<3;i++){
		test[i]='a';
	}
	test[3]='\0';
	s=s+test;
	EXPECT_STREQ(s.c_str(), "AZERTYUIOPaaa");
};

