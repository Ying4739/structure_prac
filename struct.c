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
"105001", "Ann", 92, 73, 80, 0, 1, 0,
"105002", "Chen", 93, 90, 82, 0, 1, 0,
"105003", "Sun", 82, 65, 72, 0, 1, 0,
"105004", "Tina", 86, 90, 82, 0, 1, 0,
"105005", "Wu", 95, 90, 93, 0, 1, 0};

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
      printf("ID:%6s Name:%6s Mandarin=%d English=%d Math=%d Total score = %d Rank %d\n", ss[l].ID, ss[l].name, ss[l].chn, ss[l].eng, ss[l].math, ss[l].total, ss[l].rank);
    }

    printf("Mandarin Avg.=%d English Avg.=%d Math Avg.=%d\n", chnavg, engavg, mathavg);

    return 0;
}
