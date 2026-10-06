#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char q[50]; clrscr();
	cout<<"You: ";
	cin.getline(q,50);
	if(strstr(q,"hello"))
		cout<<"AI: Hello Sir";
	else if(strstr(q,"name"))
		cout<<"AI: I am code AI!";
	else
		cout<<"AI: I don't understand!";
	getch();
}