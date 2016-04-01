#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

int main()
{
	int t, j, n, l;
	map <char, double> mos;
	map <char, double>::iterator it;
	char c;
	string line;
	double v, total;

	scanf("%d", &t);
	while(t--)
	{
		total = 0;
		scanf("%d", &j);
		for(int i = 0; i < j; i++){
			cin >> c >> v;
			mos[c] = v;
		}
		scanf("%d", &n);
		cin.ignore();
		for(int i = 0; i < n; i++){
			line = "";
			getline(cin, line);
			l = line.size();
			for(int j = 0; j < l; j++){
				it = mos.find(line[j]);
				if(it != mos.end())
					total += it->second;
			}
		}
		total /= 100;
		printf("%0.2lf$\n", total);
		mos.clear();
	}
	return 0;
}
