
#include <iostream>
#include<math.h>
using namespace std; 
  
// cell structure denoted as point 
class point { 
  public:
	int x, y; 
}; 
  
int coverPoints(point sequence[], int size) 
{ 
    int result = 0;  
    for (int i = 0; i < size - 1; i++) { 
        result += max(abs(sequence[i].x-sequence[i+1].x),abs(sequence[i].y-sequence[i+1].y)) ;
    }
    return result;
} 
  
int main() 
{ 

    point arr[] = { { 4, 6 }, { 1, 2 }, { 4, 5 }, { 10, 12 } }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << coverPoints(arr, n); 
} 