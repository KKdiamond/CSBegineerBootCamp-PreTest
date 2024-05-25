#include<iostream>
#include<string>

using namespace std;
int main()
{

    string st;
    int    stLen,flag;

    cout<<"Enter a string : ";
    getline(cin,st);

    stLen=st.size();
    cout<<"Key\tFrequency\n";

    for(int i=0;i<stLen;i++)
    {
        int count=0;
        flag=0;
        char temp;
        temp=st[i];

        for(int k=0;k<i;k++)
        {
            if(temp==st[k])
                flag=1;
        }
        if(flag==0)
        {
           for(int j=0;j<stLen;j++)
            {
                if(temp==st[j])
                {
                    count++;
                }
            }
              cout<<temp<<"\t"<<count<<endl;
        }

    }

    return 0;
}
