#include <stdio.h>

struct bill
{
    int no, amt, qty, tot, gst, dist, netbill;
};

void main()
{
    struct bill stu[5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        printf("Enter %d customer details : \n", i + 1);
        printf("Enter price : ");
        scanf("%d", &stu[i].amt);
        printf("Enter quantity : ");
        scanf("%d", &stu[i].qty);

        stu[i].tot = stu[i].amt * stu[i].qty;
        stu[i].dist = stu[i].tot / 20; // 5% discount
        stu[i].gst = (stu[i].tot - stu[i].dist) * 18 / 100;
        stu[i].netbill = (stu[i].tot - stu[i].dist) + stu[i].gst;
    }
    printf("\nNo.\tAmt\tQty\tTot\tDis\tGST\tNetbill\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\n", i + 1, stu[i].amt, stu[i].qty, stu[i].tot, stu[i].dist, stu[i].gst, stu[i].netbill);
    }
}