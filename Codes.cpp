//  Check the number is Prime or Not   

 #include <iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<< " Non-Prime No.";
            break;
        }
    }
    if(i==n){
        cout<<"Prime No";
    }
    return 0;
}




// All Prime number between a and b

#include <iostream>
using namespace std;
int main(){
    int a,b ;
    cin>>a>>b;
    for( int num=a;num<=b;num++){
        int i;
        for(i=2;i<num;i++){
             if(num%i==0){
                 break;
             }
        }
        if(i==num){
        cout<<num<<" ";
        }
   }
    return 0;
}
        


//  Fctorial No.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int result=1;
    for(int i=2;i<=n;i++){
        result*=i;
    }
    cout<<result;
    return 0;
}



// Factorial By using RECURSION

#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main()
{
   int n;
   cin>>n;
   cout<<fact(n);
   return 0;
}



// Reverse the Number

#include<iostream>
using namespace std;
int main()
{
  int lastNum,reverse=0;
  int n;
  cin>>n;
  while(n>0){
      lastNum = n%10;
      reverse=reverse*10+lastNum ;
      n = n/10;
  }
  cout<<reverse;
  return 0;
}



// Swap the number without using third variable

#include<iostream>
using namespace std;
int main()
{
  int a,b;
  cin>>a >>b;
  a=a>>b;                 //  a=a^b;      a=a*b; 
  b=a<<b;                 //  a=a^b;      a=a/b; 
  a=a<<b;                 //  a=a^b;      a=a/b; 
  cout<<a<<" "<<b;
  return 0;
}


// Reverse the String:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    string s;
    cin>>s;
    string s_rev;
    for( int i=s.size()-1;i>=0;i--){
        s_rev.push_back(s[i]);
    }
    cout<<s_rev<<endl;
    return 0;
}


// Palindrome Number in String:

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    string s;
    cin>>s;
    string s_rev;
    for( int i=s.size()-1;i>=0;i--){
        s_rev.push_back(s[i]);
    }
    cout<<s_rev<<endl;
       
    if(s == s_rev){
          cout<<"Palindrome";
    }
    else{
         cout<<"Not Palindrome";
    }
    return 0;
}



// sum of first n natural numbers

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum;
    return 0;
}

// Output
// 4
// 10



// Program to calculate the length of string without using length() function :

#include <iostream>
using namespace std;
 
int main()
{
        string s;
        cin>>s;
        int i,length=0;
	for(i=0;s[i]!='\0';++i)
	{
	    length++;
	}
	cout<<length<<endl;
 
	return 0;
}

// Output :
// Prepinsta
// 9




// C++ program to toggle each characters in a string

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+32;
        }
        else{
            if(s[i]>='a' && s[i]<='z'){
               s[i]=s[i]-32;
            }
        }
    }
    cout<<s;
    return 0;
}

// Output:
//  PREPinsta
// prepINSTA


// program to count the number of vowels in a string:

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int vowels=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U' ){
            vowels++;
        }
    }
    cout<<vowels;
    return 0;
}

// Output:
// PREPINSTA
// 3



// programming code to remove vowels from a string :

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len = s.length();
    for(int i=0;i<len;i++){
        if(s[i]=='a' ||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U' ){
            for(int j=i;j<len;j++){
                s[j]=s[j+1];
                  
            }
        len--; 
        }
   
    }
    cout<<s;
    return 0;
}

// Output :
// Prepinsta
// Prpnst




#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>> b;
    if(a%2==0){
        cout<<a<<endl<<b<<endl;
    }
    else{
        cout<<b<<endl<<a<<endl;
        
    }
 
    return 0;
}

// Output: 
// 5 4
// 4
// 5

// 4 4
// 4 
// 4



// CapitalBaazi

#include<bits/stdc++.h>
using namespace std;
int main()
{
 string s;
 getline(cin,s);
    
 for(int i=0;i<s.size();i++){
    if(s[i] != ' '){
        s[i] -= 32;
    } 
 }
 for(int i=0;i<s.size();i++){
        if(s[i] == ' '){
           cout<<endl;
         }
        else{
           cout<<s[i];
        }
 }
 return 0;
}


// Output:
//        hello i am shubham

//       HELLO
//       I
//      AM 
//      SHUBHAM