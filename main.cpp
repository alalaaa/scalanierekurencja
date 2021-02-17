#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


vector <int> scal(vector <int> a, vector <int> b) 
{
	
    vector <int> tb;
    
    for(!a.empty() && !b.empty())
	{
        if(a[a.size()-1]>b[b.size()-1]) 
		{
            tb.push_back(a[a.size()-1]);
            a.pop_back();
        }else
		{
            tb.push_back(b[b.size()-1]);
            b.pop_back();
        }
    }
    swap(tb[i], tb[tb.size()-1-i]);
    return tb;
}

vector <int> uporzadkuj(vector <int> tb) 
{
    int k;
    vector <int> a;
    vector <int> b;

	
    if(tb.size()==1)
    {
        return tb;
    	k = tb.size()/2;
    }
    	
    for(int i=0; i<k; i++)
    {
        a.push_back(tb[i]);
    	uporzadkuj(a);
    }
    	
    for(int i=k; i<k*2; i++)
    {
    	b.push_back(tb[i]);
    	uparzadkuj(b);
    	return scal(a, b);
    }
}

int main(int argc, char** argv) 
{
     vector <int> t {8, 4, 2, 1};
    uporzadkuj(t);

    for(int i=0; i<t.size(); i++)
    {
        cout<<t[i]<<" ";
    }
    return 0;
