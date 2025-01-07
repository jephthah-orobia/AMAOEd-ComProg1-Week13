/* ****************************************************************
 * @author: Jephthah Orobia
 * @app name: AMAOEd ComProg Week 13
 * @app desc: Laboratory Exercise 12
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

int main()
{
  float firstVar;
  float& secondVar = firstVar;

  secondVar = 3.14159265358979323846;

  cout << "\033[4mFirst variable\033[0m" << endl
       << "\t-address: " << &firstVar << endl
       << "\t-value: " << firstVar << endl
       << "\033[4mSecond variable\033[0m" << endl
       << "\t-address: " << &secondVar << endl
       << "\t-value: " << secondVar << endl << endl;
  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();
  return EXIT_SUCCESS;
}
