#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main()
{
clrscr();
int i,j,k,p,q,a[3][3],b[3][3],c[3][3];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<endl<<"Enter the value of array";
cin>>a[i][j]>>b[i][j];
c[i][j]=0;
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
for(k=0;k<3;k++)
{
 c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
cout<<setw(4)<<c[i][j];
}
cout<<endl;
}
getch();
}



