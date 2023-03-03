#include <iostream>
template <typename T>
void swap(T &a, T &b) 
{
  T temp = a;
  a = b;
  b = temp;
}

int main() {
 	int a , b ;
  	std::	cout<<" enter the a value:";
  	std::	cin>> a;
  	std::	cout<< "enter the b value:";
  	std:: cin >> b;
   	
  	swap(a, b);
  	
  	std::cout << "After swapping: \na = " << a << " \nb = " << b;

  return 0;
}

