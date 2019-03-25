#include<stdio.h>
int main()
{
	int i,j,k,u,v,n,cost[10][10],dist[10];
	printf("Enter the number of vertices: ");
	scanf("%d",&n);
	printf("Enter the source vertex: ");
	scanf("%d",&v);
	printf("Enter the cost matrix: ");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&cost[i][j]);
	for(i=1;i<=n;i++)
		dist[i]=cost[v][i];
	dist[v]=0;
	for(k=2;k<=n-1;k++)
	{
		for(u=0;u<n;u++)
		{
			if(u!=v)
			{
				for(j=0;j<n;j++)
				{
					if(dist[u]>dist[j]+cost[j][u])
						dist[u]=dist[j]+cost[j][u];
				}
			}
		}
	}
	for(i=0;i<n;i++)
		printf(" %d -> ",dist[i]);
return 0;		
}
