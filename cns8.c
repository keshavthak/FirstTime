 #include<iostream.h>
#include<stdio.h>
#include<conio.h>

int phi,M,n,e,d,C,FLAG;

int check()
{
int i;
for(i=3;e%i==0 && phi%i==0;i+2)
{
FLAG = 1;
return 1;
}
FLAG = 0;
return 0;
}

void encrypt()
{
int i;
C = 1;
for(i=0;i< e;i++)
C=C*M%n;
C = C%n;
cout<< "\n\tEncrypted keyword :"<<C;
}

void decrypt()
{
int i;
M = 1;
for(i=0;i< d;i++)
M=M*C%n;
M = M%n;
cout<<"\n\tDecrypted keyword:"<<M;
}

void main()
{
int p,q,s;
clrscr();
cout<<"Enter Two Relatively Prime Numbers\t: ";
cin>>p>>q;
n = p*q;
phi=(p-1)*(q-1);
cout<<"\n\tF(n)\t="<<phi;
do
{
cout<<"\n\nEnter e\t:";
cin>>e;
check();
}while(FLAG==1);
d = 1;
do
{
s = (d*e)%phi;
d++;
}while(s!=1);
d = d-1;
cout<<"\n\tPublic Key\t: "<<e<<n;
cout<<"\n\tPrivate Key\t:"<<d<<n;
cout<<"\n\nEnter The Plain Text\t: ";
cin>>M;
encrypt();
cout<<"\n\nEnter the Cipher text\t: ";
cin>>C;
decrypt();
getch();
}
