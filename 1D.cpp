#include <iostream>
 
using namespace std;
 
bool check(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    int a = (y1-y2)*x4+(x2-x1)*y4+(x1*y2-x2*y1);
    int b = (y1-y2)*x3+(x2-x1)*y3+(x1*y2-x2*y1);
    return ((a >= 0 && b >= 0) || (a <= 0 && b <= 0));
}
 
 
int main()
{
    int x1, x2, x3, x4;
    int y1, y2, y3, y4;
    int s = 0;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    cin>>x4>>y4;
 
 
    if (check(x1,y1,x2,y2,x3,y3,x4,y4))
    {
 
    if (check(x1,y1,x3,y3,x2,y2,x4,y4))
    {
 
    if (check(x2,y2,x3,y3,x1,y1,x4,y4))
    {
        cout<<"In";
    }
    else{cout<<"Out";}
    }
    else{cout<<"Out";}
    }
    else{cout<<"Out";}
 
}