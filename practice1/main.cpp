//
//  main.cpp
//  practice1
//
//  Created by ABHI MAC on 10/01/22.
//

#include <iostream>
using namespace std;

//#include "solution.h"

void arrange(int *arr, int n)
{

    int j = n;
        
    
    for (int i = 0;i<=(n-1)/2;i++)
    {
        arr[i]= 2 *i +1;
        
    }
    
    for (int i = (n+1)/2 ;i<n;i++)
    {
      if (n % 2!=0){
          
      arr[i]= j-1;
            
          j = j-2;
         
     }
        
       else if (n%2 == 0)
         {
           arr[i]= j;
            j = j-2;
         }
    }
}
         
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int *arr = new int[n];
        arrange(arr, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        delete [] arr;
    }

    
}
