#include "MyString.h"

// ###################   Student A  ######################

MyString::MyString(const MyString &string){  
/*copy constructor, takes a MyString Object and return a new Object with the same content*/

	const char* Cstring = string.c_str();
	length_ = len_(Cstring) + 1;
	string_ = new char[length_];
	memcpy(string_, Cstring, length_);
};

char* MyString::c_str() const { 
/* getter which return an array of characters */
	return string_;
};


size_t MyString::size() const{
/*Return the size of the content, same as the length() method*/
	size_t i = 0;
	while(string_[i]!='\0'){
		i++;
	}
	return i ;
};



void MyString::clear(){
/* 
Clear the content of a MyString Object, 
void * memset ( void * ptr, int value, size_t num  -> Fill block of memory; */

	memset (string_, 0, MyString::size() + 1);
};


/*MyString MyString::operator=(char c){
	;
};

MyString MyString::operator+(const char* str){
	;
};*/


// ############### STUDENT B ##################

MyString::MyString(){ 
/* Default Constructor which creates a array of chars "Hello World"*/ 

	char string[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r','l', 'd', '\0'};
	size_t i = 0;
	while(string[i] != '\0'){
		string_[i] = string[i];
		i++;
	}
	string_[i] = string[i];

};



MyString::MyString(const char* str){
/*Constructor that initializes a MyString object from a c-string passed as argument */

	 if ((str != NULL) && (str[0] != '\0')){
		size_t n = len_(str);
		string_ = new char[n+1];
		for (unsigned i=0; i < n+1; i++){
			string_[i] = str[i];
		}
		string_[n+1]='\0';
	}	
	else {
		string_ = new char[1];
		string_[1] = '\0';
		}
};


size_t MyString::max_size() const {
/* We fixed the maximun length of the content to 100*/
	return 100;
};


size_t MyString::len_(const char* str) const{
/*return the size for a c_string*/
	int i =0;
	while (str[i] != '\0'){
		i++;
	}
	return i;
};

size_t MyString::length() const{
//same as the size() method

	size_t i =0;
	while (string_[i] != '\0'){
		i++;
	}
	return i;

};


void MyString::resize(size_t n,char c){
/*
Resizes the string to a length of n characters.

If n is smaller than the current string length, the current value is shortened to its first n character, removing the characters beyond the nth.

If n is greater than the current string length, the current content is extended by inserting at the end as many characters as needed to reach a size of n. If c is specified, the new elements are initialized as copies of c, otherwise, they are value-initialized characters (null characters).

see more on http://www.cplusplus.com/reference/string/string/resize/
*/

	if (n <= MyString::max_size()){
		if (MyString::length() < n){

			char* My_New_String = new char [n];
			memcpy(My_New_String, string_, n);

		 	size_t i = MyString::length();
			while(i < n){
				My_New_String[i] = c;
				i++;
			}
			My_New_String[n] = '\0';
			string_ = new char[n];
			memcpy(string_, My_New_String, n);
		}
		else {
			char* My_New_String = new char[n];
			memcpy(My_New_String, string_, n);
			My_New_String[n] = '\0';
			string_ = new char[n];
			memcpy(string_, My_New_String, n);
		}
	}
};






MyString MyString::operator=(const MyString &string){
	if(this == &string){
		return *this;
	}
	else {
		length_ = len_(string.c_str()+1);
		string_  = new char[length_];
		for (unsigned i=0; i < length_; i++){
		   	string_[i] = string.c_str()[i];
		}
	}
    return *this;
};



MyString MyString::operator+(char c){
	length_ = MyString::length();
	if (length_ +1 < MyString::max_size()){
		char* c_ = new char[length_+2];
		for (unsigned i=0; i < length_ +2; i++){
		   	c_[i] = string_[i];
		}
			c_[length_] = c;
			c_[length_+1] = '\0';
			MyString My_New_String (c_);
			return My_New_String;
	}
	MyString My_New_String (string_);
	return My_New_String;
}; 



// ##################   Student C  #################

MyString::~MyString(){
	delete [] string_;
};























