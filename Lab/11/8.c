8. You are transporting some boxes through a tunnel, where each box is a parallelepiped, and is
characterized by its length, width and height.
The height of the tunnel is 41 feet, and the width can be assumed to be infinite. A box can be carried
through the tunnel only if its height is strictly less than the tunnel's height. Find the volume of each box
that can be successfully transported to the other end of the tunnel. Note: Boxes cannot be rotated.
Sample Input 0
4
5 5 5
1 2 40
10 5 41
7 2 42
Sample Output 0
125
80
Explanation: The first box is low, only 5 feet tall, so it can pass through the tunnel and its volume is
5*5*5=125. The second box is sufficiently low, its volume is 1*2*40=80. The third box is exactly 41
feet tall so it cannot pass. The same can be said about the fourth box.
Note: Only use structs for this question
#include <stdio.h>

struct Box {
    int length;
    int width;
    int height;
};

// Function to calculate transportable volumes
void calculateTransportableVolume(struct Box boxes[], int numBoxes) {
    int tunnelHeight = 41;

    printf("Volumes of transportable boxes:\n");

    for (int i = 0; i < numBoxes; i++) {
        int volume = boxes[i].length * boxes[i].width * boxes[i].height;
        
        if (boxes[i].height < tunnelHeight) {
            printf("%d\n", volume);
        }
    }
}

int main() {
    // Example: Array of boxes
    struct Box boxes[] = {
        {5, 10, 20},
        {7, 8, 35},
        {15, 25, 30},
        {10, 10, 40},
        {20, 20, 20}
    };

    int numBoxes = sizeof(boxes) / sizeof(boxes[0]);

    // Calculate and print transportable volumes
    calculateTransportableVolume(boxes, numBoxes);

    return 0;
}
