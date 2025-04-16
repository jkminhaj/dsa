// https://docs.google.com/document/d/1-AlWED5nChiMx4iqH_E-dCTgZn2EmzpB1THvfw-L7pM/edit?tab=t.0

#include <iostream>
#include <vector>
using namespace std ;
int main() {
    
    // declaring a vector . vector is a dynamic array . we can can many methods in an array with the help of vector
    vector<int>v ={2,4,5,2};
    
    // declaring vector with size 5, all elements will be 0 by default
    vector<int>v1(5);
    
    // declaring vector with size 3 , all elements will be 2
    vector<int>v2(6,10);
    
    // copying from another vector
    vector<int>v3(v2);
    
    // Construct a vector by copying all elements from an array A of size N
    
    int arr[] = {3,5,2,5};
    
    vector<int>v4(arr,arr+4);
    
    
    
    for(int i = 0 ; i <v4.size()  ; i++){
        cout << v4[i];
    }
    return 0;
}
