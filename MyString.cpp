#include "MyString.h"
#include <cstring>

//Student A
MyString::MyString(const MyString &string){  //copy constructor

	/*length_ = string.length();
    string_  = new char[length_];
	for (int i=0; i<length_; i++){
		string_[i] = string[i];
	}
	string_[length_]='\0';*/

	string_ = new char[string.length() +1];
    //strcpy(string_, string.c_str());
	memcpy(string_,const string,string.length()+1);


};

char* MyString::c_str() const { // getter which return an array of char 
	return string_;
};


size_t MyString::size() const{
	size_t size;
	size = 0;
	size_t i = 0;
	while(string_[i]!='\0'){
		size += 1;
		i++;
	}
	return size;
};



void MyString::clear(){
	;
};


MyString MyString::operator=(char c){
	;
};

MyString MyString::operator+(const char* string){
	;
};



//Student B

MyString::MyString(){ //constructeur par défaut

	char string[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r','l', 'd', '\0'};
	size_t i = 0;
	while(string[i] != '\0'){
		string_[i] = string[i];
		i++;
	};
	string_[i] = string[i];

};



MyString::MyString(const char* c){

	 if ((c != NULL) && (c[0] != '\0')){

		int n = 0;
		while (c[n] != '\0'){
 			n++;
		}

		length_ = n;
		string_ = new char[n];
		for (int j=0; j < n; j++){
			string_[j] = c[j];
		}
		string_[n]='\0';
	}	
	else {
		length_ = 0;
		string_ = new char[0];
		}
};


size_t MyString::max_size() const {
	return 100;
};


size_t MyString::length() const {

	size_t len;
	len = 0;
	size_t i = 0;
	while(string_[i]!='\0'){
		len += 1;
		i++;
	}
	return len;

};


void MyString::resize(size_t n,char c){
	size_t len = MyString::length();
	if (len < MyString::max_size() - n) {
		len += n;
		for (int i = n; i = len - 1; i--){
			string_[i] = c;
		}
	}
};






MyString MyString::operator=(const MyString &string){
	;
};



MyString MyString::operator+(char c){
	;
};



//Student C

MyString::~MyString(){
	delete [] string_;
};























