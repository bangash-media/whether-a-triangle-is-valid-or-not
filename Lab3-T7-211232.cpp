#include <iostream>

using namespace std;

int main() 
{
	double angle1,angle2,angle3;
	cout<<"\n\n\t\tEnter Angle 1: "; cin>>angle1;
	cout<<"\n\t\tEnter Angle 2: "; cin>>angle2;
	cout<<"\n\t\tEnter Angle 3: "; cin>>angle3;
	cout<<endl<<endl;
	cout<<"**********************************************************";
	cout<<endl<<endl;
	if ((angle1+angle2+angle3)==180)
	{
		cout<<"\t\tThe Triangle is Valid\n\n";
	}
	if ((angle1+angle2+angle3)!=180)
	{
		cout<<"\t\tThe Triangle is not Valid\n";
	}
	
	return 0;
}
