/*

assignment= Write a program non-recursive and recursive program to calculate Fibonacci numbers and
analyze their time and space complexity
*/
//without Recursion
#include <iostream>  
using namespace std;  
int main() {  
  int n1=0,n2=1,n3,i,number;    
 cout<<"Enter the number of elements: ";    
 cin>>number;    
 cout<<n1<<" "<<n2<<" ";     
 for(i=2;i<number;++i)     
 {    
  n3=n1+n2;    
  cout<<n3<<" ";    
  n1=n2;    
  n2=n3;    
 }    
   return 0;  
   }  
   
/*
Enter the number of elements: 5
0 1 1 2 3 
*/
//with recursion

#include<iostream>    
using namespace std;      
void printFibonacci(int n){    
    static int n1=0, n2=1, n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
 cout<<n3<<" ";    
         printFibonacci(n-1);    
    }    
}


int main(){    
    int n;    
    cout<<"Enter the number of elements: ";    
    cin>>n;    
    cout<<"Fibonacci Series: ";    
    cout<<"0 "<<"1 ";  
    printFibonacci(n-2);  //n-2 because 2 numbers are already printed    
     return 0;  
}  
/*
Enter the number of elements: 6
Fibonacci Series: 0 1 1 2 3 5 
*/
