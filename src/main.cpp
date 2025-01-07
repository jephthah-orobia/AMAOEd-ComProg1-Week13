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

void mutateINT(int* intVar, int newValue){
  *intVar = newValue;
};


int main()
{
  int n = 654321;

  cout << "int variable initialized value: " << n << endl;
  
  mutateINT(&n, 27946);

  cout << "int variable initialized value: " << n << endl << endl;

  // ********************** DO NOT CHANGE **********************
  // Print a new line and ask user for any key before exiting
  // ***********************************************************
  _pause();
  return EXIT_SUCCESS;
}
