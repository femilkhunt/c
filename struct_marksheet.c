#include <stdio.h>
struct student
{
    int eng, guj, sci, tot, per;
};

void main()
{
    struct student stu[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d student mark :\n", i + 1);
        printf("enter sci mark : ");
        scanf("%d", &stu[i].sci);
        printf("enter eng mark : ");
        scanf("%d", &stu[i].eng);
        printf("enter guj mark : ");
        scanf("%d", &stu[i].guj);

        stu[i].tot=stu[i].eng + stu[i].guj + stu[i].sci;
        stu[i].per=stu[i].tot / 3; 
    }

    printf("\nno.\teng\tguj\tsci\ttot\tper\n");

    for(int i=0;i<3;i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\n",i+1,stu[i].eng,stu[i].guj,stu[i].sci,stu[i].tot,stu[i].per);
    }
}