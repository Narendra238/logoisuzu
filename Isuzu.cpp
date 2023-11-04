#include <iostream>
#include<windows.h>
using namespace std;
int main(){
	// int n;
	string Answer;
	cout<<endl<<endl;
	Sleep(500);
	system("color 0F");
    int a, b, c, d, k=0; 
    for(a=1; a<=5; a++)
	{
        for(b=1; b<=a; b++)
		{
            cout<<"*";
        }
        for(c=1; c<=10-k; c++)
		{
            cout<<" ";
        }
        k+=2;
        for(d=1; d<=a; d++)
		{
            cout<<"*";
        }
    Sleep(1000);
    cout<<endl;
    }
    for(a=1; a<=5; a++)
	{
        for(b=1; b<=5; b++)
		{
            cout<<"*";
        }
        for(c=1; c<=2; c++)
		{
            cout<<" ";
        }
        for(b=1; b<=5; b++)
		{
            cout<<"*";
        }
    Sleep(1000);
    cout<<endl;
    }

    system("color 0B");

    cout<<"    ISUZU   "<<endl;
    cout<<"RAJANYA DIESEL"<<endl;
    
    return 0;
}
