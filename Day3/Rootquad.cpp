// we hav the question to find the roots of a quadratic equation

// steps:
// 0. accept the coeffeicient as a,b,c;
// 1. find the d where d = (b*b) - 4 * a *c;
// 2. if(d>0):
    
//     find x1 and x2
//     x1 = (-b + sqrt(d))/2a
//     x2 = (-b - sqrt(d))/2a
// 3. If(d==0)

//     find x1 and x2
//     x1 = x2 = -b/2a
// 4. if(d<0):

//     find x1 and x2
//     here is the tricky part incase our d is less than 0 we have to find real and imaginary part
//     that is the part with i is imaginary
    
//     x1 = -b/2a  + i*(-sqrt(d))/2a
//     x2 = -b/2a  - i*(-sqrt(d))/2a

// x2 -7x +10 = 0 here the a = 1, b = -7 and c = 10 the answer is x1 = 2, x2 =5

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c,d,real,img;
    cout<<"enter the coeff : ";
    cin>>a>>b>>c;
    int x1 , x2;

    d = (b*b) - 4*a*c;

    if(d>0)
    {
        x1 = (-b + sqrt(d))/(2*a);
        x2 = (-b - sqrt(d))/(2*a);


        cout<<"roots are real and diff"<<endl;
        cout<<x1<<" "<<x2;

    }
    else if(d==0)
    {
        x1 = x2 = -b/(2*a);
         cout<<"roots are real and same"<<endl;
        cout<<x1<<" "<<x2;
    }
    else{
        
        real = -b/(2*a);
        img = (sqrt(-d)/(2*a));
        cout<<"roots are complex and diff"<<endl;
        cout<<"x1 ="<<real<<"+i"<<img;
        cout<<"x2 ="<<real<<"-i"<<img;





    }

}

