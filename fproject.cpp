#include <iostream>
#include <string>
#include "fHeader.h"
using namespace std;

int main(){

Calories c;
c.setAge(4);
cout << c.getAge() << endl;
 c.setBirthday();
 cout<<c.getAge() << endl;
return 0;
}
