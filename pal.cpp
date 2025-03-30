#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
   if(n<= 1){
      return n;
   }
   int n1 = fibo(n-1);
   int n2 = fibo(n-2);
   return n1+n2;
}


int main(){
   // int num = 123;
   // int rem;
   // int rnum = 0;
   // while(num > 0){
   //      rem = num % 10; //remainder          
   //      rnum = (rnum * 10) + rem; 
   //      num = num/10;// result 
   // }
   // cout << rnum;
   // return 0;
   // // 
 
 // prime numbers   
   // int n = 4;
   // int count;
   // for(int i = 0; i<n; i++){
   //    if(n%i == 0){
   //       count ++;
   //    }
   // }
   // if(count ==2){
   //    cout <<  "true";
   // }else{
   //    cout << "false";
   // }

   // 1 1 2 3
   // cout << fibo(3);
   cout << lcm(6,9);
   return 0;
}




