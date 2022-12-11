#include<iostream>
#include<stack>
using namespace std ;
int main()
{
    stack<int> my_goal;
    my_goal.push(0);
    my_goal.push(1);
    my_goal.push(2);
   

    while(!my_goal.empty())
    {
        cout<<" "<<my_goal.top();
        my_goal.pop();
        
    }
return 0;
}