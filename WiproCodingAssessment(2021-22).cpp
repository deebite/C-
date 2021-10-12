#include<iostream>
using namespace std;
int main()
{
	int numCells,itemID;
	cin>>numCells;
	cin>>itemID;
	int arr[numCells];
	for(int i=0;i<numCells;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<numCells;i++)
	{
		
		if(itemID==arr[i])
		{
			cout<<"output is "<<i;
		}
		else if(itemID>arr[i] && itemID<arr[i+1])
		{
			arr[i]=itemID;
			cout<<i+1;
		}
	}
	return 0;
}
