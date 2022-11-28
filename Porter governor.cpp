/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main ()
{
  float m, a, l1, l2;
  float r1, r2, n1, n2, h1, h2, n;
  cout << "Enter the mass of the ball in kg ";
  cin >> m;
  cout << "Enter the mass of the sleeve in kg ";
  cin >> a;
  cout << "Enter the radius of rotation of arm in meters ";
  cin >> r1;
  cout << "Enter the radius at maximum speed in meters ";
  cin >> r2;
  cout << "Enter the length of upper arm in meters ";
  cin >> l1;
  cout << "Enter the length of upper arm in meters ";
  cin >> l2;
  {
    h1 = (pow (((l1 * l1) - (r1 * r1)), 0.5));
    h2 = (pow (((l2 * l2) - (r2 * r2)), 0.5));
    n1 =(pow((((m + a) / m) * (9.81 / h1) * (60 / (2 * 3.142)) * (60 / (2 * 3.142))),0.5));
    n2 =(pow((((m + a) / m) * (9.81 / h2) * (60 / (2 * 3.142)) * (60 / (2 * 3.142))),0.5));
    n = (n2 - n1);
  }
  cout << "Maximum speed is " << n2 << " rpm" << endl;
  cout << "Minimum speed is " << n1 << " rpm" << endl;
  cout << "Range is " << n << " rpm" << endl;
  getch ();
}
