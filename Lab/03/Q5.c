QUESTION#5
A bus leaves the university to take students on a field trip. The bus travels 10 kilometers south, 10 kilometers west, another 5 kilometers south and 15 kilometers north with the fuel consumption of 2 liters/km.Calculate how many kilometers it has covered and how much fuel it has consumed on a field trip?
#include<stdio.h>
int main () {
	printf("the bus goes 10 km south\n");
	printf("the bus goes 10 km west\n");
	printf("the bus goes another 5 km south\n");
	printf("the bus goes 15 km north\n");
	int total_distance=40;
	printf("total distance covered by bus is %d\n",total_distance);
	printf("the fuel cossumption for bus is 2 litres/km \n");
	printf("the total fuel consumed by bus in this field trip is %d",total_distance*2);
	return 0;
}
