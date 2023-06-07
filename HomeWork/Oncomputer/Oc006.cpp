#include<bits/stdc++.h>
using namespace std;
struct student
{
    char st_name[100];
    double st_score[10000];
    double st_score_avg;
}st[10000];
struct student_max
{
    char st_name_max[100];
    double st_score_max;
    double st_class_max;
}stm;
double Variance(double n)
{
    // 计算方差-小数
    double avgsum = 0;
    double avgsumsquare = 0;
    double variance = 0;
    for (int i = 0; i < n; i++)
    {
        avgsum += st[i].st_score_avg;
        avgsumsquare += st[i].st_score_avg*st[i].st_score_avg;
    }
    avgsum = avgsum/double(n);
    avgsumsquare = avgsumsquare/double(n);
    variance = avgsumsquare - avgsum*avgsum;
    return variance;
}

int Variance(int n)
{
    // 计算方差-整数
    int avgsum = 0;
    int avgsumsquare = 0;
    int variance = 0;
    for (int i = 0; i < n; i++)
    {
        avgsum += int(st[i].st_score_avg);
        avgsumsquare += int(st[i].st_score_avg)*int(st[i].st_score_avg);
    }
    avgsum = avgsum/n;
    avgsumsquare = avgsumsquare/n;
    variance = avgsumsquare - avgsum*avgsum;
    return variance;
}
inline double* findmax(student st,int m)
{
    double* max_info = new double[2];
    *(max_info) = 0;
    *(max_info+1) = st.st_score[0];
    for (int i = 1;i<m;i++)
    {
        if(st.st_score[i]>*(max_info+1))
        {
            *(max_info) = i;
            *(max_info+1) = st.st_score[i];
        }
    }
    return max_info;
}
template <typename mode> 
void sort(mode st[],int classnum,int n)
{
    // 排序
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1;j++)
        {
            if(st[j].st_score[classnum-1]<st[j+1].st_score[classnum-1])
            {
                mode temp = st[j];
                st[j] = st[j+1];
                st[j+1] = temp;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Please input the number of students:"<<endl;
    cin>>n;
    int m;
    cout<<"Please input the number of classes:"<<endl;
    cin>>m;
    // 文件
    FILE* fp;
    fp = fopen("students.txt","r");
    if(fp == NULL)
    {
        printf("文件打开失败");
        // 建立文件
        fp = fopen("students.txt","w");
        fclose(fp);
        fp = fopen("students.txt","r");
    }
    // 写入成绩
    // for (int i = 0; i < n; i++)
    // {
    //     double sum = 0;
    //     scanf("%s",st[i].st_name.c_str());
    //     for (int j = 0; j < 5; j++)
    //     {
    //         scanf("%lf",&st[i].st_score[j]);
    //         sum+=st[i].st_score[j];
    //     }
    //     st[i].st_score_avg = (sum)/5.0;
    // }
    // 读取成绩
    for (int i = 0; i < n; i++)
    {
        double sum = 0;
        fscanf(fp,"%s",st[i].st_name);
        for (int j = 0; j < m; j++)
        {
            fscanf(fp,"%lf",&st[i].st_score[j]);
            sum+=st[i].st_score[j];
        }
        st[i].st_score_avg = (sum)/double(m);
    }
    stm.st_class_max = 0;
    strcpy(stm.st_name_max,st[0].st_name);
    stm.st_score_max = st[0].st_score[0];

    for (int i = 0; i < n; i++)
    {
        if((*(findmax(st[i],m))+1)<stm.st_score_max)
        {
            strcpy(stm.st_name_max,st[i].st_name);
            stm.st_class_max = *(findmax(st[i],m));
            stm.st_score_max = *(findmax(st[i],m)+1);
        }
    }

    cout<<"Name:"<<stm.st_name_max<<" Score:"<<stm.st_score_max<<" Class:"<<stm.st_class_max+1<<endl;
    cout<<"double-Variance:"<<Variance(double(n))<<endl;
    cout<<"int-Variance:"<<Variance(n)<<endl;
    int classnum;
    cout<<"Please input the class number as the key for sorting:"<<endl;
    cin>>classnum;
    sort(st,classnum,n);
    fclose(fp);
    fp = fopen("students.txt","w");
    if(fp == NULL)
    {
        printf("文件打开失败");
        exit(0);
    }
    // 写入成绩
    for (int i = 0; i < n; i++)
    {
        fprintf(fp,"%s",st[i].st_name);
        for (int j = 0; j < m; j++)
        {
            fprintf(fp," %lf",st[i].st_score[j]);
        }
        fprintf(fp,"\n");
    }
    fclose(fp);
}