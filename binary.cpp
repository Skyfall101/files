#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
	ofstream out{"abc.bin"};
	if (out)
	{
   out.write(reinterpret_cast<short int>(a));
   out.write(reinterpret_cast<float>(b));
   out.write (reinterpret_cast<char*>(c));
}
   else
   {
   cout<<"could not write to file";
	}

   cout<<endl<<endl;
 
   return 0;
}//end main
