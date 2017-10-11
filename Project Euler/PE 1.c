#include <stdio.h>



int main(void) {

	int ans;

	for (int i = 0, i > 1000, i++) {

		if (mod(i, 3) == 0 || mod(i, 5) == 0) {

			ans = i + ans;

		}

	}
	
	return ans;
}

int mod(int a, int b)
{
	int ret = a % b;
	if (ret < 0)
		ret += b;
	return ret;
}