#include <iostream>
#include <conio.h>
using namespace std;
void swap(int &i, int &j) 
{         
   int num;
   num = i;
   i = j;
   j = num;
}

void dat(int *a, int s)
 {
   for(int i = 0; i < s; i++)
      cout << a[i] << " ";
   cout << endl;
}

void sort(int *a, int s)
 {
   int i, j, min;
   for(i = 0; i<s-1; i++)
    {
      min = i;
      for(j = i+1; j<s; j++)
      
         if(a[j] < a[min])
            min = j;
         swap(a[i], a[min]);
   }
}

int main() {
   int num;
   cout << "Enter number of variables: ";
   cin >> num;
   
   int a[num];
   cout << "Enter the variables (Press Enter every input):" << endl;
   for(int i = 0; i < num; i++) {
      cin >> a[i];
   }
   
   cout << "Your Data: ";
   dat(a, num);
   
   sort(a, num);
   cout << "Sorted Data: ";
   
   dat(a, num);
}
