#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 1st integer:";
    cin>>a;
    cout<<"Enter 2nd integer:";
    cin>>b;
    cout<<"Enter 3rd integer:";
    cin>>c;
    //a>b and b>c -> a>c -> a greatest
    if(a>b){ // b can never be the greatest
        if(a>c){
            cout<<a<<"cis greatest";
        }
        else{ // c>a, a>b -> c>a>b
            cout<<c<<" is greatest";
        }
    }
    else{//b>a
        if(b>c){
            cout<<b<<" is greatest";
        }
        else{ //c>b, c>b>a
            cout<<c<<" is greatest";
        }
    }
}

#include<iostream>
using namespace std;
int main(){
    int a,b,c;                            // what if any two or all three have the same age?
    cout<<"Enter Ram's age: ";
    cin>>a;
    cout<<"Enter Shyam's age: ";
    cin>>b;
    cout<<"Enter Ajay's age: ";
    cin>>c;
    if(a>b){
        if(b>c){
            cout<<"Ajay is the youngest of the three.";
        }
        else{
            cout<<"Shyam is the youngest of the three.";
        }
    }
    else{
        if(a>c){
            cout<<"Ajay is the youngest of the three.";
        }
        else{
            cout<<"Ram is the youngest of the three.";
        }
    }
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter percentage of the student: ";
    cin>>n;
    if(n>=81 and n<=100){
        cout<<"Very Good";
    }
    if(n>=61 and n<=80){
        cout<<"Good";
    }
    if(n>=41 and n<=60){
        cout<<"Average";
    }
    if(n<=40){
        cout<<"Fail";
    }
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter percentage of the student: ";
    cin>>n;
    if(n>=81 and n<=100){
        cout<<"Very Good";
    }
    else if(n>=61 and n<=80){
        cout<<"Good";
    }
    else if(n>=41 and n<=60){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter percentage of the student: ";
    cin>>n;
    if(n>=81 and n<=100){
        cout<<"Very Good";
    }
    else if(n>=61){
        cout<<"Good";
    }
    else if(n>=41){
        cout<<"Average";
    }
    else{
        cout<<"Fail";
    }
}

#include<iostream>
using namespace std;
int main(){                                 //Find a better way for this question
    int x,y;
    cout<<"Enter the x coordinate: ";
    cin>>x;
    cout<<"Enter the y coordinate: ";
    cin>>y;
    if(x>0 and y>0){
        cout<<"The point lies in 1st quadrant.";
    }
    if(x<0 and y>0){
        cout<<"The point lies in 2nd quadrant.";
    }
    if(x<0 and y<0){
        cout<<"The point lies in 3rd quadrant.";
    }
    if(x>0 and y<0){
        cout<<"The point lies in 4th quadrant.";
    }
    if(x==0 and y==0){
        cout<<"The point lies on the origin.";
    }
    if(x>0 and y==0){
        cout<<"The point lies on the positive x axis.";
    }
    if(x<0 and y==0){
        cout<<"The point lies on the negative x axis.";
    }
    if(x==0 and y>0){
        cout<<"The point lies on the positive y axis.";
    }
    if(x==0 and y<0){
        cout<<"The point lies on the negative y axis.";
    }
}

#include<iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    if(x==0 and y==0){
        cout<<"The point lies at the origin.";
    }
    else if(x==0){
        cout<<"The  point lies on the y-axis.";
    }
    else if(y==0){
        cout<<"The  point lies on the x-axis.";
    }
    else if(x>0 and y>0){
        cout<<"The  point lies in the first quadrant.";
    }
    else if(x<0 and y>0){
        cout<<"The  point lies in the second quadrant.";
    }
    else if(x<0 and y<0){
        cout<<"The  point lies in the third quadrant.";
    }
    else{
        cout<<"The point lies in the fourth quadrant.";
    }
}

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    (n%2==0) ? cout<<"Even" : cout <<"Odd";
}
