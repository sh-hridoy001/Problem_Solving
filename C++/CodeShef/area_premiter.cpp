// Write a program for the following problem

// Let’s consider a rectangle of sides 11 and 13.
// Find and output area of the rectangle having length as 11 and breadth as 13
// Find and output perimeter of the rectangle having length as 11 and breadth as 13
// For any rectangle, the formula for area is length * breadth.
// The formula for perimeter is 2 * (length + breadth)


// author: Sazzad
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int length , width, area , premiter;
  length = 11 ;
  width = 13 ;
  area = length*width ;
  premiter = 2*( length + width);

  cout<< area <<endl ; 
  cout<< premiter ;
  return 0;
}
