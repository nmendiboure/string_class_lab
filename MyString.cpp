#include "MyString.h"
#include <iostream>



//Student A
MyString::MyString(const MyString& string){ 

	length_ = string.length();
    string_   = new char[length_];
    for (unsigned j=0; j < length_; j++)
        string_[j] = s[j];


};


char* MyString::c_str(){

};


size_t MyString::size(){


};



void MyString::clear(){


};


MyString MyString::operator=(char c){



};

MyString MyString::operator+(const string&,const char* s){


};



//Student B

MyString::MyString(){ //constructeur par défaut

    length_ = max_size();
    string_  = new char[length_+1];
	string_ = {'H', 'e','l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd',' ','!', '\0'};

};



MyString::MyString(const char* c){

	 if (c) {

		int n = 0;
		while (c[n] != '\0'){
 			n++;
		}
		length_ = n;
		string_   = new char[n];
		for (int j=0; j < n; j++)
			string_[j] = c[j];
	}	
	else {
		length_ = 0;
		string_ = new char[0];
		}
};



size_t MyString::length(){

	return length;
};



size_t MyString::max_size(){
	size_t limit_size = 100;
	return limit_size;
};



void MyString::resize(size_t n,char c){


};


MyString MyString::operator=(const string&){



};



MyString MyString::operator+(const string&, char c){


};



//Student C



MyString::~MyString(){
	delete [] string_;

};























