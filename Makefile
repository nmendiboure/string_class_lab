CXXFLAGS= -Wall

MyString_test.o: MyString_test.cpp 
	g++ $(CXXFLAGS) -c MyString_test.cpp -o MyString_test.o -Igoogletest-release-1.10.0/googletest/include/ -std=c++11 

MyTest: MyString_test.o
	g++ $(CXXFLAGS) -o run_tests MyString_test.o googletest-release-1.10.0/build/lib/libgtest.a googletest-release-1.10.0/build/lib/libgtest_main.a -pthread

