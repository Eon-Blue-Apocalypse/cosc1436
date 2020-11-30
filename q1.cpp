#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
using std::setw;

int main(){

    srand(time(0));

    int arr[10];
    
    for(int i=1;i<11;i++){
        arr[i]=rand()%100;
    }
   cout << "Element" << setw( 13 ) << "Value" << endl;

    for(int i=1;i<11;i++){
        cout << setw( 7 ) << i << setw( 13 ) << arr[i] << endl;
    }


    for(int i=1;i<11;i++){
        if(arr[1] > arr[i])
            arr[1] = arr[i];
    }

    cout << "Smallest element: " << arr[1] << endl;


    // Loop to store largest number to arr[0]
    for(int i=1;i<11;i++)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }

    cout << "Largest element: " << arr[0] << endl;


    return 0;

}