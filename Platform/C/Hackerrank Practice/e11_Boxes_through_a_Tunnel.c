#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

typedef struct box
{
	int length,width,height;
}box;



int is_lower_than_max_height(box b) {
	if(b.height<MAX_HEIGHT)
    return 1;
    else
    return 0;
}
int get_volume(box b) {
return b.length*b.width*b.height;
}


int main()
{
	int n;
	scanf("%d", &n);
	box boxes[n];
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}