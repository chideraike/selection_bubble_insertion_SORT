#include<iostream>

//10640061
using namespace std;
int main ()
{
   int i, j, temp;
   int size;
    // Taking Size of the Array
    cout << "Enter the size of the array: ";
    cin >> size;

	int a[size];
	// Taking Input in Array
	for (int y=0; y<size; y++){
        cout << "Enter " << y << " element: ";
        cin >> a[y];
	}
   cout <<"Input list ...\n";
   for(i = 0; i<size; i++) {
      cout <<a[i]<<"\t";
   }
    cout<<endl;
    for(i = 0; i<size; i++) {
        for(j = i+1; j<size; j++)
        {
            if(a[j] < a[i]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        };
    }
    cout <<"Sorted Element List ...\n";
    for(i = 0; i<size; i++) {
        cout <<a[i]<<"\t";
    }
    return 0;
}
