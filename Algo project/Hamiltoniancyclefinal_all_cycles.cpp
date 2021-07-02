#include <bits/stdc++.h>
using namespace std;
#define N 100
int visit[N],a,b,n,edgenum;;
list <int> adj[N];
list <int> path;
vector<list<int> > cycles;

bool ham(int current,int source)
{
    static bool ex = 0;
    //cout << "<----------------Visiting----------------->" << current <<endl;
    path.push_back(current);
    visit[current] = 1;
    list <int>::iterator it;
    for(it=adj[current].begin(); it!=adj[current].end(); it++)
    {
        //new logic
            //if(not visited) then go for recursion
            //if source == next && path.size == nodes then return true [exists]
        //end of new logic
        //cout << "Current Node " << current << " Adjacent: " << *it <<endl;
        if(source == *it && path.size() == n){
            //cout << "\t\tSource == adjacent(" << *it << ")" << "of " << current << endl;
            cycles.push_back(path);
            ex = true;
            //return ex;
        }
        if(visit[*it] == 0){//if not visited then visit
            ham(*it, source);
            //cout << "Backtracking to " << current << " remaining " << *it << endl;
        }
    }
    visit[current] = 0;
    path.pop_back();
    //cout << "Out of loop\n";
    return (ex == true) ? ex : false;
}
int main()
{
    memset(visit,0,sizeof(visit));
    FILE *p = fopen("input.txt","r");
//    FILE *q = fopen("output","w");
    fscanf(p,"%d%d",&n,&edgenum);
    for(int i = 1; i<=edgenum; i++)
    {
        fscanf(p,"%d%d",&a,&b);
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    if(ham(1,1))
    {
        cout << "Printing path: " << endl;
        for(vector<list<int> >::iterator i = cycles.begin(); i != cycles.end(); ++i){
            for(list <int>::iterator it= i->begin(); it != i->end(); it++)
            {
                cout<< *it << " ";
            }
            cout << endl;
        }
    }
    else{
        cout << "Not hamiltonian!" << endl;
    }
    return 0;
}
