static int methodFor(int n)
{
	int total = 0;
	for(int i = 1; i <= n; ++i)
		total += i;
	return total;
} 

static int methodWhile(int n)
{
	int i = 0;
	int total = 0;
	while(i <= n){
		total += i;
		++i;
	}

	return 0;
}

static int methodRecurse(int n) {
	if(n == 0)
		return 0;
	return n + methodRecurse(n-1);
}