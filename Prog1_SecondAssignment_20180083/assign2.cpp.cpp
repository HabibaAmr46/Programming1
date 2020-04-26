#include <iostream>
#include<iomanip>
#include<cstring>

using namespace std;

void print(char name[][100],int b[],int i){

        cout<<setw(15)<<"Names";
        cout<<setw(15)<<"Balances";
        cout<<endl;
        cout<<endl;
        for (int z=0;z<i;z++)
            cout<<setw(15)<<name[z]<<setw(15)<<b[z]<<endl;

}
void balance_print(char name[][100],int b[],int i){
    string cust;
    int z;
    cout<<"Enter the name of the customer you want to print its balance"<<endl;
    cin>>cust;
    for( z=0;z<i;z++){
        if (cust==name[z]){
            cout<<"The balance of "<<cust<<" is= "<<b[z]<<endl;
        break;
        }
    }
    while (z==i){
        cout<<"The name you entered is not found"<<endl;
        cout<<"Please re-enter the name again"<<endl;
        cin>>cust;
    }
        for( z=0;z<i;z++){
        if (cust==name[z]){
            cout<<"The balance of "<<cust<<" is= "<<b[z]<<endl;
        break;
        }
    }
        }




void highest_balance(char name[][100],int b[],int i){
    int maxi=0;
    int z;
    for(z=0;z<i;z++){
        if(b[z]>maxi)
            maxi=b[z];
    }
    for(z=0;z<i;z++){
        if (maxi==b[z]){
            cout<<"The customer with highest balance is "<<name[z]<<endl;;
            break;
        }
    }

}
void edit_trans(char name[][100],int b[],int i){
    int z;
    string cust;
    char x;
    int d,w,trans;
    string y;
    cout<<"Enter the name of the customer you want to edit"<<endl;
        cin>>cust;
        for(z=0;z<i;z++){
            if(cust==name[z]){
                cust=name[z];
                break;
            }
        }
cout<<"Enter the number of transactions"<<endl;
cin>>trans;
if (trans>10){
    cout<<"You cannot enter more than 10 transactions"<<endl;
    cin>>trans;
}
cout<<"Enter the transactions"<<endl;
cout<<"Please enter D for deposit and W for withdraw"<<endl;
for(int i=0;i<trans;i++){
    cin>>x;
    if (x=='d'||x=='D'){
        cin>>d;
        while(d<0){
            cout<<"Enter valid transaction"<<endl;
            cin>>d;
        }

        b[z]+=d;
    }
    else if(x=='w'||x=='W')
    {
        cin>>w;
        while(w<0){
            cout<<"Enter vaid transaction"<<endl;
            cin>>w;
        }
        b[z]-=w;
    }
}
}
void account(char name[][100],char street[][100],char nei[][100],int b[],char city[][100],int i){
    string cust,opin,y;
    int z;
    cout<<"Please enter the name to want of the customer you want to edit"<<endl;
    cin>>cust;
    for(z=0;z<i;z++){
        if (cust==name[z])
            break;
    }
    cout<<"Do you want to change the name"<<endl;
    cin>>opin;
    if (opin=="Yes"||opin=="yes"){
    cout<<"Enter the new name"<<endl;
    cin>>name[z];
    }
    cout<<"Do you want to change the adress??"<<endl;
    cin>>opin;
    if (opin=="Yes"||opin=="yes"){
        char num[5];
        cout<<"Enter the new adress, The adress should follow the format number,street name,neighborhood,city"<<endl;
        cin>>num[z];
        cin.getline(street[z],200,',');
        cin.getline(nei[z],200,',');
        cin.getline(city[z],200);
        while(!isdigit(num[0])||street[z][0]=='\0'||nei[z][0]=='\0'||city[z][0]=='\0'){
        cout<<"ENTER VALID ADRESS"<<endl;
        cin>>num[z];
        cin.getline(street[z],200,',');
        cin.getline(nei[z],200,',');
        cin.getline(city[z],200);
    }
}
cout<<"Do you want to change the transactions??"<<endl;
cin>>opin;
if (opin=="Yes"||opin=="yes"){
    int d,w,trans=0;
    char x;
    b[z]=0;
cout<<"Enter the number of transactions"<<endl;
cin>>trans;
if (trans>10){
    cout<<"You cannot enter more than 10 transactions"<<endl;
    cin>>trans;
}
cout<<"Enter the transactions"<<endl;
cout<<"Please enter D for deposit and W for withdraw"<<endl;
for(int i=0;i<trans;i++){
    cin>>x;
    if (x=='d'||x=='D'){
        cin>>d;
        while(d<0){
            cout<<"Enter valid transaction"<<endl;
            cin>>d;
        }

        b[z]+=d;
    }
    else
    {
        cin>>w;
        while(w<0){
            cout<<"Enter vaid transaction"<<endl;
            cin>>w;
        }
        b[z]-=w;
    }
}

}
}

