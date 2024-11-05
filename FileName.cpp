#include<iostream>
#include<algorithm>
using namespace  std;
int  main()
{
    int a[9];
    int i;
    for (i = 0;i < 9;i++) {
        cin >> a[i];
    }
    sort(a, a + 9);
    for (i = 0;i < 9;i++) {
        cout << a[i] << "";
    }
    cout << endl;
    return 0;
}




#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int max = a;
    if (max < b) max = b;
    if (max < c) max = c;
    cout << "最大的数是" << max << endl;
    return 0;
}





#include<iostream>
using namespace std;
int main()
{
	int score;
	cin >> score;
	if (0 <= score && score <= 100) {
		if (90 <= score) {
			cout << "A" << endl;
		}
		else if (80 <= score && score < 90) {
			cout << "B" << endl;
		}
		else if (70 <= score && score < 80) {
			cout << "C" << endl;
		}
		else if (60 <= score && score < 70) {
			cout << "D" << endl;
		}
		else {
			cout << "E" << endl;
		}
	}
	else {
		cout << "ERROR!" << endl;
	}
	return 0;
}




#include<iostream>
using namespace std;
int main()
{
	int m, n, i, k, min, max;
	cin >> m >> n;
	if (m >= n) {
		min = n, max = m;
	}
	else {
		min = m, max = n;
	}
	if (m > 0 && n > 0) {
		for (i = min;i > 0;i--) {
			if (m % i == 0 && n % i == 0) break;
		}
		cout << "m与n的最大公约数是" << i << endl;
		for (k = max; ;k++) {
			if (k % m == 0 && k % n == 0) break;
		}
		cout << "m与n的最小公倍数是" << k << endl;
	}
	else {
		cout << "ERROR!" << endl;
	}
	return 0;
}





#include<iostream>
using namespace std;
static int fac(int n)
{
	int a = 1;
	for (int i = 1;i <= n;i++) {
		a *= i;
	}
	return a;
}
int main()
{
	int n, Sn = 0;
	cin >> n;
	if (n <= 20) {
		for (int i = 1;i <= n;i++) {
			Sn += fac(i);
		}
		cout << Sn << endl;
	}
	else {
		cout << "ERROR" << endl;
	}
	return 0;





#include<iostream>
	using namespace std;
	int main()
	{
		int a, b, c, x;
		for (int i = 100;i < 1000;i++) {
			a = i / 100;
			b = (i - a * 100) / 10;
			c = i - a * 100 - b * 10;
			x = a * a * a + b * b * b + c * c * c;
			if (x == i) {
				cout << i << endl;
			}
			else {
				i = i;
			}
		}
		return 0;
	}