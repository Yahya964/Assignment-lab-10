#include<stdio.h>
#include<math.h>

struct point
{
	float x;
	float y;
};

float distance(struct point p1,struct point p2)
{
	float dist;
	dist=sqrt(pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2));
	return dist;
}

int liesInBoundary(struct point p1,struct point P_bottom,struct point P_top)
{
	if(p1.x < P_top.x && p1.x > P_bottom.x && p1.y > P_bottom.y && p1.y < P_top.y)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	struct point P_bottom={2,6};
	struct point P_top={5,10};
	struct point p1 = {3,7};
	struct point p2 ={5,4};
	float d=distance(p1,p2);
	printf("distance between point(%f, %f) and point(%f, %f) is: %f\n",p1.x,p1.y,p2.x,p2.y,d);
	printf("Point inside or outside rectangular boundary:\n");
	if(liesInBoundary(p1,P_bottom,P_top)){
		printf("p1(%f, %f) is inside\n",p1.x,p1.y);
	}
	else{
		printf("p1(%f, %f) is outside\n",p1.x,p1.y);
	}
	if(liesInBoundary(p2,P_bottom,P_top)){
		printf("p2(%f, %f) is inside\n",p2.x,p2.y);
	}
	else{
		printf("p2(%f, %f) is outside\n",p2.x,p2.y);
	}
	return 0;
}
