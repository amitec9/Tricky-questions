#include<stdio.h>
#include<string.h>
#include<iostream>
#include<string>
union Float {
    float    m_float;
    uint8_t  m_bytes[sizeof(float)];
};
 
float        pi;
uint8_t      bytes[sizeof(float)];
Float        myFloat;
 
int main()
{
    pi = 3.141565f;
    
    printf("\r\n*******************************************\r\n");
    printf("*******************************************\r\n\r\n");
    printf("pi = %.6f\r\n", pi);
    printf("bytes = [ %lu, %lu, %lu, %lu]\r\n", bytes[0], bytes[1], bytes[2], bytes[3]);
  
    printf("\r\n***** Conversion by using type casting *****\r\n\r\n");
    
   *(float*)(bytes) = pi;  // convert float to bytes
    printf("bytes = [ %lu, %lu, %lu, %lu ]\r\n", bytes[0], bytes[1], bytes[2], bytes[3]);
    
    // send bytes over data channel ..
    
    // receive bytes ..
        
    pi = *(float*)(bytes);  // convert bytes back to float
    printf("pi = %lu\r\n", pi); 
 
    printf("\r\n********* Conversion by using union *********\r\n\r\n");
       
    myFloat.m_float = pi;   // assign a float to union
    printf("myFloat.m_Float = %.6f\r\n", myFloat.m_float);
    printf("myFloat.m_Bytes = [ 0x%.2x, 0x%.2x, 0x%.2x, 0x%.2x ]\r\n", myFloat.m_bytes[0], myFloat.m_bytes[1], myFloat.m_bytes[2], myFloat.m_bytes[3]);  // get the bytes   
    
    // send bytes over the data channel ..
    
    // receive bytes and assign them to the union bytes: myFloat.m_bytes[0] = received_bytes[0] ..        
   
    pi = myFloat.m_float;   // get the float back from the union
    printf("pi = %.6f\r\n", pi);    
}