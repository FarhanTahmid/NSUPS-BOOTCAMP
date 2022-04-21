#include <iostream>
using namespace std;
int main()
{
    int numberofinputs;
    cin >> numberofinputs;
    while(numberofinputs>=2 && numberofinputs<=50){
        int numbers[numberofinputs];
    for (int i = 0; i < numberofinputs; i++)
    {
        cin >> numbers[i];
    }

    if (numbers[0] > numbers[numberofinputs - 1])
    {
        swap(numbers[0], numbers[numberofinputs - 1]);
        int flag = 0;
        for (int i = 0; i < numberofinputs - 1; i++)
        {
            if (numbers[i] < numbers[i + 1])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else if (flag == 0)
        {
            cout << "NO" << endl;
        }
    }
    else if (numbers[0] < numbers[numberofinputs - 1])
    {
        cout << "YES" << endl;
    }
    }
    
}