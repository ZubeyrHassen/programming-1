#include<iostream>
using namespace std;
int main()
{
// OPERATOR '+'
int a,b;
cout <<"Enter the first number"<<endl;
cin >>a;
cout <<"Enter the second number"<<endl;
cin >>b;
cout <<"The sum number is "<<a+b<<endl ;
/* OPERATOR '-' */
int c,d;
cout <<"Enter the first number"<<endl;
cin >>c;
cout <<"Enter the second number"<<endl;
cin >>d;
cout <<"The difference number is "<<c-d<<endl ;
/* OPERATOR '*' */
int e,f;
cout <<"Enter the first number"<<endl;
cin >>e;
cout <<"Enter the second number"<<endl;
cin >>f;
cout <<"The Multiplication number is "<<e*f<<endl;
// OPERATOR '/' 
int g,h;
cout <<"Enter the first number"<<endl;
cin >>g;
cout <<"Enter the second number"<<endl;
cin >>h;
cout <<"The division number is "<<g/h<<endl ;
// OPERATOR '%'
int i,j;
cout <<"Enter the first number"<<endl;
cin >>i;
cout <<"Enter the second number"<<endl;
cin >>j;
cout <<"The remainder number is "<<i%j<<endl ;
//LOGICAL OPERATOR '!'(not)
bool l=true;
cout <<l<<endl ;//it outs 1
cout <<!l<<endl ;//it outs 0
//LOGICAL OPERATOR "&&"(and)
bool n=true;
bool o=false;
if(n&&o);//the if will execute if and only if both are true
//LOGICAL OPERATOR "||"(or)
int m=5;
if(m==2 || m==5){
cout <<m<<endl ;
}//This code will be executed because m is equal to 5
// pre increment 
int q=7;
cout <<++q<<endl;
//post increment 
int r=4;
cout <<r++<<endl;
// pre decrement 
int p=3;
cout <<--p<<endl;
int v=9;
cout <<v--<<endl;
//precedence of operator 
int x=1,y=2,z=6,w=8;
cout <<x+y/w*z-x<<endl;


    return 0;
}