#include <iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int arr[n][2];
    for(int i=0; i<n; i++){
        cin>>arr[i][0];
        cin>>arr[i][1];
    }
    double expense;
    for(int i=0; i<n; i++){
        if(arr[i][0] > 1000){
            double x = (double)arr[i][0];
            x = x*arr[i][1];
            double discount = x/10.0;
            expense = x - discount;
        }else{
            expense = arr[i][0]*arr[i][1];
        }
        printf("%.6f\n",expense);
    }

    return 0;
}
