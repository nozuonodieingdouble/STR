//strcpy——功能：复制字符串from 中的字符到字符串to，包括空值结束符。返回值为指针to
char* MyStrcpy(char* dst, const char* src)		//src为原字符串，dst为目标字符串
{
	assert(src && dst);
	char* ret = dst;	//先让ret保存dst的起始位置
	while (*dst++ = *src++)		//将src中的值一次拷贝到dst之中
	{
		;
	}
	return dst;
}
