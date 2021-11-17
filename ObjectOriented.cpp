/*Nested of Member functions in C++.*/
//OOPS  - classes and objects
    //C++ --> initially called .
    //C with classes by stroustroup.
    //class --> extension of srtructure(inC)
    // --> structure had limitaions.
    // --> members are public
    //mo methods.
    // classes --> can have method and properties.
    // Classes --> can make few members public and private.
    //Structure in C++ are typedefed
    //you can declare object right after the class declaration
    /*class employee{
	// class definiyion
	} */
#include<iostream>
#include<string> 
using namespace std;

  //Nesting Of Member Functions
class binary{
	
	string s;
	public:
		void read(void);
		void chk_bin(void);
		void ones_compliment(void);
		void display(void);
};    
void  binary:: read(void){
	cout << "Enter binary number" <<endl;
		cin  >> s;
		cout << endl;
}

void binary :: chk_bin(void){
	for(int i=0; i<s.length(); i++ )
	{
		if(s.at(i)!='0' && s.at(i)!='1'){
			cout << "incorrect binary format"  <<endl;
		    exit(0);
		}	
		
	}
}
void binary :: ones_compliment(void){
	for(int i=0; i<s.length(); i++ )
	{
		if(s.at(i)== '0'){
			s.at(i)='1';
		}
			else{
				s.at(i)='0';
		}
		
}
}
void binary :: display(void){
	cout << "displaying your binary number " << endl;
		for(int i=0; i<s.length(); i++ )
	{
		cout << s.at(i);
	}
}

    
    
int main(){
	binary b;
	b.read();
	b.chk_bin();
	b.ones_compliment();
	b.display();
	
}    
  
  
    
    
