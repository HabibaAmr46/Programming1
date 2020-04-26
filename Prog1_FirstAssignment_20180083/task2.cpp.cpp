#include <iostream>

using namespace std;

int main()
// Name:Habiba Amr Mohamed,ID:20180083
{
    float S,M,L,total=0;
    string top,opin;
    char si;
    int x,quan;
    do{
    cout<<"WELCOME TO OUR PIZZA RESTAURANT!!!"<<endl;
    cout<<"PLEASE SELECT ONE OF THESE ITEMS"<<endl;
    cout<<"1- SUPER SUPREME - S=50 /M=75.5/ L=100"<<endl;
    cout<<"2- CHICKEN SUPREME - S=45/ M=73.88/ L=97.99"<<endl;
    cout<<"3- MARGHERITA - S=35/ M=70/ L=95"<<endl;
    cout<<"4- CHEESE LOVERS - S=60.96/ M=87.75/ L=113.16"<<endl;
    cout<<"5- SEA FOOD LOVERS - S= 64.47/ M=94.30/ L=123.25"<<endl;
    cin>>x;
    switch(x){
    case 1:
        S=50,M=75.5,L=100;
        cout<<"You select SUPER SUPREME"<<endl;
        cout<<"Enter the quantity"<<endl;
        cin>>quan;
        cout<<"Enter the size"<<endl;\
        cin>>si;
        if (si=='s'||si=='S')
            total+=quan*S;

        else if (si=='m'||si=='M')
            total+=quan*M;

        else if (si=='L'||si=='l')
            total+=quan*L;
        break;



    case 2:

        S=45,M=73.88,L=97.99;
        cout<<"You select CHICKEN SUPREME"<<endl;
        cout<<"Enter the quantity"<<endl;
        cin>>quan;
        cout<<"Enter the size"<<endl;\
        cin>>si;
        if (si=='s'||si=='S')
            total+=quan*S;

        else if (si=='m'||si=='M')
            total+=quan*M;

        else if (si=='L'||si=='l')
            total+=quan*L;
            break;

    case 3:
        S=35,M=70,L=95;
        cout<<"You select MARGHERITA"<<endl;
        cout<<"Enter the quantity"<<endl;
        cin>>quan;
        cout<<"Enter the size"<<endl;\
        cin>>si;
        if (si=='s'||si=='S')
            total+=quan*S;

        else if (si=='m'||si=='M')
            total+=quan*M;

        else if (si=='L'||si=='l')
            total+=quan*L;
            break;

    case 4:
          S=60.96,M=87.75,L=113.16;
         cout<<"You select CHEESE LOVERS"<<endl;
        cout<<"Enter the quantity"<<endl;
        cin>>quan;
        cout<<"Enter the size"<<endl;\
        cin>>si;
        if (si=='s'||si=='S')
            total+=quan*S;

        else if (si=='m'||si=='M')
            total+=quan*M;

        else if (si=='L'||si=='l')
            total+=quan*L;

        break;


    case 5:

        S= 64.47,M=94.30,L=123.25;
        cout<<"You select SEA FOOD LOVERS"<<endl;
        cout<<"Enter the quantity"<<endl;
        cin>>quan;
        cout<<"Enter the size"<<endl;\
        cin>>si;
        if (si=='s'||si=='S')
            total+=quan*S;

        else if (si=='m'||si=='M')
            total+=quan*M;

        else if (si=='L'||si=='l')
            total+=quan*L;
            break;



    }
    cout<<"Do you want extra topping??"<<endl;
    cin>>opin;
    if(opin=="yes"||opin=="Yes"){
        cout<<"Please select one ( mushroom = 10, onion =5 , sausage =10)"<<endl;
        cin>>top;
        if (top=="mushroom"||top=="Mushroom")
            total+=quan*10;
        else if (top=="onion"||top=="Onion")
            total+=quan*5;
        else if (top=="sausage"||top=="Sausage")
            total+=quan*10;
        }
    cout<<"Do you want another item??"<<endl;
    cin>>opin;
     }while(opin=="yes"||opin=="Yes");

    cout<<"Thank you for using our application your bill="<<total;

    return 0;
}

