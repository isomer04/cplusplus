#include <iostream>
using namespace std;

int main()
{
   
   double firstNumber = 4;
   double secondNumber = 3;

   while (firstNumber > secondNumber)
   {
      cin >> firstNumber;
      cout << " \n";
      cin >> secondNumber;

      if (firstNumber > secondNumber) 
          cout << " \n";
   }
   cout << "\n";

   cout << "\n";
   int number = firstNumber;

   while (number <= secondNumber)
   {
       if (number % 2)
           cout << number++ << " " ;
       else
       {
           number++;
           continue;
       }
   }

   cout << "\n";
   number = firstNumber;
   int total = 0;

   while (number <= secondNumber)
   {
       if (!(number % 2))
           total += number++;
       else
       {
           number++;
           continue;
       }
   }
   cout << total << "\n\n";

   cout << "\n";
   number = 1;
   while (number <= 10)
   {
       cout << number <<" " << number * number << '\n';
       number++;
   }
   cout << "\n";

   cout << "\n";
   number = firstNumber;
   total = 0;
   while (number <= secondNumber)
   {
       if (number % 2)
       {
           total += (number * number);
           number++;
       }
       else
       {
           number++;
           continue;
       }
   }
   cout  << total << "\n\n";

   cout << "\n";
   int c = 65;

   while (c < 91)
       cout << char(c++) << " ";
   cout << "\n";
}
