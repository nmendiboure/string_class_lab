class MyString {
	
	protected : 
		char* string_; //pointeur vers notre le caracter alloué
		int length_;  // taille du string

	public :
		//Student A : copy - constructor

		MyString (MyString &string);
		char * c_str()
		void clear()
		size_t size(); //size_t is an unsigned integral type (the same as member type string::size_type).
		MyString operator=(char c);
        MyString operator+(const string&, const char* c);

		//Student B : constructor from a c-string

		MyString(); 	//Default constructor
		MyString(char &string); //MyString constructor
		size_t length();
		size_t max_size();
		void resize(size_t n, char c);
		operator=(const string&);
		operator+(const string&, char c);


		//Student C : Destructor
		~MyString();
		size_t capacity();
		bool empty();
		void reserve(size_t);
		operator=(const char* c);
		operator+(const string&, const string&);

};
