#include<iostream>
using namespace std;
class Game{
  public:
    string name;
    float gb;

    Game(string name, float gb){
      this->name=name;
      this->gb=gb;
    }
};
int main(){
  Game part1("OTG",56);
  Game part2 ("Valo",46);

  cout<<part1.name<<" "<<part1.gb<<endl;
  cout<<part2.name<<" "<<part2.gb<<endl;
  
  

}
