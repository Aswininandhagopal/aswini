#include<iostream.h>

#include<conio.h>

void main()

 {
 clrscr();

 // array is intitlised as 100

 int size,b[100];

 cout<<"enter no of people standing in q(less than 100)";

 cin>>size;

 for(int i=0;i<size;i++)

 b[i]=(i+1);

 int j;

 while(1)
{ j=-1;

 for(i=1;i<size;i+=2)

 { j++;

b[j]=b[i];

}

 size=size/2;

 if(size==2||size==3)

 {

cout<<"output is"<<b[1];

break;

 }
 else if(size==0)

 {

cout<<"output is "<<b[0];

break;

 }

}

 getch();

 }
