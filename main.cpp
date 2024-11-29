#include <iostream>
#include <string>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 user_details(){
	cout<< "Hello, what is your name? \n";
	string name = "";
	cin>> name;
	cout<< "Alright "<< name << ", what year were you born ? \n";
	int year = 0;
	cin>> year;
		
	int age = 2024 - year;
	cout<< "Your age is " << age;
}



int main(int argc, char** argv) {
	user_details();      
}
