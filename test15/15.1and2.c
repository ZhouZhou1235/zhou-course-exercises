#include <stdio.h>
struct student{
    char id[100];
    char name[100];
    int course1;
    int course2;
    int course3;
};
float getUserAverage(struct student user){
    float average=(user.course1+user.course2+user.course3)/3;
    return average;
}
void printTheUser(struct student user){
    float average = getUserAverage(user);
    int max=user.course1;
    if(user.course2>user.course1){max=user.course2;}
    if(user.course3>user.course2){max=user.course3;}
    printf("id:%s name:%s\ncourse1:%d course2:%d course3:%d\naverage:%.2f max:%d\n",
    user.id,user.name,user.course1,user.course2,user.course3,average,max);
    return;
}
int theSort(int arr[][2],int length){
    int temp;
    for(int i=1;i<length;i++){
        for(int j=i;j>0;j--){
            if(arr[j-1][1]<arr[j][1]){
                temp = arr[j-1][0];
                arr[j-1][0] = arr[j][0];
                arr[j][0] = temp;
                temp = arr[j-1][1];
                arr[j-1][1] = arr[j][1];
                arr[j][1] = temp;
            }
        }
    }
}
int main(){
    struct student user1,user2,user3,user4,user5;
    scanf("%s %s %d %d %d",&user1.id,&user1.name,&user1.course1,&user1.course2,&user1.course3);
    scanf("%s %s %d %d %d",&user2.id,&user2.name,&user2.course1,&user2.course2,&user2.course3);
    scanf("%s %s %d %d %d",&user3.id,&user3.name,&user3.course1,&user3.course2,&user3.course3);
    scanf("%s %s %d %d %d",&user4.id,&user4.name,&user4.course1,&user4.course2,&user4.course3);
    scanf("%s %s %d %d %d",&user5.id,&user5.name,&user5.course1,&user5.course2,&user5.course3);
    float n1,n2,n3,n4,n5;
    n1 = getUserAverage(user1);
    n2 = getUserAverage(user2);
    n3 = getUserAverage(user3);
    n4 = getUserAverage(user4);
    n5 = getUserAverage(user5);
    int theList[5][2] = {{1,n1},{2,n2},{3,n3},{4,n4},{5,n5}};
    theSort(theList,5);
    for(int i=0;i<5;i++){
        int num;
        num = theList[i][0];
        if(num==1){printTheUser(user1);}
        else if(num==2){printTheUser(user2);}
        else if(num==3){printTheUser(user3);}
        else if(num==4){printTheUser(user4);}
        else if(num==5){printTheUser(user5);}
    }
    return 0;
}
