#include "Complex.h"
#include <iostream>

using namespace std;


int main(){
  Complex a;
  Complex b(1, 2);
  Complex c(b);
  cout << a << " " << b<<" "<<c<<" Constructors"<<endl;
  c.set(3, 4);
  cout << c.get()<<" set&&get "<<endl;
  Complex d;
  d = a + b;
  cout << d << " operator + "<<endl;
  d = d - b;
  cout << d << " operator - " << endl;
  d = c*b;
  cout << d << " operator * " << endl;
  d = c / b;
  cout << " operator / " << d << endl;
  d = b;
  cout << d << " operator = " << endl;
  cout << (d == b) << " operator == " << endl;
  cout << (a == b) << " operator == " << endl;

  Complex r;
  cin >> r;
  cout << r << " operator cin>> " << endl;

  return 0;
}