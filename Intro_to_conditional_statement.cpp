#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if(N%2!=0)
    cout<<"Weird"<<endl;

    if(N%2==0 && (N==2|| N==3 || N==4|| N==5))
    cout<<"Not Weird"<<endl;

    if( N%2==0 && (N==6||N==7||N==8||N==9||N==10||N==11||
    N==12||N==13||N==14||N==15||N==16||N==17||N==18||N==19||N==20))
    cout<<"Weird"<<endl;
     if(N%2==0 && N>20)
     cout<<"Not Weird"<<endl;

    return 0;
}
