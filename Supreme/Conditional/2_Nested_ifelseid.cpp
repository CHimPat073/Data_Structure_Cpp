// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int marks;
//     cout<<"Enter Your Marks : ";
//     cin >>marks;
//     if (marks>=90){
//         cout<<"Grade A"<<endl;
//     }
//     else{
//         if(marks>=80){
//             cout<<"Grade B"<<endl;
//         }
//         else{
//             if(marks>=60){
//                 cout<<"Grade C"<<endl;
//             }
//             else{
//                 if(marks>=40){
//                 cout<<"Grade D"<<endl;
//                 }
//                 else{
//                     cout<<"Grade F"<<endl;
//                 }
//             }
//         }
//         }
    
//     return 0;
// }

 #include<bits/stdc++.h>
 using namespace std;
 
 int main(){
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if (marks>=90){
        cout<<"Grade A"<<endl;
    }
    else if(marks>=80){
        cout<<"Grade B"<<endl;
    }
    else if(marks>=60){
        cout<<"Grade C"<<endl;
    }
    else if(marks>=40){
        cout<<"Grade D"<<endl;
    }
    else{
        cout<<"Grade F"<<endl;
    }
    return 0;
 }
