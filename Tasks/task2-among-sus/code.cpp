#include <iostream>
#include <fstream>

using namespace std;

int main() {
  int ans=0,c=0;
  ifstream fin;
  fin.open("input.txt", ios::in);

  char my_character;

  while (!fin.eof() ) {

    fin.get(my_character);
    if(my_character=='*') ++c;
    else{
      if(c==4) ++ans;
      c=0;
    }
  }
  while(ans--) cout<<"sus"<<endl;
  return 0;
}
