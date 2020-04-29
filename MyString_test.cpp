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
	MyString string4("AZERTYUIOP");
	string4=string4+'\0';
	EXPECT_STREQ(string4.c_str(), "AZERTYUIOP");
};
//test de la fonction à corriger
TEST(GTestTests, StringConcatenationOperatorTest) {
	MyString s("AZERTYUIOP");
	char* test=new char[100000];
	for(int i=0;i<100000;i++){
		test[i]='a';
	}
	test[100000]='\0';
	MyString v=s+test;
	
	EXPECT_STREQ(v.c_str(), "AZERTYUIOP");

	char* test2=new char[5];
	for(int i=0;i<5;i++){
		test2[i]='a';
	}
	test[5]='\0';
	MyString p=s+test2;
	EXPECT_STREQ(p.c_str(), "AZERTYUIOPaaaaa");

};

