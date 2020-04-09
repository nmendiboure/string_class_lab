CXXFLAGS= -Wall

MyString_test.o: MyString_Test.cpp
        g++  MyString_test.cpp -o MyString_test.o
MyTest: MyString_test.o
        g++  MyString_test.o -o MyTest

