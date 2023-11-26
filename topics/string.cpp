// #include<iostream>
// using namespace std;
// int main(){
//     char name[20];
//     cout<<"Enter your name";
//     cin>>name;
//     cout<<"your name is";
//     cout<<name<<endl;
// }

//  size of string 
/*
#include<iostream>
using namespace std;
int getlen(char name[]){
    int count =0;
    for(int i =0; name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cin>>name;
    cout<<getlen(name)<<endl;
    return 0;
}
*/

// reverse a string
// #include<bits/stdc++.h>
// using namespace std;
// void getreverse(char name[] , int n){
//        int s =0,e=n-1;
//        while(s<e){
//         swap(name[s],name[e]);
//         s++;
//         e--;
//        }
// }
// int getlen(char name[]){
//     int count =0;
//     for(int i =0; name[i] != '\0';i++){
//         count++;
//     }
//     return count;
// }
// int main(){
//     char name[20];
//     cin>>name;
//     int num = getlen(name);
//     cout<<"size of name  "<<num<<endl;
//     getreverse(name , num);
//     cout<<name<<endl;
//     return 0;
    
// }

// using stl reverse  string
/*
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str = "hii i am deepanshu";
     reverse(str.begin(),str.end());
    cout<<str<<endl;
    return 0;
}

*/
// #include<iostream>
// using namespace std;
// int main(){
//     string str = "hiosvofnbnok";
//     int n = str.size();
//     cout<<n<<endl;
//     return 0;
// }


/*concatenation of array*/



/*
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{   string str1="", str2="";

    cout<<"Enter String 1:\n";
    cin>>str1;
    cout<<"Enter String 2:\n";
    cin>>str2;
    
    string res = str1 + str2;
    cout<<"Concatenated String:"<<endl;
    cout<<res;
    
	return 0; 
}

// by using stl 
#include <bits/stdc++.h> 
using namespace std; 

int main() 
{   string str1="", str2="";

    cout<<"Enter String 1:\n";
    cin>>str1;
    cout<<"Enter String 2:\n";
    cin>>str2;
    
    str1.append(str2);
    cout<<"Concatenated String:"<<endl;
    cout<<str1;
    return 0; 
}*/


/* this how i print the  name with space */


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string abc;
// cout<<"Enter Name";
// getline(cin,abc);
// cout<<abc;
//     return 0;
// }

// pallindrom of yes or no  
/*
#include<iostream>
using namespace std;
// is string is casesinsitive
char tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z')
       return ch;
    else{
        char temp = ch - 'A' +'a';
        return temp;
    }   
}
int checkpallindrom(char name[] , int num){
    int s =0, e= num-1;
    while(s<=e){
        if(tolowercase(name[s])!= tolowercase(name[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
int getlen(char name[]){
    int count =0;
    for(int i =0; name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cin>>name;
    int num = getlen(name);
    cout<<"size of name  "<<num<<endl;
    int pallin = checkpallindrom(name , num);
    cout<<"pallindrom "<<pallin<<endl;
}
*/