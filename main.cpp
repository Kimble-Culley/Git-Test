/**
 * @file main.cpp
 * @author Kimble Culley
 * @date 2024-01-23
 * @brief Test of github
 * 
 * Takes a number inputted, sums up all previous numbers, then prints out new number.
 */

#include <iostream>

using namespace std;

int sum(int x);

int main() {
  int n = 0;

  cout << "Input a number:" << endl;
  cin >> n;

  cout << sum(n) << endl;
  return 0;
}

int sum(int x){
  int y = 0;
  for(int i = 1; i <= x; i++){
    y = y + i;
  }
  return y;
}
  
