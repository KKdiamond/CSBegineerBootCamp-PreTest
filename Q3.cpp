#include<iostream>
#include<string>
using namespace std;
int main()
{
    string st;
    int flag=1,stLen;

    cout<<"Enter a string : ";
    getline(cin,st);

   for(int i = 0; i < st.size(); ++i)
		{

			if(ispunct(st.at(i)) || isspace(st.at(i)))
			{
                st.erase(i,1);
			}
		}

    stLen=st.size();

    for(int i=0,j=stLen-1;i<stLen/2;i++,j--)
    {
        if(st[i]!=st[j])
            flag=0;
    }
    if(flag==0)
        cout<<"Not Palindrome";
    else
        cout<<"Palindrome";
    return 0;
}
