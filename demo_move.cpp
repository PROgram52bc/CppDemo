#include <iostream>
#include <string>
#include <cstring>

class T {
	private:
		char* data;
	public:
		T() {
			log("default constructor");
			data = new char[1]{0};
		}
		T(const char* src) {
			log("constructor");
			int len = strlen(src);
			data = new char[len+1];
			strncpy(data, src, len);
		}
		~T() {
			if (data) {
				delete[] data;
				log("destructor destroying resource");
			}
			else {
				log("destructor with empty data");
			}
		}
		T(const T& other) {
			log("copy constructor");
			int len = strlen(other.data);
			data = new char[len+1];
			strncpy(data, other.data, len);
		}
		T(T&& other) {
			log("move constructor");
			data = other.data;
			other.data = nullptr;
		}
		T& operator=(const T& other) {
			log("copy assignment operator");
			if (this != &other) {
				delete[] data;
				int len = strlen(other.data);
				data = new char[len+1];
				strncpy(data, other.data, len);
			}
			return *this;
		}
		T& operator=(T&& other) {
			log("move assignment operator");
			data = other.data;
			other.data = nullptr;
		}

		void log(const char* msg) {
			std::cout << "[" << this << "]" << msg << std::endl;
		}
};
T factory() {
	T t1 = T("tmp");
	return t1;
}

int main() {
	/* Normal example
	T t = T("t"); // normal constructor
	// */
	
	/* Move assignment example
	T t2; // default constructor
	t2 = T("tmp"); // move assignment
	// */
	
	/* Move constructor
	// Quick note: std::move(t1) means abandoning contents in t1.
	// In this case, t1 is passed in as an rvalue (whose content we don't care about)
	// So in the move constructor, we abandon contents in t1 and put it in t3.
	T t1 = T("t1"); // normal constructor
	T t3 = std::move(t1); // move constructor, moving t1 into t3
	// */
	
	///* rvalue reference
	T t4 = T("t4"); // normal constructor
	T&& rt4 = std::move(t4); // rvalue reference
	T t5 = rt4; // copy constructor called. rt4 not considered rvalue, because it has a name.
	// doing something here with rt4 is still possible, therefore rt4 is not "abandoned" as an r-value, even though it is declared as an r-value reference
	// */

	return 0;
}

