#include <bits/stdc++.h>
using namespace std;
  
bool comparator(pair<int, int>& a,pair<int, int>& b){
  
    if (a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}

int comp1(pair<int, int>& a,pair<int, int>& b,pair<int, int>& c){
  
    int p = a.first * (b.second - c.second)+ b.first * (c.second - a.second)+ c.first * (a.second - b.second);
  
    return p < 0ll;
}

int comp2(pair<int, int>& a,pair<int, int>& b,pair<int, int>& c){
  
    int p = a.first * (b.second - c.second)+ b.first * (c.second - a.second)+ c.first * (a.second - b.second);
    return p > 0ll;
}
  
  //// Making Convex Hull with given points
vector<pair<int, int> > convexHull(vector<pair<int, int> >& v){
    sort(v.begin(),v.end(), comparator);
  
    int n = v.size();
    if (n <= 3){
        return v;
    }
    pair<int, int> p1 = v[0];
    pair<int, int> p2 = v[n - 1];
    vector<pair<int, int> > up, down;
    up.push_back(p1);
    down.push_back(p1);
    for (int i = 1; i < n; i++) {
  
        if (i == n - 1 || !comp2(p1, v[i], p2)) {
  
            while (up.size() > 1&& comp2(up[up.size() - 2],up[up.size() - 1],v[i])) {
                up.pop_back();
            }
            up.push_back(v[i]);
        }
  
        if (i == n - 1 || !comp1(p1, v[i], p2)) {
  
            while (down.size() > 1&& comp1(down[down.size() - 2],down[down.size() - 1],v[i])) {
                down.pop_back();
            }
            down.push_back(v[i]);
        }
    }
  
    for (int i = down.size() - 2;i > 0; i--){
        up.push_back(down[i]);
    }

    up.resize(unique(up.begin(),up.end())- up.begin());
  
    return up;
}

//// Checking if point is inside convex hull by calling ConvexHull function
bool isInside(vector<pair<int, int> > points,pair<int, int> query){

    points.push_back(query);

    points = convexHull(points);

    for (auto x : points) {
        if (x == query)
            return false;
    }
    return true;
}
  
// Driver Code
int main()
{

    //// initializing matrix of size 20x20 with random 1 digit integer
    int m=20;
  int matrix[20][20];
  for(int a=0;a<m;a++){
    for(int b=0;b<m;b++){
        matrix[a][b]=rand()%10;
    }
  }

    int n = 5;
    vector<pair<int, int> > points;
    int x,y;
    for(int a=0;a<n;a++){
        cin>>x>>y;
        points.push_back( make_pair(x,y) );
    }
    //points = {{1,1}, {4,10},{10,7},{15,3},{20,18}};
  
    // Checking each box if it is inside convex hull or not. if present then putting the value in ans variable
   int ans=0;
   for(int a=0;a<m;a++){
    for(int b=0;b<m;b++){
        pair<int, int> query = { a, b };
        if (isInside(points, query)) {
            ans+=matrix[a][b];
        }
    }
  }
  cout<<ans<<endl;
    return 0;
}
