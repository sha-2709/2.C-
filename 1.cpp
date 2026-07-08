#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    if (n%2==0) cout<<"Even";
    if (n%2!=0) cout<<"Odd";
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (n%2==0)
        cout<<"Even number";  
    else 
        cout<<"Odd number"<<endl;
        cout<<"Wow";
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (n%2==0)
    {
         cout<<"Even number";
    }   
    else 
    {
        cout<<"Odd number"<<endl;
        cout<<"Wow";
    }

}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (n%5==0)
    {
        cout<<"Divisible by 5";
    }
    else
    {
        cout<<"Not divisible by 5";
    }
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Absolute value of the number is: ";
    if (n>0)
        cout<<n;
    else
        cout<<-n;
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n<0) n=-n;
    cout<<"Absolute value of the number is : "<<n;
}

#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    if(sp>cp)
    {
         cout<<"Profit : "<<sp-cp;
    }
    if(sp<cp)
    {
        cout<<"Loss : "<<cp-sp;
    }
    if(sp==cp)
    {
        cout<<"No profit no loss ";
    }
}

#include<iostream>
using namespace std;
int main(){
    int cp,sp;
    cout<<"Enter cost price: ";
    cin>>cp;
    cout<<"Enter selling price: ";
    cin>>sp;
    if(sp>cp){
         cout<<"Profit : "<<sp-cp;
    }
    else if(sp<cp){
        cout<<"Loss : "<<cp-sp;
    }
    else{
        cout<<"No profit no loss ";
    }
}

#include<iostream>
using namespace std;
int main(){
    float l,b,A,P;
    cout<<"Enter length of the rectangle: ";
    cin>>l;
    cout<<"Enter breadth of the rectangle: ";
    cin>>b;
    A=l*b;
    P=2*(l+b);
    if(A>P){
        cout<<"Area is greater than perimeter"<<endl;
    }
    else if(A<P){
        cout<<"Area is lesser than perimeter"<<endl;
    }
    else{
        cout<<"Area is equal to perimeter"<<endl;
    }
    cout<<"Area of rectangle: "<<A<<endl;
    cout<<"Perimeter of rectangle: "<<P;
}
