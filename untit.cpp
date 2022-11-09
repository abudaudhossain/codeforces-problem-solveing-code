#include <iostream>
using namespace std;

int main(){
    int t;
   cin >> t;

    int i = 0;
    while(i < t){
        int array_length ;
        cin >> array_length;

        int my_array[array_length];

        for(int index = 0; index < array_length; index++){
            cin >> my_array[index];
        }
        for(int index1 = 0; index1 < array_length; index1++){
            cout << my_array[index1] <<" ";
        }
        

        i++;
    }

    return 0;
}