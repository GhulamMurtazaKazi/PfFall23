An android developer wants to design a mobile feature to control the brightness of the mobile phone according to the surrounding light. In order to do it he uses an ambient light sensor (for the detection of surrounding light) which is commonly built in in all latest android phones. It gives the value of light intensity in integers. Write a C program for Light sensor value ranges from 0-1000, if it's exposed under sunshine (>500), if it's evening then (0 ~ 100), lighting (100 to 500).
#include<stdio.h>
int main () {
	float intensity;
	printf("enter the light intensity");
	scanf("%f",&intensity);
	if (intensity>=0&&intensity<=1000) {
		if (intensity>500) {
			printf("exposed under sunlight:high brightness");
		} else if (intensity>=100&&intensity<=500) {
			printf("exposed under lighting: moderate brightness");
		}
			else  {
			printf("it is evening time:low brightness");
		}
	}	else {
			printf("invalid");
		} 
	
		return 0;
	
}
