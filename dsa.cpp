#include<iostream>
using namespace std;
void tower(int n, char source, char dest, char aux){
if(n==1)
{
    cout<<"Move ring 1 from " <<source<<" to "<<dest<<endl;
    return ;
}
tower(n-1, source, dest ,aux);
cout<<" Move ring "<<n<<"from "<<source <<" to "<<dest<<endl;
tower(n-1, aux, source, dest);
}
int main(){
    int n;
cout<<"enter the number of rings: ";
cin>>n;
cout<<"\nSteps to solve Tower of Hanoi: \n";
tower(n, 'A', 'B', 'C');
return 0 ;
};
