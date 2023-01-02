#include <stdio.h>
#include <string.h>

struct student
{
    char ID[20];
    char name[20];
    int chn;
    int eng;
    int math;
    int total;
    int rank;
    int avg;
}ss[5]={
"105001", "王小明", 92, 73, 80, 0, 1, 0,
"105002", "陳小華", 93, 90, 82, 0, 1, 0,
"105003", "趙錢孫", 82, 65, 72, 0, 1, 0,
"105004", "阿土仔", 86, 90, 82, 0, 1, 0,
"105005", "吳小美", 95, 90, 93, 0, 1, 0};

int main()
{
    int chnavg, engavg, mathavg;

    for(int k=0 ; k<5 ;k++){
      ss[k].total = ss[k].chn + ss[k].eng + ss[k].math;
    }

    chnavg = (ss[1].chn + ss[2].chn + ss[3].chn + ss[4].chn + ss[0].chn) / 5;
    engavg = (ss[1].eng + ss[2].eng + ss[3].eng + ss[4].eng+ ss[0].eng) / 5;
    mathavg = (ss[1].math + ss[2].math + ss[3].math + ss[4].math + ss[0].math) / 5;

    for(int i=0 ; i<4 ; i++)
    {
      for(int j=0 ; j<5 ; j++){
        if(j!=i){
          if(ss[i].total<ss[j].total){
            ss[i].rank++;
        }

      }
        }
    }


    for(int l=0 ; l<5 ; l++){
      printf("學號:%6s 姓名:%6s 國文=%d 英文=%d 數學=%d 總分=%d 排名 %d\n", ss[l].ID, ss[l].name, ss[l].chn, ss[l].eng, ss[l].math, ss[l].total, ss[l].rank);
    }

    printf("國文平均=%d 英文平均=%d 數學平均=%d\n", chnavg, engavg, mathavg);

    return 0;
}
