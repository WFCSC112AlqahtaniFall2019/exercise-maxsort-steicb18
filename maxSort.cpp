#include <iostream>
#include <vector>
using namespace std;

// function declarations
void maxSort(vector<int>& list);
void swap(int& a, int& b);
void print(const vector<int>& list);

int main() {

    vector<int> v(5);  // vector to be sorted
    // initialize v
    v.at(0) = 6;
    v.at(1) = 1;
    v.at(2) = 3;
    v.at(3) = 2;
    v.at(4) = 1;
    /*for (int i=0; i<v.size(); i++){
        cin>>v.at(i);
    }
     */



    // print the unsorted v
    cout<<"Unsorted: ";
    for (int i=0; i<v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;



    // sort v

    maxSort(v);
    print(v);
    // print the sorted v

    /* your code here */


    return 0;
}

/* the function definitions */

//Max sort function

void maxSort(vector<int>& list){
    for(int i=list.size()-1;i>=0;i--){
        int current_max = 0;

        for(int j=0;j<=i;j++){
            if (list.at(j)>list.at(i)){
                current_max = list.at(j);
                list.at(j) = list.at(i);
                list.at(i) = current_max;
            }

        }
        /*complete the code*/
    }
}

// swap function
void swap(int& a, int&b){
    /*your code here*/
}

// print function
void print(const vector<int>& list) {
    cout<<"Sorted: ";
    for (int i = 0; i < list.size(); i++) {
        cout<<list.at(i)<<" ";
    }
    cout<<endl;
}

