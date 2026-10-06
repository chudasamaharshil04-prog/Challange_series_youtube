#include<iostream.h>
#include<conio.h>
void main()
{
    float a,b,result;
    int choice;
    clrscr();

    cout<<"=================================="<<endl;
    cout<<"      C++ calculator       "<<endl;
    cout<<"=================================="<<endl;

    cout<<"Enter First Value";
    cin>>a;

    cout<<"Enter Second Value";
    cin>>b;

    cout<<"\n1.Addition";
    cout<<"\n2.Subtraction";
    cout<<"\n3.Multiplication";
    cout<<"\n4.Division";

    cout<<"\n\nEnter Your Choice";
    cin>>choice;

    switch(choice)
    {
        case 1:
            result=a+b;
            cout<<"\nResult= "<<result;
            break;

        case 2:
            result =a-b;
            cout<<"\nResult = "<<result;
            break;
        
        case 3:
            result = a*b;
            cout<<"\nResult = "<<result;
        
        case 4:
            if(b!=0)
            {
                result =a/b;
                cout<<"\nResult = "<<result;

            }
            else
                cout<<"\nCant Divide by zero";
            break;
        default:
            cout<<"\n Invalid Choice";
    }
    getch();
}















