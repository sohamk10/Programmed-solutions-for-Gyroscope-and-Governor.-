/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#include<conio.h>
#include<math.h>

main()
{
  int a, b, i, m;
  float c, d, e, f, g, h, j, k, l;
  printf ("Gyroscopic Couple and its Effect On Aeroplane\n\n");
  printf ("Select the position on view of the rotor:\n1.Nose\n2.Tail\nOption selected: ");
  scanf ("%d", &a);
  printf ("\nSelect the direction of rotation of rotor:\n1.Clockwise\n2.Anti-clockwise\nOption selected: ");
  scanf ("%d", &m);
  printf ("\n\nSelect the direction on turning of the Aeroplane:\n1.Left\n2.Right\nOtion selected: ");
  scanf ("%d", &b);
  printf ("\nEnter the mass fo the rotary engine and the propeller(kg): ");
  scanf ("%f", &c);
  printf ("\nEnter the radius of gyration(m): ");
  scanf ("%f", &d);
  printf ("\nEnter the engine speed(rpm): ");
  scanf ("%f", &e);
  g = (2 * 3.142 * e) / 60;
  printf ("\nSelect the variable given in the problem:\n1.Angular velocity of prescession(rad/s)\n2.Precession speed(rpm)\n3.Aerplane velocity:\nOption selected: ");
  scanf ("%d", &i);
  if (i == 1)
    {
      printf ("\nEnter the angular velocity of precession(rad/s): ");
      scanf ("%f", &j);
    }
  else if (i == 2)
    {
      printf ("\nEnter the speed of precession(rpm): ");
      scanf ("%f", &k);
      j = (2 * 3.142 * k) / 60;
    }
  else
    {
      printf ("\nEnter the aeroplane velocity(m/s): ");
      scanf ("%f", &f);
      printf ("\nEnter the radius of turn(m): ");
      scanf ("%f", &h);
      j = f / h;
    }
  l = c * d * d * j * g;
  printf ("\n\nThe gyroscopic couple on the aeroplane is: %f Nm", l);
  printf ("\nThe effect of gyroscopic couple on the aeroplane is:\n ");
  if (a == 2)
    {
      if (b == 1 && m == 1)
	{
	  printf ("Raise of the nose and dip of the tail");
	}
      if (b == 1 && m == 2)
	{
	  printf ("Raise of the tail and dip of the nose");
	}
      if (b == 2 && m == 2)
	{
	  printf ("Raise of the nose and dip of the tail");
	}
      if (b == 2 && m == 1)
	{
	  printf ("Raise of the tail and dip of the nose");
	}
    }
  else
    {
      if (b == 1 && m == 1)
	{
	  printf ("Raise of the tail and dip of the nose");
	}
      if (b == 1 && m == 2)
	{
	  printf ("Raise of the nose and dip of the tail");
	}
      if (b == 2 && m == 2)
	{
	  printf ("Raise of the tail and dip of the nose");
	}
      if (b == 2 && m == 1)
	{
	  printf ("Raise of the nose and dip of the tail");
	}
    }
  getch ();
}
