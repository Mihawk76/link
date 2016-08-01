#include<stdio.h>
#include <curl/curl.h>
#include "res_sensor.c"
int main()
{
        
	res_sensor ("http://10.42.0.1/post.php",45,56,67,56,97,10,30,45);
         
       
	return 0;
        
}


