#include<iostream>
using namespace std;

class OnnaNoHimitsu
{
  public:
    char *namae;
    OnnaNoHimitsu(const char *namae,int age);
    ~OnnaNoHimitsu();
    int getAge();
  protected:
    int age;
};

int main(){
  OnnaNoHimitsu himitsu1("Marie",42);
  cout<<himitsu1.getAge()<<endl;
}

OnnaNoHimitsu::OnnaNoHimitsu(const char *namae,int age){
  this->namae=(char *)namae;
  this->age=age;
}

OnnaNoHimitsu::~OnnaNoHimitsu(){

}

int OnnaNoHimitsu::getAge(){
  //Women do not tell their true age
  return this->age/2;
}
