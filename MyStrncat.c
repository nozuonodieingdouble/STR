//strncat�������ܣ����ַ���from ������count���ַ����ӵ��ַ���to�У�׷�ӿ�ֵ�����������ش�����ɵ��ַ�����
//�ȽϿӵ�һ���ǲ��ܽ����һλҲ����һ���ַ���������ȥ������Ҫ����\0
char* MyStrncat(char* str1, const char* str2,size_t n)
{
	assert(str1 && str2);
	char* tem = str1;

	while (*str1)
	{
		str1++;
	}

	while (n--)
	{
		if (!(*str1++ = *str2++))
		{
			return tem;
		}
		*str1 = '\0';
	}

	return tem;
}