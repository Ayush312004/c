#include<iostream>
using namespace std;
int n;
template<class T>
void selection(T A[10])
{
	int i,j,min;
	T temp;
	for (i=0;i<=n-2;i++)
	{
		min=i;
		for (j=i;j<=n-1;j++)
		{
			if (A[j]<A[min])
			min=j;
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
	cout<<"\nSorted list=";
	for (i=0;i<n;i++)
	cout<<"\t"<<A[i];
}

int main()
{
	int i,A[10];
	float B[10];
	cout<<"Selection sort\n";
	cout<<"\nInteger element\n";
	
	cout<<"Enter how many elements you want\n";
	cin>>n;
	
	cout<<"\nEnter the integer element\n";
	for(i=0;i<n;i++)
		cin>>A[i];
	
	selection(A);
	
	cout<<"\nFloat Element\n";
	
	cout<<"ENter how many elements you want\n";
	cin>>n;
	
	cout<<"\nEnter float element\n";
	for(i=0;i<n;i++)
		cin>>B[i];
	
	selection(B);
	return 0;
}