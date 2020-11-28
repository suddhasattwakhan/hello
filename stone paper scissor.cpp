#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
int n,m;
int input()
{   
	cout<<"enter 0 for stone ,1 for paper, 2 for scissor \n";
	cin>> n;
}
int computer()
{
   srand(time(NULL));
	m= rand()%3;
	if (m==0)
	{
		cout<<"The computer chose stone \n";
	}
	if(m==1)
	{cout<< "The computer choose paper \n";}
	if(m==2)
	{cout<<"The computer choose scissor \n";}
	
}



int calculation()
{

   if(m==n){return 2;}
   if(m==0 && n==1){return 1;}
   if(m==1 && n==2){return 1;}
   if(m==2 && n==0){ return 1;}
   if(m==0 && n==2){return 0;}
   if(m==1 && n==0){return 0;}
   if(m==2 && n==1){return 0;}
   
}


int main()
{
   input();
   computer();
   int c=calculation();
   if (c==2)
   {cout<<"Its a draw"<<"\n";}
    if (c==1)
   {cout<<"You win"<<"\n";}
    if (c==0)
   {cout<<"You lose"<<"\n";}
   return 0;
   	
}
