#include<iostream>
 namespace rohit
 {
 	void fun()
 	{
 		std::cout<<"Inside fun";
 	}
 }
  namespace nale
 {
 	void fun()
 	{
 		std::cout<<"Inside fun";
 	}
 }
 int main(int argc, char const *argv[])
 {
 	using namespace rohit;
 	using namespace nale;
 	nale::fun();
 	return 0;
 }