#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
	ofstream file{"abc.txt"};
	
	if(file){
		file << a << " " << b << " " << c;
	}else{
		cout << "Error opeing file";
	}
	
   return 0;
}
