
// 1st Question create Rectangle Pattern

// #include<iostream>
// using namespace std;

// int main() {
//     int row, col;
//     cin >> row >> col;
  
//     for(int i = 1; i <= row; i++) {
//         for(int j = 1; j <= col; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
  
//     return 0;
// }






//2nd Question create Hollow Rectangle Pattern


// #include<iostream>
// using namespace std;


// int main() {
//     int row , col ;
//     cin >> row >> col ;


//     for (int i = 1; i <= row; i++) {
//         for(int j = 1; j <= col; j++) {
//             if(i==1 || i==row || j==1 || j==col) {
//                 cout<<"*";
//             }
//             else {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
// }







//3rd Question create Inverted Half Pyramid



// #include<iostream>
// using namespace std;

// int main () {
//     int n;
//     cin>>n;

//     for(int i=n;i>=1;i--) {
//         for(int j=1;j<=i;j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }







//4th Question create Half Pyramid After 180 deg Rotation



// #include<iostream>
// using namespace std;


// int main () {
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++) {
//         for(int j=1;j<=n;j++) {
//             if(j<=n-i) {
//                 cout<<"  ";
//             } else {
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
// }






//5th Question create Half Pyramid Using Numbers

// #include<iostream>
// using namespace std;


// int main () {
//     int n;
//     cin>>n;

//     for(int i=1;i<=n;i++) {
//         for(int j=1;j<=i;j++) {
//             cout<<i<<" ";
//         }cout<<endl;
//     }
//     cout<<endl;
// }



//6th Question create Floyd's Triangle

// #include<iostream>
// using namespace std;


// int main () {
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=1;i<=n;i++) {
//         for(int j=1;j<=i;j++) {
//             cout<<count<<" ";
//             count++;
//         }cout<<endl;
//     }
//     cout<<endl;
// }





//7th Question create Butterfly Pattern

// #include<iostream>
// using namespace std;


// int main () {
//     int n;
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//            cout<<"*";
//         }
        
    
//         int space = 2*n - 2*i;
//         for (int j = 1; j <= space; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;

//     }

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//            cout<<"*";
//         }
        
    
//         int space = 2*n - 2*i;
//         for (int j = 1; j <= space; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
    
//         }
    
    
// }









// #include<iostream>
// using namespace std;


// int main () {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++) {
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=n;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }










#include<iostream>
using namespace std;


int main () {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}



