#include <iostream>
#define MAX 100
using namespace std;

int main()
{
   int setA[MAX],setB[MAX],setC[MAX],a,b,c=0;

   cout << "Enter the number of element of set A:";
   cin >> a;

   cout << "Enter the elements of set A:" << endl;
   for (int i=0;i<a;i++)
   {
      cin >> setA[i];
   }

   cout << "Enter the number of element of set B:";
   cin >> b;

   cout << "Enter the elements of set B:" << endl;
   for (int i=0;i<b;i++)
   {
      cin >> setB[i];
   }

	for (int i=0;i<a;i++)
   	{
      for (int j=0;j<b;j++)
      {
         if (setA[i] == setB[j])
         {
            setC[c] = setA[i];
            c++;
         }
      }
   }

 


   for (int i=0;i<c;i++)
   {
      cout << setC[i] << " ";
   }



   return 0;
}









