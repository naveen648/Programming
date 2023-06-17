#include<iostream>
using namespace std;
int main()
{
    int Temp,Num1,Num2;
    cout<<"Enter the value for Num1 = \n";
    cin>>Num1;
    cout<<"Enter the value for Num2 = \n";
    cin>>Num2;
    Temp=Num1;
    Num1=Num2;
    Num2=Temp;
    cout<<"Swapping Num1 and Num2 we get\n";
    cout<<"Num1 = "<<Num1<<"\nNum2 = "<<Num2;
}
