vector<bool> primesseive(int n)
{
    vector<bool> prime;
    for(int i=2;i<n+1;++i)
    {
        prime.push_back(true);
    }
  	for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
	return prime;
}
vector<int> Solution::primesum(int A) {
    vector<int> answer;
    vector<bool> seq=primesseive(A);
    for(int i=2;i<A+1;++i)
    {
        if(seq[i]==true&&seq[A-i]==true)
        {
            answer.push_back(i);
             answer.push_back(A-i);
             break;
        }
    }
    return answer;
}
