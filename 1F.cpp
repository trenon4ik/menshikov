#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    vector <int> mas;
    for(int i=0; i<5; i++)
    {
        int b;
        cin>>b;
        mas.push_back(b);
    }
    mas.push_back(14);
    sort(mas.begin(), mas.end());
 
    vector<int> k(6);
    int g = 1;
    for (auto i = 1; i < mas.size(); ++i)
        if (mas[i] == mas[i - 1])
            g++;
        else {
            k[g]++;
            g = 1;
        }
 
    //if((mas[0]==mas[1])&&(mas[1]==mas[2])&&(mas[2]==mas[3])&&(mas[4]==mas[5]))
 
    if (k[5] == 1)
        cout << "Impossible";
    else if (k[4] == 1)
        cout<< "Four of a Kind";
    else if (k[3] == 1 && k[2] == 1)
        cout<< "Full House";
    else if (k[1] == 5 && mas[4]-mas[0] == 4)
        cout<< "Straight";
    else if(k[3] == 1)
        cout<< "Three of a Kind";
    else if(k[2] == 2)
        cout<< "Two Pairs";
    else if(k[2]==1)
        cout<< "One Pair";
    else
        cout<< "Nothing";
}