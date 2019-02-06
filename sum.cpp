#include <iostream>
#include<cmath>
using namespace std;
int main()
{	
	double sx=0,x=-1,y,xy,x2,sx2=0,sxy=0,sy=0,n,De,m,c,e,se=0;
	int i=0;
	cout<<"how many reading are there:";
	cin>>n;// for controlling the loop
	double A[100][2];
	while(i<n)
	{
		cout<<"\n x:";
		cin>>A[i][0];
		cout<<" y:";
		cin>>A[i][1];
		x=A[i][0];
		y=A[i][1];
		xy=x*y;
		x2=x*x;
		cout<<"\nxy="<<xy<<"\nx2="<<x2;
		sx=sx+x;
		sx2=sx2+x2;
		sxy=sxy+xy;
		sy=sy+y;
		cout<<endl<<"#######################################"; // 
		i++;
	}
	De=n*sx2-(sx*sx); // De is delta the expression of delta can be seen in the jhon taylor book
	m=(n*sxy-sx*sy)/De;// slope
	c=(sx2*sy-sx*sxy)/De;//intercept
	cout<<"******************************************************"<<endl<<"sum of x = "<<sx<<"\nsum of y="<<sy<<"\nsum of xy = "<<sxy<<"\nsum of x2 = "<<sx2<<endl;
	cout<<endl<<"Delta value:="<<De<<"\n intercept c="<<c<<"\n slope m="<<m;
	se=0;
	cout<<"\n The value of (y-mx-c) square will displayed in the next lines";
	cout<<"\n&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&";
	for(i=0;i<n;i++)
	{
	cout<<"\nX:"<<A[i][0];
	x=A[i][0];
	cout<<"\nY:"<<A[i][1];
	y=A[i][1];
	e=(y-m*x-c);
	cout<<"\nsquare of error for this x,y ="<<e*e;
	se=se+(e*e);
	cout<<"\n&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&";
	}
	cout<<"\n Total sum of square of errors="<<se;
	double sigy,sigm,sigc;
	sigy=sqrt(se/(n-2));
	cout<<"\nError in y="<<sigy<<endl<<sx2<<endl<<De;
	sigc=sigy*sqrt(sx2/De);
	sigm=sigy*sqrt(n/De);
	cout<<"\nError in intercept="<<sigc<<"\nError in slope="<<sigm<<endl;
	return 0;
}

