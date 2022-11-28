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
  float m, a, b, r, r1, r2, n1, n2, n;
  float f1, f2, s, f, temp1, temp2, temp3, temp4, x, y;
  cout << "Enter the mass of ball in kg ";
  cin >> m;
  cout << "Enter the length of ball arm in meters ";
  cin >> a;
  cout << "Enter the length of sleeve arm in meters ";
  cin >> b;
  cout << "Enter the minimum radius of rotation in meters ";
  cin >> r1;
  cout << "Enter the maximum radius of rotation in meters ";
  cin >> r2;
  cout << "Enter the speed at radius r1 ";
  cin >> n1;
  cout << "Enter the speed at radius r2 ";
  cin >> n2;
  {
    r = ((r1 + r2) / 2);
    x = (m * 2 * 2 * 3.142 * 3.142 * n1 * n1 * r1);
    y = (m * 2 * 2 * 3.142 * 3.142 * n2 * n2 * r2);
    f1 = (x / 3600);
    f2 = (y / 3600);
    temp1 = (f2 - f1);
    temp2 = (r2 - r1);
    temp3 = ((f2 - f1) * ((r - r1) / (r2 - r1)));
    f = f1 + temp3;
    s = (2 * (a * a / (b * b)) * (temp1 / temp2));
    n = sqrt ((f * 60 * 60) / (m * r * 2 * 2 * 3.142 * 3.142));
  }
  cout << " F1 is " << f1 << " N " << endl;
  cout << " F2 is " << f2 << " N " << endl;
  cout << " Controlling force at any instance is " << f << " N" << endl;
  cout << " Equilibrium speed for radius " << r << " is " << n << "rpm" << endl;
  cout << "Spring constant is " << s << "N/m" << endl;
  getch ();
}
