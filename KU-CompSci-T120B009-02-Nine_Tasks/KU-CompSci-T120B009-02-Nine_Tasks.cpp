/**
 * KU-CompSci-T120B009-02-Nine_Tasks.cpp
 *
 * 1 uždavinys
 * B = true, jei x = y, priešingu atveju B = false.
 *
 * 2 uždavinys
 * Apskaičiuoti: y = 1 + x + x^2/2! + x^3/3! + x^4/4!.
 *
 * 3 uždavinys
 * Apskaičiuoti: F = 6,673 * 10^(-8) * (m1 * m2 / R^2).
 *
 * 4 uždavinys
 * Apskaičiuoti atstumą tarp taškų, kurių koordinatės (x1, y1) ir (x2, y2).
 *
 * 5 uždavinys
 * Apskaičiuoti sin(30°) ir įsitikinti, kad tai lygu 1/2.
 *
 * 6 uždavinys
 * Sukeisti vietomis kintamojo x ir y reikšmes.
 * Tada atlikti tą patį, neįvedant naujo kintamojo.
 *
 * 7 uždavinys
 * Išvesti į ekraną skaičius a, atitinkančius matricą:
 * a
 * a^3 a^6
 * a^6 a^3 a
 * Pvz.:
 * 2
 * 8  64
 * 64 8  2
 *
 * 8 uždavinys
 * Sudaryti programą, nustatančią, kuris skaičius didesnis: e^pi ar pi^e.
 *
 * 9 uždavinys
 * Apskaičiuoti natūrinio triženklio skaičiaus skaitmenų sumą.
 *
 * @author Mantas Tumėnas
*/

#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int factorial(int n)
{
  return n == 1 || n == 0 ? 1 : n * factorial(n - 1);
}

int main()
{
  cout << "1 task BEGIN\n";
  int x, y;
  cout << "To find B value, please enter x: ";
  cin >> x;
  cout << "Now, enter y: ";
  cin >> y;
  if (x == y)
  {
    cout << "B = true\n";
  }
  else
  {
    cout << "B = false\n";
  }
  cout << "1 task END\n";
  system("PAUSE");

  cout << "\n2 task BEGIN\n";
  cout << "Please enter x to calculate y = 1 + x + x^2/2! + x^3/3! + x^4/4!: ";
  double another_x;
  cin >> another_x;
  cout << "y = " << 1 + x + pow(x, 2) / factorial(2) + pow(x, 3) / factorial(3) + pow(x, 4) / factorial(4) << "\n";
  cout << "2 task END\n";
  system("PAUSE");

  cout << "\n3 task BEGIN\n";
  cout << "To calculate F = 6.674 * 10^(-8) * (m1 * m2 / R^2), please enter m1 in kg: ";
  double m1, m2, R;
  cin >> m1;
  cout << "Now, enter m2 in kg: ";
  cin >> m2;
  cout << "And finally, enter R in m: ";
  cin >> R;
  const double G = 6.674 * pow(10, -8); // Gravitational constant
  cout << "F = " << G * (m1 * m2 / pow(R, 2)) << "\n";
  cout << "3 task END\n";
  system("PAUSE");

  cout << "\n4 task BEGIN\n";
  double x1, x2, y1, y2;
  cout << "Enter x coordinate for the first point: ";
  cin >> x1;
  cout << "Enter y coordinate for the first point: ";
  cin >> y1;
  cout << "Enter x coordinate for the second point: ";
  cin >> x2;
  cout << "Enter y coordinate for the second point: ";
  cin >> y2;
  cout << "The distance between two points is " << sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) << "\n";
  cout << "4 task END\n";
  system("PAUSE");

  cout << "\n5 task BEGIN\n";
  double result = sin(30 * M_PI / 180);
  cout << "sin(30deg) is " << result << "\n"; // radians = (degrees * pi) / 180; degrees = (radians * 180) / pi 
  if (result == 1.0 / 2)
  {
    cout << result << " == 1/2" << "\n";
  }
  else
  {
    cout << result << " <> 1/2" << "\n";
  }
  cout << "5 task END\n";
  system("PAUSE");

  cout << "\n6 task BEGIN\n";
  cout << "Enter x: ";
  cin >> another_x;
  cout << "Enter y: ";
  double another_y;
  cin >> another_y;
  cout << "Initial values: x = " << another_x << ", y = " << another_y << "\n";
  cout << "Swapping values of two variables using a third variable...\n";
  const double temp_var = another_x;
  another_x = another_y;
  another_y = temp_var;
  cout << "Changed values: x = " << another_x << ", y = " << another_y << "\n";
  cout << "Swapping values of two variables w/o using a third variable...\n";
  swap(another_x, another_y);
  /*
   another_x = another_x + another_y;
   another_y = another_x - another_y;
   another_x = another_x - another_y;
   */
  cout << "Changed values: x = " << another_x << ", y = " << another_y << "\n";
  cout << "6 task END\n";
  system("PAUSE");

  cout << "\n7 task BEGIN\n";
  cout << "Please enter a: ";
  int a;
  cin >> a;
  cout << a << "\n";
  cout << pow(a, 3) << "\t" << pow(a, 6) << "\n";
  cout << pow(a, 6) << "\t" << pow(a, 3) << "\t" << a << "\n";
  cout << "7 task END\n";
  system("PAUSE");

  cout << "\n8 task BEGIN\n";
  if (pow(M_E, M_PI) > pow(M_PI, M_E))
  {
    cout << "e^pi > pi^e\n";
  }
  else if (pow(M_E, M_PI) < pow(M_PI, M_E))
  {
    cout << "e^pi < pi^e\n";
  }
  else
  {
    cout << "e^pi = pi^e\n";
  }
  cout << "8 task END\n";
  system("PAUSE");

  cout << "\n9 task BEGIN\n";
  cout << "Give a natural three-figure number: ";
  string number_as_string;
  cin >> number_as_string;
  const int number_length = number_as_string.length();
  if (number_length == 3)
  {
    cout << "The ones digit is: " << number_as_string[2] << "\n";
    cout << "The tens digit is: " << number_as_string[1] << "\n";
    cout << "The hundreds digit is: " << number_as_string[0] << "\n";
    // string to int conversion
    int ones = 0, tens = 0, hundreds = 0;
    stringstream ss_ones(number_as_string[2]);
    ss_ones >> ones;
    stringstream ss_tens(number_as_string[1]);
    ss_tens >> tens;
    stringstream ss_hundreds(number_as_string[0]);
    ss_hundreds >> hundreds;
    cout << "Digits sum is: " << ones + tens + hundreds << "\n";
  }
  else
  {
    cout << "The number you have entered is not a three-figure number!\n";
  }
  cout << "9 task END\n";
}
