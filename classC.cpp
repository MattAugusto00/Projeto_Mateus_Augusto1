#include <iostream>
using namespace std;

class C{
public:
  C();
  
  void MC1();
  void MC2();
private:
  string C1;
  int C2;
}
C::C(string C1, int C2){
  this->C1=C1;
  this->C2=C2;
}


void B::MC1(){
  cout << "MC1()" << endl;
}
void B::MC2(){
  cout << "MC2()" << endl;
}

int main(){

return 0;
}