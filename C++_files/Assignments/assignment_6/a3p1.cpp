#include<iostream>
using namespace std;
int main()
{
  int units,tuition;
  cout<< "This program that calculates and prints a student’s total tuition at a college.";
  cout<< "enter the number of units:";
  cin>> units
  if(units<=12)
    {
      tuition= units*10+10;
    }
  else
    {
      tuition=130;
    }

  cout<<"the total tuition: "<<tuition<<endl;
}
