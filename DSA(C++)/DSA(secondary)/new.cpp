// #include<iostream>
// using namespace std;


// int main () {
//     int n;
//     cin>> n;
//     for (int i = 1; i <=n; i++){
//         for(int j=1; j<=n; j++)
//     {
//        cout<<"*";
//     }
//     cout<<endl;
//     }
    
// }


// #include<iostream>
// using namespace std;


// int main () {
//     int row , col;
//     cin>> row >> col;
//     for (int i = 1; i <=row; i++){
//         for(int j=1; j<=col; j++)
//     {
//        cout<<"*";
//     }
//     cout<<endl;
//     }
    
// }




// #include<iostream>
// using namespace std;


// int main () {
//     int row , col;
//     cin>> row >> col;
//     for (int i = 1; i <=row; i++){
//         for(int j=1; j<=col; j++) {
//             if(i==1 || i==row) {
//              cout<<"*";
//             } else if(j==1 || j==col) {
//              cout<<"*";
//             } else {
//              cout<<" ";
//             }
//             }
//             cout<<endl;
//     }
    
// }


// #include<iostream>
// using namespace std;


// int main () {
//     int n;
//     cin>>n;

//     for (int i = n; i >=1; i--) {
//         for (int j = 1; j <=i; j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }





// #include<iostream>
// using namespace std;


// int main () {
//     int n;
//     cin>>n;

//     for (int i=1; i <=n; i++) {
//         for (int j = 1; j <=n; j++) {
//             if(j<=n-i) {
//                 cout<<" ";
//             } else {
//                 cout<<"*"; 
//             }
//         }
//         cout<<endl;
//     }
    
// }





// #include<iostream>
// using namespace std;


// int main () {
//     int n;
//     cin>>n;

//     for (int i=1; i <=n; i++) {
//         for (int j = 1; j <=i; j++) {
//                 cout<<i<<" "; 
//         }
//         cout<<endl;
//     }
    
// }




// #include<iostream>
// using namespace std;


// int main () {
//     int n;
//     cin>>n;
//     int count = 1;

//     for (int i=1; i <=n; i++) {
//         for (int j = 1; j <=i; j++) {
//                 cout<<count<<" ";
//                 count++; 
//         }
//         cout<<endl;
//     }
    
// }


// #include<iostream>
// using namespace std;


// int main () {
//     int n;
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//                 cout<<"* ";
//         }
//         int space = 2*n - 2*i;
//         for (int j = 1; j <=space; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<"* ";
//         }
        
//         cout<<endl;
        
//     }
//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//                 cout<<"* ";
//         }
//         int space = 2*n - 2*i;
//         for (int j = 1; j <=space; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1; j <=i; j++)
//         {
//             cout<<"* ";
//         }
        
//         cout<<endl;
        
//     }
    
    
// }






// #include<iostream>
// using namespace std;




// int main () {
//     int n;
//     cin>>n;



//     for (int i = 1; i <=n; i++)
//     {
//         for (int j = 1; j <=n+1-i ; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
    
// }




// #include<iostream>
// using namespace std;




// int main () {
//     int n;
//     cin>>n;


//     for (int i = 1; i <=n ; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if((i+j)%2==0) {
//                 cout<<"1 ";
//             } else {
//                 cout<<"0 ";
//             }
//         }
//         cout<<endl;
        
//     }
    
    
// }