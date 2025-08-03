#include<iostream>
#include<climits>
using namespace std;


int main(){
	
	int n;
	cout<<"Enter Elements : ";
	cin>>n;
	
	int array[n];
	for(int i=0; i<n; i++)
	{
		cin>>array[i];
	}
	
	int maxNo=INT_MIN;
	int minNo=INT_MAX;
	
	for(int i=0;i<n;i++)
	{
		if(array[i]>maxNo)         // OR    //   maxNo=max(manNo,array[i]);
		{        
			maxNo= array[i];                //   ..........................
		}
		if(array[i]<minNo)         // OR    //   minNo=min(minNo,array[i]);
		{        
			minNo=array[i];                 //   ..........................
		}
	}
	
	cout<<"The maximun element is:"<<maxNo<<" The minimum element is:"<<minNo<<endl;
	
	return 0;
}