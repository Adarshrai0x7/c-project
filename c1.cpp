#include<iostream>
using namespace std;

int main(){
  double n1 ,n2 , r;
  char sym; int option;
   cout<<"choose the type of operation"<<endl;
   cout<<"aritematics(1)"<<endl;cout<<"factorial(2)"<<endl;cout<<"trignomatric(3)"<<endl;cout<<"square root(4)";
   cin>>option;
if(option==1){
  cout<<"enter n1, then enter operation +,-,*,/,%,^ ,then enter n2"<<endl;
  cin>>n1>>sym>>n2;
  if( sym=='+'){
    r = n1+n2;}
  else if ( sym=='-'){
   r=n1-n2;}
  else if ( sym=='*'){
   r=n1*n2;}
  else if ( sym=='/'){
   r=n1/n2;}
  else if ( sym=='%'){
  int num1=n1;
  int num2=n2;
   r=num1%num2;}
  else if ( sym=='^'){ r=1;
  if(n2<0){ 
    n2=-n2;
    n1=1.0/n1;

  }
    for(int i=0;i<n2 ; ++i){
     r*=n1;
 }
   }
   cout<<"the result is " <<r;
   }

if(option==2){ 
  cout<<"enter n1"<<endl;
  cin>>n1;
  r=1; 
  for(int i=1;i<=n1;++i){
    r*=i;
  }
cout<<"the result is " <<r;
 }
 if(option==3){
 float x;
 double sin ,cos ,tan,cot,sec,cosec;
 
 cout<<"select sin(1) or cos(2) or tan(3) or cot(4) or cosec(5) or sec(6)";
 int a;
 cin>>a;
 cout<<"the angle in radians in {0,1} ";
 cin>>x;
 sin=(x) - ((x*x*x)/(3*2*1)) + ((x*x*x*x*x)/120) - ((x*x*x*x*x*x*x)/(7*720)) + ((x*x*x*x*x*x*x*x*x)/(9*8*7*720)) - (x*x*x*x*x*x*x*x*x*x*x)/(11*10*9*8*7*720) ;
 cos=1 - ((x*x)/(2*1)) + ((x*x*x*x)/24) - ((x*x*x*x*x*x)/(720)) + ((x*x*x*x*x*x*x*x)/(8*7*720)) - (x*x*x*x*x*x*x*x*x*x)/(10*9*8*7*720) ;
 tan=(sin)/(cos);
 cot=1/tan; 
 cosec=1/sin;
 sec=1/cos;

 if(a==1){cout<<"the value of sinx is "<<sin<<endl;
  
 }
 else if (a==2)
 {cout<<"the value of cosx is " <<cos<<endl;
  
 }
 else if (a==3)
 {
  cout<<"the value of tanx is "<<tan<<endl;
 }
 else if (a==4)
 {
  cout<<"the value of cot is "<<cot<<endl;
 }
 else if (a==5)
 {
  cout<<"the value of cosec is "<<tan<<endl;
 }
 else if (a==6)
 {
  cout<<"the value of sec is "<<tan<<endl;
 }
 
 }
 
  return 0;
  }
