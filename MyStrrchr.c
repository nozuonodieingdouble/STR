//strrchr�������ܣ���������һ��ָ�룬��ָ���ַ�ch ���ַ���str
//ĩ�γ��ֵ�λ�ã����ƥ��ʧ�ܣ�����NULL
const char* MyStrrchr(const char* str,char ch)
{
	assert(str);
	const char* tmp = str;
	while (*str++)	//����ָ��ָ��\0
	{
		;
	}

	while (--str != tmp)	//ֻҪstr��û�м���tmp�տ�ʼ����ĳ�ʼλ��
	{
		if (*str == ch)
			return str;
	}

	return NULL;
}