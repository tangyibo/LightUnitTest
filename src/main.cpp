#include "lut.h"   

int fibnacci(int n)
{
	if(n<1) return 0;
	if(n==1 || n == 2) return 1;
	return fibnacci(n-1) + fibnacci(n-2);
}

TEST(fibnacci,first)
{
	bool b=fibnacci(1);
	ASSERT_TRUE(b);
}

TEST(fibnacci,second)
{
	ASSERT_EQ(1,fibnacci(1));
	ASSERT_EQ(1,fibnacci(2));
	ASSERT_EQ(2,fibnacci(3));
	ASSERT_GT(3,fibnacci(4));
}

int main(int argc,char * argv[])  
{  
	return ::lut::RunAllTests();  
}  

