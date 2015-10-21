static int methodFor(int n)
{
	int total = 0;

	for(int i = 1; i <= n; i++) 
		total += i;

	return i;
}

static int methodWhile(int n)
{
	(void)n;
	return 0;
}

static int methodRecurse(int n)
{
	(void)n;
	return 0;
}