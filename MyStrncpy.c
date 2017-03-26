//strncpy�������ܣ����ַ���from ������count���ַ����Ƶ��ַ���to�С�
//����ַ���from �ĳ���С��count�����ಿ����'\0'������ش�����ɵ��ַ�����
char* MyStrncpy(char* str1, const char* str2, size_t n)
{
	assert(str1 && str2);
	if (!n)
		return str1;

	char* tmp = str1;
	while (n && (*str1++ = *str2++))
	{
		n--;
	}
	
	if (n)
	{
		while (n--)
		{
			*str1--;
		}
		str1 = '\0';
	}
	return tmp;
}