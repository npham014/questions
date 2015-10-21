static int methodFor(int n)
{
	unsigned i = 0;
	unsigned short total = 0;
	for(; i <= n; ++i)
		total += i;
	return i;
} 

static int methodWhile(int n)
{
	unsigned short i = 0;
	unsigned short total = 0;
	while(i <= n){
		total += i;
		++i;
	}

	return 0;
}

static int methodRecurse(int n)
{
	(void)n;
	return 0;
}