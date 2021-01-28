 #include<conio.h>
#include<stdio.h>
void main()
{
 int i,j,k=0,l=0,m=0;
 char s[20],a[10],b[10];
 clrscr();
 printf("enter a string:");
 scanf("%s",s);
 for(i=0;i<strlen(s);i++)
 {
  if(i%2==0)
  {
   a[k]=s[i];
   k++;
  }
  else
  {
   b[l]=s[i];
   l++;
  }
 }


 for(i=0;i<k;i++)
 {
  printf("%c ",a[i]);
  s[m]=a[i];
  m++;
 }
 printf("\n");
 for(i=0;i<l;i++)
 {
  printf(" %c",b[i]);
  s[m]=b[i];
  m++;
 }
 printf("\n\ncipher text is %s",s);
 getch();
}

