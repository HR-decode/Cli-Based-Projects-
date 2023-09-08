#include <iostream>
using namespace std;
int main() {
  int c,f,k,tempType;
  cout<<"Enter Temperature Type: "<<endl;
  cin>>tempType;
  if(tempType==0){
    int tempValue;
    cout<<"Enter your temperature in Celsius scale: "<<endl;
    cin>>tempValue;
    f=((tempValue*9)/5)+32;
    k=tempValue + 273;
    cout<<"Celsius Scale: "<<tempValue<<endl;
    cout<<"Farenheit scale: "<<f<<endl;
    cout<<"Kelvin scale: "<<k<<endl;
  }else if(tempType==1){
    int tempValue;
    cout<<"Enter your temperature in Fahrenheit scale: "<<endl;
    cin>>tempValue;
    c=(((tempValue-32)*5)/9);
    k=(((tempValue-32)/9)*5)+273;
    cout<<"Celsius scale: "<<c<<endl;
    cout<<"Farenheit Scale: "<<tempValue<<endl;
    cout<<"Kelvin scale: "<<k<<endl;
  }else if(tempType==2){
    int tempValue;
    cout<<"Enter your temperature in kelvin scale: "<<endl;
    cin>>tempValue;
    c=tempValue-273;
    f=(((tempValue-273)/5)*9)+32;
    cout<<"Celsius scale: "<<c<<endl;
    cout<<"Farenheit scale: "<<f<<endl;
    cout<<"Kelvin Scale: "<<tempValue<<endl;
  }else{
    
  }
}
