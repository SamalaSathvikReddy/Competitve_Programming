#include <vector>
using namespace std;

struct BIT{
	int n;
	vector<long long>F;
	BIT (int n) {
		this->n = n;
		F.assign(n, 0LL);
	}

	void build(vector<int> &a) {
		for (int i = 0; i < n; i++) 
			update(i, a[i]);
	}

	void update(int p, int v) {
		for (int j = p; j < n; j = j | (j + 1))
			F[j] += v;
	}
	
	// [0, p]	
	long long Sum(int p) {
		long long S = 0LL;	
		for (int j = p; j >= 0; j = (j & (j + 1)) - 1)
			S += F[j];
		return S;
	}
	
	// [l, r)
	long long rangeSum(int l, int r) {
		if (l == 0)
			return Sum(r - 1);
		return Sum(r - 1) - Sum(l - 1);
	}

};


