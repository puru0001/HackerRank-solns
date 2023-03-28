#include <iostream>
#include <sstream>
using namespace std;

class Student
{
	private:
		int age, standard,a,b;
    	string first_name, last_name,c,d;
    public:	
    
	void set_age(int age) { a=age;}
	int get_age() { return a; }
	
	void set_standard(int standard) { b=standard; }
	int get_standard() { return standard; }
	
	void set_first_name(string first_name) { c=first_name; }
	string get_first_name() { return first_name; }
	
	void set_last_name(string last_name) { d=last_name; }
	string get_last_name() { return last_name; }
	
	to_string() 
	{ 
		int get_age(); { return a; }
		int get_standard(); { return standard; }
		string get_first_name(); { return first_name; }
		string get_last_name(); { return last_name; }
	}
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
