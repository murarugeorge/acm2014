#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stack>
#define N 100000

using namespace std;
stack<int> expresie;

int main ()
{
	freopen ("parantezare.in", "r", stdin);
	freopen ("parantezare.out", "w", stdout);
	int v[N];
	char buffer[N];
	fgets(buffer, N, stdin);
	int l = strlen (buffer);
	int i;
	for (i = l - 1; i >= 0; i--)
	{
		if ( buffer[i] == ')') {
			expresie.push(i);
		} else if ( buffer[i] == '(' ) {
			v[i] = expresie.top();
			expresie.pop();
		}
	}
	int nrQuest, Quest;
	scanf("%d", &nrQuest);
	for ( i = 0; i < nrQuest; i++ )
	{
		scanf ("%d",&Quest);
		printf ("%d ", v[Quest]);
	}
	return 0;
}

