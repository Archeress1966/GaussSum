/* 
 * Project: GaussSum
 * File:   main.cpp
 * Author: Marietta E. Cameron
 * Add Numbers from 1 to 100;
 * Created on January 25, 2015, 4:44 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
      cout  << "Please enter n: ";
      int n;
      cin >> n;      
      int sum = 0;
      for (int i=1; i<=n; i++){
          sum += i;
      }
      cout << "1 + 2 + 3 + .... + " << n << " " << sum << endl;;     
}//main

