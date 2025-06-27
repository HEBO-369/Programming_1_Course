#include <stdio.h>
#include <string.h>

int main (){
int const Max_jobs = 20 ;
char job_titles[Max_jobs][50] ;
double salary [Max_jobs][2] ;
double aver_salary [Max_jobs] ;
int num_job ;
printf("enter the number of jobs : ") ;
scanf("%d",&num_job) ;
if ( num_job > 20 || num_job < 1){
    printf("enter a number between 1-20");
    return 1 ;
}
for (int i = 0 ; i < num_job ; i++){
    printf("enter a job title %d :", i + 1) ;
    scanf("%s",&job_titles[i]) ;
    printf(" enter the low salary for job %d:",i+1) ;
    scanf("%lf",&salary[i][0]) ;
    printf(" enter the high salary for job %d:",i+1) ;
    scanf("%lf",&salary[i][1]) ;
    aver_salary[i] = (salary[i][0]+ salary[i][1])/2.0 ;
}

for (int i = 0 ; i < num_job ; i++){
    printf(" the job number %d : %s\n ", i + 1 ,job_titles[i]) ;
    printf(" the low salary for job %d:%lf\n", i+1 , salary[i][0]) ;
    printf(" the high salary for job %d:%lf\n", i+1 , salary[i][1]) ;
    printf(" the average salary of job number %d : %lf\n", i + 1 ,aver_salary[i]) ;
}
double lowest = aver_salary[0] ;
int l = 0 ;
double highest = aver_salary[0] ;
int h = 0 ;
for (int i = 1 ; i < num_job ; i++){
        if ( aver_salary[i] < lowest ){
            lowest = aver_salary[i] ;
            l = i ;
        }
        if (aver_salary[i] > highest){
            highest = aver_salary[i] ;
            h = i ;
        }
}
printf("the lowest average salary is %lf for job : %s\n",lowest ,job_titles[l]);
printf("the highest average salary is %lf for job : %s\n",highest ,job_titles[h]);
return 0 ;
}
