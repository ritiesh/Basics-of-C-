

#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*vector<int>v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.emplace_back(50);
	v.emplace_back(60);
	vector<pair<int,int>>vec;
	vec.push_back({2,3});
	vec.emplace_back(5,6);
	for(int i=0;i<6; i++)
	{
		cout<<v[i]<<endl;
	}
	for(vector<int>::iterator it=v.begin();it!=v.end();it++)
	    cout<<*it<<endl;
	for(auto it=v.begin();it!=v.end();it++)
	    cout<<*it<<endl;
	vector<int>::iterator it=v.end()-1;
	cout<<*it<<endl;
	vector<int>::iterator lp=v.begin();
	cout<<*lp<<endl;
	cout<<v.back()<<endl;
	cout<<v.front()<<endl;
	for(int m:v)
	{
	cout<<m<<endl;
	}*/
	/*vector<int>c;
	c.push_back(10);
	c.push_back(20);
	c.insert(c.begin(),300);
	c.insert(c.begin()+1,2,5);
	vector<int>g(2,100);
	c.insert(c.begin(),g.begin(),g.end());
	for(auto it=c.begin();it!=c.end();it++)
    {
        cout<<*it<<endl;
    }
    cout<<c.size();
    c.pop_back();
    for(auto it=c.begin();it!=c.end();it++)
    {
        cout<<*it<<endl;
    }*/
    vector<int>v1;
    v1.push_back(10);
    vector<int>v2;
    v2.push_back(20);
    v1.swap(v2);
    cout<<v1[0];
    cout<<v2[0];
    v1.clear();
    cout<<v1.empty();


	/*for(int i=0;i<4;i++)
    {
        cin>>c[i];
    }
    for(auto it=c.begin();it!=c.end();it++)
    {
        cout<<*it<<endl;
    }
    c.erase(c.begin()+2,c.begin()+4);
     for(auto it=c.begin();it!=c.end();it++)
    {
        cout<<*it<<endl;
    }
*/
	return 0;
}
