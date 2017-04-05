    #include <bits/stdc++.h>
 
    using namespace std;
 
    int main()
    {
        int a=0;
        int m;
        int n;
        cin>>m;
        cin>>n;
        int s=0;
        int d[300000];
        for(int i=2;i<300000;i++)
            {
                int k=0;
                for(int o=2;o<=sqrt(i);o++)
                {
                    if(i%o==0)
                    {
                        k++;
                    }
                }
                if (k==0)
                {
                    d[s]=i;
                    s++;
                }
            }
      /*  for(int i=0;i<s;i++)
        {
            cout<<d[i];
            cout<<" ";
        }
        */
         int f=0;
        for(int i=0;i<s;i++)
        {
            if((d[i]>=m)and(d[i]<=n))
            {
                f++;
                cout<<d[i]<<endl;
            }
 
        }
         if(f==0)
            {
                cout<<"Absent";
            }
    }