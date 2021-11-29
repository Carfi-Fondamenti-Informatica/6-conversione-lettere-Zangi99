#include <iostream>
using namespace std;

int Funzione (char a){
    char b; bool flag;
if ((a>=65)&&(a<=90)){
flag=true;
b=a+32;
}
else if ((a>=97)&&(a<=122)){
flag=true;
b=a-32;
}
else{flag=false;}

if (flag==true){
cout<<b<<endl;}
else{cout<<"errore"<<endl;}
return flag;
}

int main () {
    char a;
    cin>>a;
    Funzione(a);

    return 0;
}

