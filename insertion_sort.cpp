#include<iostream>
using namespace std;

int main()
{
	int a[100],n,i,j,k,num;
	cout<<"\n INSERTION SORT TECHNIQUE \n\nenter size of the array\n";
	cin>>n;
	cout<<"\nenter elements into the array:\n";
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=1;i<n;i++)
	{
		num=a[i];
		j=i-1;
		while(j>=0&&a[j]>num)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=num;
	}
	cout<<"\nelemnts are sorted out\n";
	for(i=0;i<n;i++)
	cout<<a[i]<<"\t";
	return 0;
	}
	
