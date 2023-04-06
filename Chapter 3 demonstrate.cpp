#include<iostream>
using namespace std;

int main()
{

int num = 10;
if(num > 5) {
  cout << "The number is greater than 5." << endl;
}

int num1 = 10;
if(num1 > 15) {
  cout << "The number is greater than 15." << endl;
}
else {
  cout << "The number is less than or equal to 15." << endl;
}


int num2 = 20;
if(num2 < 10) {
  cout << "The number is less than 10." << endl;
}
else if(num2 < 20) {
  cout << "The number is between 10 and 19." << endl;
}
else if(num2 < 30) {
  cout << "The number is between 20 and 29." << endl;
}
else {
  cout << "The number is greater than or equal to 30." << endl;
}


int num3 = 10;
int num4 = 20;
if(num3 > 5) {
  if(num4 > 15) {
    cout << " Both  numbers   are  greater   than their respective thresholds." << endl;
  }
  else {
    cout << "The second number is not greater than its threshold." << endl;
  }
}
else {
  cout << "The first number is not greater than  its threshold." << endl;
}



    return 0;
}