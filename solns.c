/* Enter your solutions in this file */
#include <stdio.h>
int max(int array[], int length){
             float n;
             n = array[0];
             for (int i = 0; i<length; i++){
                 if(n<array[i]){
                    n = array[i];
                    }
             }
         return n;
         }
         
int min(int array[], int length){
             float n;
             n = array[0];
             for (int i = 0; i<length; i++){
                 if(n>array[i]){
                    n = array[i];
                    }
             }
         return n;
         }
         
float average(int array[], int length){
             float sum = 0;
             
             for (int i = 0; i<length; i++){
             sum += array[i];
             }
          
         return sum/length;
         } 
         
int mode(int array[], int length){               
       int maximum = max(array, length);
       int minimum = min(array, length);
       int n;
       int mode = 0;
       int index;
          if(minimum<=0){
            n= maximum - minimum +1;
              }
          else{
            n = maximum;
              } 
                   
             int count[n];
                 for(int j=0; j<=n; j++){
                     count[j]=0;
                       }
       for(int i = 0; i<length; i++){
          for(int j = 0; j<length; j++){
             if(array[i]>=0){
                index = array[i];}
             else{
                 index = maximum-array[i];                    
                                } 
           if(count[index]==0 && array[i] == array[j]){
              count[index]++;
              if(count[index]>count[mode]){
                 mode=index;}
                             }
                           }
                        }
                        
        if (mode>maximum){
           return maximum-mode;
                }
        else{   
           return mode;   
          }
        }
        
int factors(int num, int f[]){
 int index=0;
      f[100];   
    int prime;

   
    for(int i=2; i<=num; i++){
        if(num%i==0){
           prime = 1;
           for(int j=2; j<=i/2; j++){
              if(i%j==0){
                prime = 0;
                break;
                  }
                }
           if(prime==1){      
              for(int rem=num; rem%i==0; rem=rem/i){
                 f[index] = i;
                  index++;
                     }
                  }
               }
           }
           return index;
            }
