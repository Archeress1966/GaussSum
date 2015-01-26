/* 
 * Project: GaussSum
 * File:   main.cpp
 * Author: Marietta E. Cameron
 * Add Numbers from 1 to 100;
 * Created on January 25, 2015, 4:44 PM
 */

#include <iostream>

using namespace std;

#define LIMIT 100
int main(int argc, char** argv) {
            
      int sum = 0;
      for (int i=1; i<=LIMIT; i++){
          sum += i;
      }
      cout << "1 + 2 + 3 + .... + " << LIMIT;     
}//main

