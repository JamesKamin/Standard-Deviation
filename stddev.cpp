//
//  main.cpp
//  stddev
//
//  Created by James Kamin on 4/14/20.
//  Copyright © 2020 James Kamin. All rights reserved.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double  mean = 0, stdDev = 0, sum = 0, value = 0;
    int count=0, i = 0;
    
    double data[1024];

    for (i = 0; i < sizeof(data); i++)
    {
     
         cout << "Enter a value (or -99 to quit): ";
         cin >> value;
         if (value == -99)
         {
            break;
         }
      
         data[i] = value;
         sum += data[i];
         count++;
     }
    
     mean = sum/count;

     for(i = 0; i < count; i++)
     {
        stdDev += pow(data[i] - mean, 2);
     }
 
     stdDev = sqrt(stdDev / count);

    cout << "\nThe Average is: " << mean << " with a standard deviation of " << stdDev << endl <<endl;
  
  return 0;
}

