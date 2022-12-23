#include<iostream>
#include<cmath>
using namespace std;
int sum(int a,int b)
{
 return a+b;
 }
int dif(int a,int b)
{ return a-b;
}
int multi(int a,int b)
{ return a*b;
}
float divide(float a,float b)
{ return a/b;
}
int rem(int a,int b)
{
 return a%b;
 }
 float sqrt1(float a,float b)
{
 return sqrt(a);

 }
  float sqrt2(float a,float b)
{
 return sqrt(b);

 }
   float log1(float a,float b)
{
 return log1(a,b);

 }
    float log2(float a,float b)
{
 return log2(a,b);

 }
int main()
{
	float a,b,addition,difference,product,division,remainder,squareroot1,squareroot2,logarithm1,logarithm2;
	cout<<"Enter 1st Number "<<endl;
	cin>>a;
	cout<<"Enter 2nd Number "<<endl;
	cin>>b;
	addition=sum(a,b);
	cout<<"Sum of two values is "<<endl;
	cout<<addition<<endl;
	product=multi(a,b);
	cout<<"Multiplication of two values is "<<endl;
	cout<<product<<endl;
	difference=dif(a,b);
	cout<<"Difference of two values is "<<endl;
	cout<<difference<<endl;
	division=divide(a,b);
	cout<<"Division of two values is "<<endl;
	cout<<division<<endl;
    remainder=rem(a,b);
	cout<<"Remainder of two values is "<<endl;
	cout<<remainder<<endl;
    squareroot1=sqrt(a);
	cout<<"squareroot1 of 1st value is "<<endl;
	cout<<squareroot1<<endl;	
    squareroot2=sqrt(b);
	cout<<"squareroot2 of 2nd value is "<<endl;
	cout<<squareroot2<<endl;
    logarithm1=log10(a);
	cout<<"logarithm of 1st value is "<<endl;
	cout<<logarithm1<<endl;
    logarithm2=log10(b);
	cout<<"logarithm of 2nd value is "<<endl;
	cout<<logarithm2<<endl;

	}

