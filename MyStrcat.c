//strcat�������ܣ��������ַ���str2 ���ӵ�str1��ĩ�ˣ�������ָ��str1
char* MyStrcat(char *src, const char*dst)
{
	assert(src && dst);
	int count = 0;
	char* ret = src;
	while (*src)	//�����++�ϲ�д������������һ��
	{
		src++;
	}
	while (*src++ = *dst++)
	{
		;
	}
	return ret;
}