//strlen�������ܣ����������ַ���str �ĳ���( ����ֵ������֮ǰ�ַ���Ŀ)��

size_t MyStrlen1(const char* str)	//��const��ֹstr���޸�
{
	assert(str);		//���ԣ���ֹstrΪ��ָ�����Ұָ������
	size_t count = 0;
	while (*str++)
	{
		++count;
	}
	return count;
}

size_t MyStrlen2(const char* str)
{
	assert(str);
	const char* eos = str;
	while (*eos++)
		;
	return (eos - str - 1);
}
