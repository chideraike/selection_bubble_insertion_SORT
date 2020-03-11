#include<iostream>
//10640061

using namespace std;
int findSmallest (int[],int);
int main ()
{
    int size = 5;
	int myarray[size];
	// Taking Input in Array
	for (int y=0; y<size; y++){
        cout << "Enter " << y << " element: ";
        cin >> myarray[y];
	}
    int pos, temp;
    cout<<"\nInput list of elements to be Sorted\n";
    for(int i=0;i<size;i++)
    {
        cout<<myarray[i]<<"\t";
    }
    for(int i=0;i<size;i++)
    {
        pos = findSmallest (myarray,i);
        temp = myarray[i];
        myarray[i]=myarray[pos];
        myarray[pos] = temp;
    }
    cout<<"\nSorted list of elements is\n";
    for(int i=0;i<size;i++)
    {
        cout<<myarray[i]<<"\t";
    }

    return 0;
}
int findSmallest(int myarray[],int i)
{
    int size = 5;
    int ele_small,position,j;
    ele_small = myarray[i];
    position = i;
    for(j=i+1;j<size;j++)
    {
        if(myarray[j]<ele_small)
        {
            ele_small = myarray[j];
            position=j;
        }
    }
    return position;
}

