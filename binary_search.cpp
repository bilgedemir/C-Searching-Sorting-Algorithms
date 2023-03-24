#include<iostream>

#define N 10
using namespace std;

template<class elemtype>
int binarySearch(const elemtype list[], int length, const elemtype& item)
{
	int first = 0;
	int last = length - 1;
	int mid;

	bool found = false;

	while (first <= last & !found) {
		mid = (first + last) / 2;
		if (list[mid] == item) {
			found = true;
			cout << "found: " << mid << endl;
		}
			
		else if (list[mid] > item)
			last = mid - 1;
		else
			first = mid + 1;
	}

	if (found)
		return mid;
	else
		return -1;
}

int main() {
	
	int a[N] = { 2,5,7,9,12,15,34,76,87,123 };
	int i = 87;
	binarySearch(a, N,i);
  
  return 0;
}
