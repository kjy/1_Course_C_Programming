/*Compute the average weight for a population of elephant seals.
 Data located at:
 https://d18ky98rnyall9.cloudfront.net/W_lzvc89Eem06hL8prFFBA_161b31dd311a49239814cf1dff0bec18_elephant_seal_data?Expires=1600646400&Signature=DlZHbtJ1IdiP1eOojeook3hk-0EquJlV0nhKcv5QvHV-YJ9c4BtImFDtDtLPl0gQExMAg8s~ZRCiwLsKvvEmdMXHbxYQdiapC6DRn0t0vEINpBQGVBrgN7TwRI0ZVea6zr1YfUhPEELW8VihSsKdlxGFuX-3fqYV-m8-QNFVbBk_&Key-Pair-Id=APKAJLTNE6QMUY6HBC5A
*/

#include <stdio.h>
#include<stdlib.h>

int main(void)
{
    FILE *ifp;
    
    //Reading the data
    ifp = fopen("data.txt","r");
    
    if (ifp == NULL) {
        fprintf(stderr, "Can't open input file in.list!\n");
        exit(1);
    }
    
    //Initialize the variables
    const int SIZE = 1000;
    int weight, weights[SIZE];
    int i=0;
    while (fscanf(ifp, "%d\t",&weights[i]) != EOF){
        printf("%d\n",weights[i]);
        i++;
    }
    
    fclose(ifp); // close file
    
    
    double sum = 0.0;
    printf("\n elephant seals weights are:\n");
    // use for loop to print out each value
    for (i = 0; i < SIZE; i++) {
        printf("%d\t", weights[i]);
    }
    printf("\n\n");
    // calculate sum of all weights
    for (i = 0; i < SIZE; i++)
        sum = sum + weights[i];
    // print out the average by dividing by size, which is number of weights.
    printf("average population weight is %.2f\n\n", sum/SIZE);
    
}
