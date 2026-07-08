#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>99 and n<1000){
        cout<<"It is a 3 digit number";
    }
    else{
        cout<<"It is not a 3 digit number";
    }
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>99 && n<1000){                                //and==&&
        cout<<"It is a 3 digit number";
    }
    else{
        cout<<"It is not a 3 digit number";
    }
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%3==0 and n%5!=0){
        cout<<"The number is divisible by 3";
    }
    if(n%3!=0 and n%5==0){
        cout<<"The number is divisible by 5";
    }
    if(n%3==0 and n%5==0){
        cout<<"The number is divisible by both 3 and 5";
    }
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n%3==0 or n%5==0){                      // or==||
        cout<<"Divisible by 3 or 5";
    }
    else{
        cout<<"Not divisible by 3 or 5";
    }
}

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the length of 1st side of triangle: ";
    cin>>a;
    cout<<"Enter the length of 2nd side of triangle: ";
    cin>>b;
    cout<<"Enter the length of 3rd side of triangle: ";
    cin>>c;
    if((a+b)>c and (b+c)>a and (c+a)>b){                         //but brackets inside also
        cout<<"These can be the sides of a triangle";
    }
    else{
        cout<<"These cannot be the sides of a triangle";
    }
}

#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter 1st number: ";
    cin>>x;
    cout<<"Enter 2nd number: ";
    cin>>y;
    cout<<"Enter 3rd number: ";
    cin>>z;
    if(x>(y,z)){
        cout<<"Greatest Number: "<<x;
    }
    if(y>(x,z)){
        cout<<"Greatest Number: "<<y;
    }
    if(z>(x,y)){
        cout<<"Greatest Number: "<<z;
    }
    else{
        cout<<"Greatest Number: "<<x;
    }
}

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    if(a>b and a>c){
        cout<<"Greatest number: "<<a;
    }
    else if(b>a and b>c){
        cout<<"Greatest number: "<<b;
    }
    else{                     //system automatically takees in case of all three equal case
        cout<<"Greatest number: "<<c;
    }
}

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter 3rd number: ";
    cin>>c;
    if(a<b and a<c){
        cout<<"Least number: "<<a;
    }
    else if(b<c and b<a){
        cout<<"Least number: "<<b;
    }
    else{
        cout<<"Least number: "<<c;
    }
}

#include<iostream>
using namespace std;
int main(){
    cout<<"Condition: The number is divisible by 3 or 5 but not divisible by 15"<<endl;
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if((x%3==0 or x%5==0) and (x%15!=0)){
        cout<<"Satisfies the condition.";
    }
    else{
        cout<<"Does not satisfy the condition";
    }
}
