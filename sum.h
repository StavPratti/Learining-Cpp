#include <iostream>

using namespace std;

int sumNumbers (int d, int f)
{  int c= f + d;
   return c;

}

int main()
{  int a;
   int b;
   cout <<"write two numbers" <<endl;
   cin >> a;
   cin >>b;
   cout << "the answer is " << sumNumbers(a,b) <<endl;
   return 0;

}