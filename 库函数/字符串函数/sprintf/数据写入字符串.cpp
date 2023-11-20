#define  _CRT_SECURE_NO_WARNINGS
//将 %f 格式的数据写入到字符串中
#define _USE_MATH_DEFINES 1  //如果要使用<math.h>里面的宏，需要定义_USE_MATH_DEFINES 
#include <stdio.h>
#include <math.h>

int main()
{
	char str[80];

	sprintf(str, "Pi 的值 = %f", M_PI);
	puts(str);

	return(0);
}
