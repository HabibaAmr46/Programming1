#include <iostream>

using namespace std;

int main()
{
    // NAME: Habiba Amr Mohamed, ID:20180083

   int x;
   float y;
    cout<<"WELCOME TO UNIT CONVERTER"<<endl;
    cout<<"Choose one from the options"<<endl;
    cout<< "1) Temperature in celsuis"<<endl;
    cout<< "2) Mass in kg"<<endl;
    cout<< "3) Length in meter"<<endl;
    cin>>x;
    switch (x){
    case 1:
        cout<<"Enter the value of temperature"<<endl;
        cin>>y;
        cout<<"Temperature in Fahrenheit= "<<(y*9/5)+32<<endl;
        cout<<"Temperature in Kelvin= "<<(y+273.15)<<endl;
        break;
    case 2:
        cout<<"Enter the value of mass"<<endl;
        cin>>y;
        cout<<"Mass in grams= "<<y*1000<<endl;
        cout<<"Mass in pounds= "<<y*2.205<<endl;
        cout<<"Mass in tons= "<<y/1000<<endl;
        break;
    case 3:
        cout<<"Enter the length in meter"<<endl;
        cin>>y;
        cout<<"The length in cm= "<<y*100<<endl;
        cout<<"The length in km= "<<y/1000<<endl;
        cout<<"The length in foot= "<<y*3.281<<endl;
        cout<<"The length in yard= "<<y*1.094<<endl;
        break;



    }
    return 0;
}

