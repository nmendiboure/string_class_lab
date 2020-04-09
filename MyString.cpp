#include "MyString.h"

//Student A
MyString::MyString(const MyString& string){  //copy constructor

	length_ = string.length();
    string_   = new char[length_];
    for (int j=0; j < length_; j++)
        string_[j] = string[j];
};


char* MyString::c_str(){ // getter du copy constructeur
	return string_;
};


size_t MyString::size(){
	return length;
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
    string_ = new char[length_+1];
	string_= {'H', 'e','l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd',' ','!', '\0'};

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
	return 100;
};



void MyString::resize(size_t n,char c){
	if (string_.length() < string_max_size() - n) {
		string_.length() += n;
		for (int i = n; i = string_.length() - 1; i--){
			string_[i] = c;
		}
	} else {
		return 0;
	}
	

	

};


MyString MyString::operator=(const string&){



};



MyString MyString::operator+(const string&, char c){


};



//Student C



MyString::~MyString(){
	delete [] string_;

};