int main()
{
    // Name:Habiba Amr Mohamed , ID:20180083
    string y,opin,opinion;
    int d,w,balance,b[25],trans;
    char x,num[3],city[20][100],name[20][100],street[20][100],nei[20][100];
    int i=0;
    opin="yes";
    while ((opin=="yes"||opin=="Yes")&&i<20){
    cout<<"Please enter your name"<<endl;
    cin>>name[i];
    cout<<"Please enter your adress, The adress should follow the format number,street name,neighborhood,city."<<endl;
    cin>>num[i];
    cin.getline(street[i],200,',');
    cin.getline(nei[i],200,',');
    cin.getline(city[i],200);
    while(!isdigit(num[0])||street[i][0]=='\0'||nei[i][0]=='\0'||city[i][0]=='\0'){
        cout<<"ENTER VALID ADRESS"<<endl;
        cin>>num[i];
        cin.getline(street[i],200,',');
        cin.getline(nei[i],200,',');
        cin.getline(city[i],200);
}

balance=0;
cout<<"Enter the number of transactions"<<endl;
cin>>trans;
if (trans>10){
    cout<<"You cannot enter more than 10 transactions"<<endl;
    cin>>trans;
}
cout<<"Enter the transactions"<<endl;
cout<<"Please enter D for deposit and W for withdraw"<<endl;
for(int h=0;h<trans;h++){
    cin>>x;
    if (x=='d'||x=='D'){
        cin>>d;
        while(d<0){
            cout<<"Enter valid transaction"<<endl;
            cin>>d;
        }

        balance+=d;
    }
    else
    {
        cin>>w;
        while(w<0){
            cout<<"Enter vaid transaction"<<endl;
            cin>>w;
        }
        balance-=w;
    }
}

    b[i]=balance;
    i++;
    cout<<"Do you want to enter another account"<<endl;
    cin>>opin;
    }
do{
cout<<"Please choose one of these options:"<<endl;
cout<<endl;
cout<<"1) To print all names and account balances"<<endl;
cout<<"2) To print specific customer account balance"<<endl;
cout<<"3) To edit customer transactions"<<endl;
cout<<"4) To show customer with highest balance"<<endl;
cout<<"5) To change customer name, transactions, balance, or address"<<endl;
cout<<"6) To show how many customers in one city"<<endl;
int e;
string cust;
cin>>e;
switch(e){
    case 1:
      print(name,b,i);
      break;
    case 2:
      balance_print(name,b,i);
        break;
    case 3:
    edit_trans(name,b,i);
     break;

    case 4:
        highest_balance(name,b,i);
        break;

    case 5:
        account(name,street,nei,b,city,i);
        break;
    case 6:
        char ci[10];
        cout<<"Please enter the name of the city"<<endl;
        cin>>ci;
        int n=0;
        for(int z=0;z<i;z++){
        if(strcmp(ci,city[z])==0){
            n++;
        }
        }
        cout<<"The number of customers in this city= "<<n<<endl;
        break;
}
cout<<"Do you want to do another action??"<<endl;
cin>>opinion;
}while(opinion=="yes"||opinion=="Yes");
cout<<"Thanks for using our program!!"<<endl;
    return 0;
}
