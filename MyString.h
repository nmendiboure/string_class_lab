#include<cstddef>
class MyString {
	
	protected : 
		char* string_; //pointeur vers notre le caracter alloué
		int length_;  // taille du string

	public :
		//Student A : copy - constructor

		MyString (const MyString& s);
		char * c_str();
		void clear();
		size_t size(); //size_t is an unsigned integral type (the same as member type string::size_type).
		MyString operator=(char c);
		

		//Student B : constructor from a c-string

		MyString(); 	//Default constructor
		MyString(char &string); //MyString constructor
		size_t length() const;
		size_t max_size() const;
		void resize(size_t n, char c);
		MyString operator=(const MyString&);
		


		//Student C : Destructor
		~MyString();
		size_t capacity();
		bool empty();
		void reserve(size_t);
		MyString operator=(const char* c);
		

};
MyString operator+(const MyString&,const char* c); //un opérateur à deux arguments doit être déclaré en dehors de la classe
MyString operator+(const MyString& , char c);//un opérateur à deux arguments doit être déclaré en dehors de la classe


//MyString operator+(const MyString& a, const MyString& b); //un opérateur à deux arguments doit être déclaré en dehors de la classe
