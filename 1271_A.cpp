#include<iostream>

using namespace std;
int main()
{
    int ties,scarves,vests,jackets,cost_first_type,cost_second_type,sm,cost;

    cin >>ties;
    cin >>scarves;
    cin >>vests;
    cin >>jackets;
    cin >>cost_first_type;
    cin >>cost_second_type;

    if(scarves <= vests)
    {
        sm = scarves;
    }
    else{
        sm = vests;
    }
if(cost_first_type < cost_second_type){
    if(jackets <= sm)
    {
        cost = jackets*cost_second_type;
    }
    else{
        cost = sm*cost_second_type;
        jackets=jackets-sm;

        if(jackets <= ties)
        {
            cost += jackets*cost_first_type;
        }
        else{
            cost += ties*cost_first_type;
        }
    }
}
else{
     if(jackets <= ties)
        {
            cost = jackets*cost_first_type;
        }
        else{
            cost = ties*cost_first_type;
            jackets = jackets-ties;

            if(jackets <= sm)
            {
              cost += jackets*cost_second_type;
            }
            else{
                cost += sm*cost_second_type;

                }
        }
}

    cout <<cost<<endl;

    return 0;
}
