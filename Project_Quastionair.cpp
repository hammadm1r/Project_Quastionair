#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
int main()
{  
    int choice,score=0, a, b, op,opti;
    char opt, p;
    
	Loop1:
    	
	cout<<"==========================Questionnaire===============================";	
	cout<<"\nEnter '1' to play the game. "<<endl;
	cout<<"Enter '2' for instruction. "<<endl;
	cout<<"Enter '3' to quit the game. "<<endl;
	cout<<"Enter '4' to see highest score."<<endl;
	cout<<"\nEnter your option       = ";
	cin>>choice;
	cout<<endl;
	cout<<"========================Successfully Loaded===========================";
	cout<<"\t\t\t\t\t   Press any key";
	getch();


	system("cls");
   if(choice==1 || choice==2 || choice==3 ||choice==4) 
	{
	
	switch (choice)
{
    case 4:
    { 	cout<<"====================================================================";
 
    cout<<"\n\nYour score is "<<score<<endl;
    
    cout<<"\nDo you wish to play the game (y/n) ?"<<endl;
    cin>>p;
	cout<<"====================================================================";
	}
	break;
	
	case 1:
	
	Loop2:
	cout<<"============================Game Start!============================= \n";
	
    
	for(int c, x=1; x<=2; x++)
	
	{
	srand(time(NULL));
	a = rand() % 10;
    b = rand() % 10;
	cout<<"What's "<<a<<" x "<<b<<" ?"<<endl;
	cout<<"(a) 10"<<endl;
	cout<<"(b) 22"<<endl;
	cout<<"(c) "<<a*b<<endl;
	cout<<"(d) 50"<<endl;
	cout<<"Enter the answer : ";
	cin>>opt;
	
   if(opt=='c' || opti==a*b)
   {
   	cout<<"\n\nCorrect answer"<<endl<<endl;
    score++;
    getch();
   }
   else if(opt!='c' || opti!=a*b)
   {
   cout<<"Correct answer was "<<a*b<<"\n\n";
   getch();
   cout<<"\nPress any key to continue.";
   goto Loop3;
   }
   }
   
   
   	for(int c, x=1; x<=1; x++)
	
	{
	srand(time(NULL));
	a = rand() % 10;
    b = rand() % 10;
	cout<<"What's "<<a<<"+"<<b<<" ?"<<endl;
	cout<<"(a) "<<a+b<<endl;
	cout<<"(b) 22"<<endl;
	cout<<"(c) 32"<<endl;
	cout<<"(d) 50"<<endl;
	cout<<"Enter the answer : ";
	cin>>opt;
	
   if(opt=='a')
   {
   	cout<<"\n\nCorrect answer"<<endl<<endl;
    score++;
    getch();
   }
   else if(opt!='a')
   {
   cout<<"Correct answer was "<<a*b<<"\n\n";
   goto Loop3;
   getch();
   }
   }
   
   
   	for(int c, x=1; x<=1; x++)
	{
	srand(time(NULL));
	a = rand() % 10;
    b = rand() % 10;
	cout<<"What's "<<a<<"+"<<b<<" ?"<<endl;
	cout<<"(a) 99"<<endl;
	cout<<"(b) 22"<<endl;
	cout<<"(c) 32"<<endl;
	cout<<"(d) "<<a+b<<endl;
	cout<<"Enter the answer : ";
	cin>>opt;
	
   if(opt=='d')
   {
   	cout<<"\n\nCorrect answer"<<endl<<endl;
    score++;
    getch();
   }
   else if(opt!='d')
   {
   cout<<"Correct answer was "<<a*b<<"\n\n";
   goto Loop3;
   getch();
   }
   }
   
   	for(int c, x=1; x<=3; x++)
	
	{
	srand(time(NULL));
	a = rand() % 10;
    b = rand() % 10;
	cout<<"What's "<<a<<"/"<<b<<" ?"<<endl;
	cout<<"(a) 99"<<endl;
	cout<<"(b) "<<a/b<<endl;
	cout<<"(c) 32"<<endl;
	cout<<"(d) 33"<<endl;
	cout<<"Enter the answer : ";
	cin>>opt;
	
   if(opt=='b')
   {
   	cout<<"\n\nCorrect answer"<<endl<<endl;
    score++;
    getch();
   }
   else if(opt!='b')
   {
   cout<<"Correct answer was "<<a*b<<"\n\n";
   goto Loop3;
   getch();
   }
   }
   
   	for(int c, x=1; x<=2; x++)
	
	{
	srand(time(NULL));
	a = rand() % 10;
    b = rand() % 10;
	cout<<"What's "<<a<<"-"<<b<<" ?"<<endl;
	cout<<"(a) 1112"<<endl;
	cout<<"(b) 83"<<endl;
	cout<<"(c) 332"<<endl;
	cout<<"(d) "<<a-b<<endl;
	cout<<"Enter the answer : ";
	cin>>opt;
	
   if(opt=='d')
   {
   	cout<<"\n\nCorrect answer"<<endl<<endl;
    score++;
    getch();
   }
   else if(opt!='d')
   {
   cout<<"Correct answer was "<<a*b<<"\n\n";
   goto Loop3;
   getch();
   }
   }
   Loop3:
   	{
   	 system("cls");
   	 
   	cout<<"====================================================================";

   	 cout<<"\n\n\nGame over."<<endl;
   	 cout<<"Press Any key."<<endl;
   	 cout<<"====================================================================";
	 getch();
   	 
   	 system("cls");
   	
   	cout<<"====================================================================";
 
    cout<<"\n\nYour score is "<<score<<endl;
    
    cout<<"\nDo you wish to play the game (y/n) ?";
    cin>>p;
	cout<<"====================================================================";
    
    if(p=='y'|| p=='Y')
    {
     system("cls");
	 goto Loop2;
	}
	
	else if(p=='n'||p=='N')
	{
	 system("cls");
	 goto Loop4;
	}
   }
	break;
	
	case 2:
	
	cout<<"=============================Instruction============================\n";
	cout<<"Questions will be asked to  player. Player will enter a,b,c,d only"<<endl;
	cout<<"If player give correct answer, then player will recieve 1 score and"<<endl;
	cout<<" it will increase until you give the wrong answer."<<endl;
	cout<<"=====================================================================";
	
	cout<<"\nDo you wish to play the game (y/n) ?"<<endl;
	cin>>p;
	cout<<"=====================================================================";
    
    if(p=='y'|| p=='Y')
    {
     system("cls");
	 goto Loop2;
	}
	
	else if(p=='n'||p=='N')
	{
	 system("cls");
	 goto Loop4;
	}
	
	getch();
	break;
	return 0;
	
	case 3:
	
	Loop4:
		
	system("cls");
	cout<<"================See you next time================";	
    return 0;
    break;

	default:
	cout<<"\nInvalid number";
	return 0;}
}
}
