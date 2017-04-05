#include <bits/stdc++.h>
 
using namespace std;
 
 
 
int n;
int s;
 
vector <int> mas;
vector<string> ans;
 
void perebor(int i,int sum, int ost)
    {
        if(sum<=ost+s)
        {
            if (i == n - 1) {
                    if(sum==s)
                    {
                        for(int t=0;t<n-1;t++)
                        {
                            cout<<mas[t];
                            cout<<ans[t];
                        }
                        cout<<mas[n-1];
                        cout<<"=";
                        cout<<s;
                        exit(0);
                    }
            }
            else {
                ans.push_back("+");
                perebor(i+1,sum+mas[i+1],ost-mas[i+1]);
                ans.pop_back();
                ans.push_back("-");
                perebor(i+1,sum-mas[i+1],ost-mas[i+1]);
                ans.pop_back();
            }
        }else{return;}
    }
 
int main()
{
 
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        int e;
        cin>>e;
        mas.push_back(e);
    }
    if(n!=1){
        int sus;
        sus=0;
        for(int i=0;i<n;i++)
            sus=sus+mas[i];
        vector <string> a;
        perebor(0,mas[0],sus);
        cout<<"No solution";
    }else
        {
            if(mas[0]==s)
            {
                cout<<mas[0]<<"="<<s;
            }else
                {
                    cout<<"No solution";
                }
        }
}