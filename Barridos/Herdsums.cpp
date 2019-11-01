
#include <iostream>

using namespace std;

int n,head,tail,total,current;

int main()
{

    /*

    In this problem https://omegaup.com/arena/problem/herdsums#problems

    We  need to find the ways to obtain N as sum of consecutive integers

    For example
    15

    15=1+2+3+4+5
    15=4+5+6
    15=7+8
    15=15

    Limits N<=10 000 000


    We need to program a solution with O(N).

    Slidding window

    */


    // this is the arrayless solution, (isnt necessary to use a filled array,we have got positive integers only)
    cin>>n;
    //head grows adding each iteration to current, until current is greater than n
    head=1;
    tail=1;
    current=tail;

while(tail<n){ //the tail will increase until n

     while(current<=n){

        head+=1;        //the worm stretchs
        current+=head;



         if(current==n){
                            //we ask if the sume of range is equal to n
            total+=1;
        }

    }

    while(current>=n && tail<n){


        current-=tail;
        tail+=1;            //the worm shrinks

        if(current==n){

            total+=1;        //we ask if the sume of range is equal to n
        }

    }
}
cout<<total<<endl;

    return 0;
}
