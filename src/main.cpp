/* ****************************************************************
 * @author: JEPHTHAH M. OROBIA
 * @app name: AMAOEd-Cpp-MyTemplate
 * @app desc: This is my personalized boilerplate for C++ console app
 * ****************************************************************/

#include <iostream>
#include <limits>
#include "whatsNext.h"

using namespace std;

int main()
{

  char name[50];

  const char *divider = "\n================================================\n";

  cout << "Let's try basic input-output console routine!" << endl
       << divider << endl;

  cout << "What is your first name? ";

  cin >> name;

  cout << "Hello " << name << endl
       << divider << endl;

  return whatsNext({
      {'r', make_tuple("Re-Run App",
                       []()
                       {
                         system("cls");
                         return main();
                       })},
  });
}
