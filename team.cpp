#include <iostream>
using namespace std;

int main ()
{

    
    int x , counter1 = 0 , counter2 = 0;
    cin >> x;
    int problems [x][3];


    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> problems [i][j];  
        }   

    }


    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(problems[i][j] == 1)
            {
                counter1 ++;
            }
        }   

        if(counter1 >= 2)
        {
            counter2 ++;
        }

        counter1 = 0;

        
    }


    cout << counter2;

    return 0;
}