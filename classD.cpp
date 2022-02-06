#include <iostream>
using namespace std;

class D{
public:
  D(int D1, int D2);

  void MD1();
  void MD2();
  void MD4();
private:
  int D1;
  int D2;
};

D::D(int D1, int D2){
  this->D1=D1;
  this->D2=D2;
}

void D::MD1(){
  cout << "MD1()" << endl;
}
void D::MD2(){
  cout << "MD2()" << endl;
}
void D::MD4(){
  cout << "MD4()" << endl;
}

int main(){

return 0;
}
