//strcpy�������ܣ������ַ���from �е��ַ����ַ���to��������ֵ������������ֵΪָ��to
char* MyStrcpy(char* dst, const char* src)		//srcΪԭ�ַ�����dstΪĿ���ַ���
{
	assert(src && dst);
	char* ret = dst;	//����ret����dst����ʼλ��
	while (*dst++ = *src++)		//��src�е�ֵһ�ο�����dst֮��
	{
		;
	}
	return dst;
}
