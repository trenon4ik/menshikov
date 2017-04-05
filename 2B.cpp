#include <bits/stdc++.h>
 
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int n;
    n=s.size();
 
//    string s ;
    sort(s.begin(), s.end());
    do {
        cout << s << '\n';
    } while(std::next_permutation(s.begin(), s.end()));
 
}