/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

main()
{
  int x;
  float t, z, m, c, k, n1, n2, v, r, a, temp1, temp2, temp3;
  for (x = 0; x < 4; x++)
    {
      cout << " " << endl;
      cout << "Enter the choice" << endl;
      cout << " 1. For Turning" << endl;
      cout << " 2. For Pitching" << endl;
      cout << " 3. For Rolling" << endl;
      cout << " 4. For Exit" << endl;
      cin >> x;
      if (x == 1)
	{
	  cout << "Enter the total mass : ";
	  cin >> m;
	  cout << "Enter the radius of gyration in meter : ";
	  cin >> k;
	  cout << "Enter the speed of rotating parts : ";
	  cin >> n1;
	  cout << "Enter the velocity in kmph : ";
	  cin >> v;
	  cout << "Enter the radius of the turn in meter : ";
	  cin >> a;
	  {
	    temp1 = (m * k * k);
	    temp2 = ((2 * 3.142 * n1) / 60);
	    temp3 = ((v * 1000) / (3600 * a));
	    c = ((temp1) * (temp2) * (temp3));
	  }
	  cout << "Gyroscopic couple is " << c << "N-m" << endl;
	}
      else if (x == 2)
	{
	  cout << "Enter the mass of body : ";
	  cin >> m;
	  cout << "Enter the radius of gyration : ";
	  cin >> k;
	  cout << "Enter the angle of pitching : ";
	  cin >> z;
	  cout << "Enter the time required for pitching : ";
	  cin >> t;
	  cout << "Enter the speed of the rotating components : ";
	  cin >> n1;
	  {
	    temp1 = (m * k * k);
	    temp2 = ((2 * 3.142 * n1) / 60);
	    temp3 = ((2 * 3.142 * z * 3.142) / (t * 180));
	    c = ((temp1) * (temp2) * (temp3));
	  }
	  cout << "Gyroscopic couple is " << c << " N-m" << endl;
	}
      else if (x == 3)
	{
	  cout << "Enter the mass of body : ";
	  cin >> m;
	  cout << "Enter the radius of gyration : ";
	  cin >> k;
	  cout << "Enter the speed of rotating parts : ";
	  cin >> n1;
	  cout << "Enter the angular velocity of precission in rad/s : ";
	  cin >> n2;
	  {
	    temp1 = (m * k * k);
	    temp2 = ((2 * 3.142 * n1) / 60);
	    c = ((temp1) * (temp2) * (n2));
	  }
	  cout << "Gyroscopic couple is " << c << " N-m" << endl;
	}
      else
	{
	  cout << "Enter the valid choice" << endl;
	}
    }
  getch ();
}
