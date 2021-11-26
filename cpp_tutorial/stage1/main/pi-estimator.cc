#include<iostream>
using namespace std;
int main()
{
int c=0;
double pi=0;
float a=200000;
for(a=1;a<=200000;a=a+2)
    {
        if(c==0)
        {
            pi=pi+4/a;
            c++;
        }
        else
        {
            pi=pi-4/a;
            c--;
        }
    }
    cout<<"PI's Value = "<<pi<<endl;
return 0;
}