char* reverseWords(char* in, char* out)
{
	int inword = 0, i = 0, count = 0,numb = 0;
	char* p[256] = { 0 };
	while (in[i])
	{
		if (in[i] != ' ' && inword == 0)
		{
			p[numb] = &in[i];
			inword = 1;
			count++;
			numb++;
		}
		else if (in[i] == ' ' && inword == 1)
		{
			inword = 0;
		}
		i++;
	}
	int j = count-1,a = 0;
	while (j >= 0)
	{
		while (*p[j] != ' ' && *p[j] != '\0')
		{
			out[a] = *p[j];
			p[j]++;
			a++;
		}
		if (j != 0)
		{
			out[a] = ' ';
			a++;
		}
		else
		{
			out[a] = '\0';
		}
		j--;
	}
	return out;
}