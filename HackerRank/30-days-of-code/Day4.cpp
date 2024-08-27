// https://www.hackerrank.com/challenges/30-class-vs-instance/problem?isFullScreen=true
using namespace std;
#include <iostream>

class Person{
    public:
        int age;
        Person(int initialAge);
        void amIOld();
        void yearPasses();
    };

    int ag;
    Person::Person(int initialAge){
        // Add some more code to run some checks on initialAge
        ag = initialAge;
    }

    void Person::amIOld(){
        // Do some computations in here and print out the correct statement to the console 
        if (ag < 0) {
            cout << "Age is not valid, setting age to 0.\n";
            ag = 0;
        }
        if (ag < 13) {
            cout << "You are young.\n";
        } else if (ag < 18) {
            cout << "You are a teenager.\n";
        } else {
            cout << "You are old.\n";
        }
    }

    void Person::yearPasses(){
        // Increment the age of the person in here
        ag++;
    }

int main(){
    int t;
	int age;
    cin >> t;
    for(int i=0; i < t; i++) {
    	cin >> age;
        Person p(age);
        p.amIOld();
        for(int j=0; j < 3; j++) {
        	p.yearPasses(); 
        }
        p.amIOld();
      
		cout << '\n';
    }

    return 0;
}