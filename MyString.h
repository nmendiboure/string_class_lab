class MyString {
	
	protected : 
		char* string_; //pointeur vers notre le caracter alloué
		size_t len_(const char* s) const ; 

	public :
		//Student A : copy - constructor
		MyString (const MyString &string);
		char * c_str() const;
		void clear();
		size_t size() const; //size_t is an unsigned integral type (the same as member type string::size_type).
		MyString operator=(char c);
		MyString operator+(const char* string);

		//Student B : constructor from a c-string
		MyString(); 	//Default constructor
		MyString(const char* c); //MyString constructor
		size_t length() const;
		size_t max_size() const;
		void resize(size_t n, char c);
		MyString operator=(const MyString &string);
		MyString operator+(char c);

		//Student C : Destructor
		~MyString();	
	
};
