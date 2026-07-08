#include<iostream>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    char op;
    cin>>op;
    int n2;
    cin>>n2;
    if(op=='+') cout<<n1+n2;
    if(op=='-') cout<<n1-n2;
    if(op=='*') cout<<n1*n2;
    if(op=='/') cout<<n1/n2;
}

#include<iostream>
using namespace std;
int main(){
    int n1;
    cin>>n1;
    char op;
    cin>>op;
    int n2;
    cin>>n2;
    switch(op){
        case '+':
            cout<<n1+n2<<endl;
            break;
        case '-':
            cout<<n1-n2<<endl;
            break;
        case '*':
            cout<<n1*n2<<endl;
            break;
        case '/':
            cout<<n1/n2<<endl;
            break;
        default:
            cout<<"Invalid operator"<<endl;
    }
}

#include<iostream>
using namespace std;
int main(){
    int x=3,y=5;
    if(x==3)
    printf("\n%d",x); //cout<<x<<endl;
    else;
    printf("\n%d",y); //cout<<y<<endl;
}

#include<iostream>
using namespace std;
int main(){
    int x=3,y,z;
    y=x=10;   //right to left it runs
    z=x<10;   //x<10 is a comparision and inn this case it is false so answer is zero in this case
    cout<<x<<" "<<y<<" "<<z;
}
