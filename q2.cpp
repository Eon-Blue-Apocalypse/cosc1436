#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <math.h>
#include <cmath>

using namespace std;
using std::setw;

int main(){
    double sum = 0;
    double aver, stdDev;
    int n;

    srand(time(0));

    int arr[10];
    
    for(int i=1;i<11;i++){
        arr[i]=rand()%100;

        sum += arr[i];
    }
   cout << "Element" << setw( 13 ) << "Value" << endl;

    for(int i=1;i<11;i++){
        cout << setw( 7 ) << i << setw( 13 ) << arr[i] << endl;
    
    }

    aver = sum / 10;

    cout << "Average = " << aver << endl;

    n = 10;

    stdDev = sqrt(pow((arr[1]-aver),2) + pow((arr[2]-aver),2) + pow((arr[3]-aver),2) + pow((arr[4]-aver),2) + pow((arr[5]-aver),2) + pow((arr[6]-aver),2) + pow((arr[7]-aver),2) + pow((arr[8]-aver),2) + pow((arr[9]-aver),2) + pow((arr[10]-aver),2)) / n;

    cout << "Standard Deviation = " << stdDev << endl;



    return 0;
}