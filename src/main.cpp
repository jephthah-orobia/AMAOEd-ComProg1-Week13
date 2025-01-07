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
  string var;
  string* varPtr = &var;

  *varPtr = "This is it!";


  cout << var << endl;

  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();
  return EXIT_SUCCESS;
}
