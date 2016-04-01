#include <iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main ()
{
    vector <int> sum,num(1000);
    int n,query,q;
    int c = 1;
    int d;
    cin>>n;
    while(n!=0)
    {
        for(int i = 0; i<n; i++)
            {
                cin>>num[i];
            }
        for(int i = 0; i<n; i++)
        {
            for(int j = 1; j<n; j++)
            {
                sum.push_back(num[i]+num[j]);
            }
        }
        cin>>query;
        cout<<"Case "<<c<<endl;
        while(query--)
        {
             d = 0;
            cin>>q;
            sum.push_back(q);
            vector<int>::iterator itr1 = sum.begin();
            vector<int>::iterator itr2 = sum.end();

            sort(itr1, itr2);

            for(vector<int>::iterator itr = itr1; itr!=itr2; itr++)
            {
                d++;
                if (d==1)
                {
                    if(q==*itr)
                    {
                        cout<<"Closest value to "<<q<<" is "<<*(itr+1)<<endl;
                        break;
                    }
                }
                    if(q==*itr)
                    {
                        if(*(itr+1)-*itr<*itr-*(itr-1))
                        {
                            cout<<"Closest value to "<<q<<" is "<<*(itr+1)<<endl;
                            break;
                        }
                        else if(*(itr+1)-*itr>*itr-*(itr-1))
                        {
                              cout<<"Closest value to "<<q<<" is "<<*(itr-1)<<endl;
                              break;
                        }
                        else if(*(itr+1)-*itr==*itr-*(itr-1))
                        {
                             cout<<"Closest value to "<<q<<" is "<<*(itr+1)<<endl;
                             break;
                        }
                    }

            }

        }

        cin>>n;
        c++;
    }
    return 0;
}
