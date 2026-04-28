#include <iostream>
using namespace std;
int main () { 
      int I= 0  , J =0 ; 
      int ref = 2 , res = 0 ; 
      int count = 5 ; 
      int mat[count][count] ; 
      bool one = false ; 
      for ( int  i = 0; i < count; i++)
      {
        for (int  j = 0; j < count; j++)
        {
            cin >> mat[i][j] ; 
            if (mat[i][j] == true )
            {
                    I= i ; 
                    J = j ;
                    // cout << "index : i" << I << " " << "index : j "<< J << endl ; 
            }
        }
    
    }
    res = abs(I - ref ) + abs(J -ref) ; 
    cout << res ; 
}