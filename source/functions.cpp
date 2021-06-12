#include "functions.hpp"
#include "Init.hpp"
void Reset1(){
	Result res = AM_DeleteAllDemoLaunchInfos();
	if (R_FAILED(res))
		printf("\n\n Failed to reset, please report in a new issue...");
	else
		printf("\n\n All done!");
	    printf("\n Press Start to exit...");
       
}

bool AMnet(){
	Handle amHandle;
	Result res = srvGetServiceHandle(&amHandle, "am:net");
	if(R_SUCCEEDED(res)){
		return true;
	} else {
		return false;
	}
      
       
}
