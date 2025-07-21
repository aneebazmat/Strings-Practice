#include<iostream>
#include<cstring>
using namespace std;

int main()
{
   
    // Range based for loop

   double list[] = {1,2,3,4,5};
   double sum;
   for(double num : list)
   {
        sum += num;
   }
   cout << sum << endl;

   char name[] = {"John"};
   cout << strlen(name) << endl;
   char str[20] = "abc";
   cout << strlen(str) << endl;
   cout << sizeof(str);

    return 0;
}