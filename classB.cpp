#include <iostream>
using namespace std;

class B{
public:
  B(int B1, float B2);
  void setB1(int B1);
  void setB2(float B2);
  int getB1();
  float getB2();

  void MB1();
  void MB2();
private:
  int B1;
  float B2;
};
//construtor classe B
B::B(int B1, float B2){
  this->B1=B1;
  this->B2=B2;
}
//metodos set
void B::setB1(int B1){
  this->B1=B1;
}
void B::setB2(float B2){
  this->B2=B2;
}
//metodos get
int B::getB1(){
  return B1;
}
float B::getB2(){
  return B2;
}
//metodos MBx
void B::MB1(){
  cout << "MB1()" << endl;
}
void B::MB2(){
  cout << "MB2()" << endl;
}

int main(){

return 0;
}
