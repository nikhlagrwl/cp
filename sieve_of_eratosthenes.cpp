// Program for sieve of eratosthenes to print all prime numbers from 1 to n
// Time complexity ----- O(n(log(log(n))))

void sieve_of_eratosthenes(int n)
{
	int i,j;
	vector<int> prime(n+1,1);
	prime[0] = 0;
	prime[1] = 0;

	for(i=2;i<=(int)sqrt(n);i++)
		if(prime[i] == 1)
			for(j=i*i;j<=n;j+=i)
				prime[j] = 0;

	for(i=2;i<=n;i++)
		if(prime[i] == 1)
			cout<<i<<" ";
}