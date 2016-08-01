#include <stdio.h>
#include <curl/curl.h>
int  res_sensor (char* location,int R,int S,int T, int nilai,int device,int jam,int ment,int det)

{
   char scoreData[128];
   snprintf(scoreData, sizeof scoreData, "location=%s",location);
	{
		snprintf(scoreData, sizeof scoreData, "R=%d&S=%d&T=%d&device=%d&nilai=%d&time=%d:%d:%d:",R,S,T,device,nilai,jam,ment,det);
		  CURL *curl;
		  CURLcode res; 
		  curl_global_init(CURL_GLOBAL_ALL);
		  curl = curl_easy_init();
		  if(curl) { 
		     
			    curl_easy_setopt(curl, CURLOPT_URL, location);
			    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, scoreData);
			    res = curl_easy_perform(curl);
			    if(res != CURLE_OK)
			    fprintf(stderr, "curl_easy_perform() failed: %s\n",curl_easy_strerror(res));
			    curl_easy_cleanup(curl);
		  	}   
		  curl_global_cleanup();
		
	}
return 0;
}


	
