#include <iostream>

using namespace std;

int matrix[3][3];

int main()
{
    // asigning values, I suppose this is done allready.

    for(int x=0;x<3;x++)
    {
        for(int y=0;y<3;y++)
        {
            matrix[x][y]=1;
        }
    }

    // showing the matrix on the screen

    for(int x=0;x<3;x++)  // loop 3 times for three lines
    {
        for(int y=0;y<3;y++)  // loop for the three elements on the line
        {
            cout<<matrix[x][y]; // display the current element out of the array
            printf("\t");
        }
    cout<<endl;  // when the inner loop is done, go to a new line
    }
    return 0;  // return 0 to the OS.
}