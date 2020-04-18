#include "MyString.h"

// ###################   Student A  ######################

MyString::MyString(const MyString &string){  //copy constructor

	const char* Cstring = string.c_str();
	size_t length_ = len_(Cstring) + 1;
	string_ = new char[length_];
	memcpy(string_, Cstring, length_);
};

char* MyString::c_str() const { // getter which return an array of char 
	return string_;
};

size_t MyString::size() const{
	size_t i = 0;
	while(string_[i]!='\0'){
		i++;
	}
	return i ;
};



void MyString::clear(){
// void * memset ( void * ptr, int value, size_t num  -> Fill block of memory;
	
	memset (string_, 0, MyString::size() + 1);
};


MyString MyString::operator=(char c){
	;
};

MyString MyString::operator+(const char* string){
	;
};


// ############### STUDENT B ##################

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

		size_t n = len_(c);
		string_ = new char[n+1];
		for (int i=0; i < n+1; i++){
			string_[i] = c[i];
		}
		string_[n+1]='\0';
	}	
	else {
		string_ = new char[1];
		string_[1] = '\0';
		}
};


size_t MyString::max_size() const {
	return 100;
};


size_t MyString::len_(const char* s) const{
	int i =0;
	while (s[i] != '\0'){
		i++;
	}
	return i;

};

size_t MyString::length() const{
	int i =0;
	while (string_[i] =! '\0'){
		i++;
	}
	return i;

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



// ##################   Student C  #################

MyString::~MyString(){
	delete [] string_;
};























