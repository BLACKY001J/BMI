#include<iostream>
using namespace std;
int main()
{
    float bmi,w,h; //w=weight or h=height
    cout<<"Please enter your weight in pounds:";
    cin>>w;
    cout<<"Please enter your height in inches:";
    cin>>h;
    bmi=(w*703)/(h*h);
    cout<<"Your BMI is:"<<bmi<<endl;
    if(bmi>25)
    cout<<"Overweight";
    else if(bmi>18.5 && bmi<25)
    cout<<"Optimal";
    else
    cout<<"Underweight";
    return 0;

}