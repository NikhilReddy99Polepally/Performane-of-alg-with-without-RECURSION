#include<iostream>
#include<stdlib.h>
#include <ctime>   //to calc. execution time
#include<math.h>

            // fibonacci series : 0,1,1,2,3,5,8,13,......

using namespace std;

int fibonaccirecursion(int n)
{
     if(n==1) return 0;
     if(n==2) return 1;
     else
     {
       return fibonaccirecursion(n-1)+fibonaccirecursion(n-2);
       }
}

void fibonacci(int n)
{       
   int a=0,b=1,c,j=0;
   
   if(n==1) return;
   
   if(n==2) return;
   
   else
   {
      while(j<n-2)
      {
          c = a+b;
          a = b;
          b = c;
          j++;
       }      
    }
}

int main()
{
   int n,y;
   
   for(n=1;n<46;n++)
   {
     for(int i=1;i<3;i++)
      {    
       float start_s = clock();
       
          switch(i)
          {
             case 1 : y = fibonaccirecursion(n);
           
                     cout<<y<<",";
                     
                      break;
                      
             case 2 : fibonacci(n);
      
                      break;
           }
       
          float stop_s = clock();
     
        if(i==1)  cout  << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << ",";    // will be getting time in milli sec 
        
        if(i==2)  cout  << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000;
      } 
      cout<<endl;
    }
      
 return 0;
 }
