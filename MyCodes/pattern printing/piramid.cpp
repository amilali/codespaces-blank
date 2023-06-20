#include<bits/stdc++.h>
using namespace std;
int main()
{
    for(int i=0; i<10; i++) // reverse pyramid
    {
        for(int j=i; j<10; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
/*
**********
*********
********
*******
******
*****
****
***
**
*
*/

// int main()
// {
//     for(int i=0; i<10; i++) //  pyramid
//     {
//         for(int j=0; j<i; j++)
//         {
//             cout<<i; // play with i and j
//         }
//         cout<<endl;
//     }
//     return 0;
// } 
/*
1
22
333
4444
55555
666666
7777777
88888888
999999999
*/


// int main()
// {
//     for(int i=0; i<5; i++) //  hollow square
//     {
//         for(int j=0; j<10; j++)
//         {
//             if(i==0 || i==4 || j==0 || j==9)
//             cout<<"*"; 
//             else{
//                 cout<<" "; 
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// } 
// **********
// *        *
// *        *
// *        *
// **********