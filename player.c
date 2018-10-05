#include <stdio.h>
typedef struct{
	int age;
	char name[20];
}player;
int main(){
	//freopen("playerin.txt", "r", stdin);
	printf("Enter name and age of player\n");
	int i;player a[3];int k=20;
	for(i=0;i<3;i++)
	{
		fgets(a[i].name,k,stdin);
		scanf("%d",&a[i].age);
	}
	int min=0;
	for(i=0;i<3;i++)
        {
        	if(a[i].age<a[min].age)
        		min=i;
        }		
    printf("The person with mininum age is:%s\n",a[min].name);
    return 0;
}
