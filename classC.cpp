#include <iostream>
using namespace std;

class C{
public:
  C();
  
  void MC1();
  void MC2();
  void MC3();
private:
  string C1;
  int C2;
}
C::C(string C1, int C2){
  this->C1=C1;
  this->C2=C2;
}


void C::MC1(){
  cout << "MC1()" << endl;
}
void C::MC2(){
  cout << "MC2()" << endl;
}
void C::MC3(){
  cout << "MC3()" << endl;
}

int main(){

return 0;
}