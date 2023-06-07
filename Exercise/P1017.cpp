// P1017 [NOIP2000 提高组] 进制转换 
#include<bits/stdc++.h>
using namespace std;
void zhuan(int m,int n)
{
	if(m==0) return ;
	// 如果m除尽，递归结束
	int l=m%n;
	// l为余数，但如果要作储存，余数必须是正数 
	if(l<0) l-=n,m+=n;
	// 余数绝对值小于除数，可以直接放在当前位
    // 如果余数小于0，转化为正数
	if(l>=10) l='A'+l-10;
	else l+='0';
	// “+0”是为了将数字转化为字符
	// 将余数转化为ascll码方便输出，省略了一个数组
	// 这个很重要，必可活用于下一次
	zhuan(m/n,n);
	// 递归
	printf("%c",l);
	// 注意，因为结果为余数倒序，输出要写在递归后面，不然会顺序输出 
	return ;
	// 结束
}
int main()
{

    int m,n;
    scanf("%d%d",&m,&n);
    cout<<m<<'=';
    zhuan(m,n);
	// 按照题目格式输出
    printf("(base%d)",n);
}