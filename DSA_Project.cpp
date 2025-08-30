#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void traversal(int A[], int N);
void insertion(int A[], int &N, int Pos, int ITEM);
void deletion(int A[], int &N, int Pos, int ITEM);
void merging(int A[], int S[], int N, int M, int C[]);
int searching(int A[], int N, int item);
void sorting(int A[], int N);

int main()
{
	int a[100], n, pos, item, choice, delitem, s[100], m, c[200];
	cout << "\nEnter size: ";
	cin >> n;
	cout << "\nEnter Elements:\n";
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << "\nElements are-->";
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";

	for (int k = 0; k <= 7; k++)
	{
		cout << "\n\n\n\n\n*****MAIN MENU*****\n";
		cout << "\n=======================================\n";
		cout << "\n1.TRAVERSAL\n2.INSERTION\n3.DELETION\n4.MERGING\n5.SEARCHING\n6.SORTING\n7.EXIT\n";
		cout << "Enter your choice:";
		cin >> choice;

		switch (choice)
		{
		case 1:
			traversal(a, n);
			break;
		case 2: // INSERTION
			cout << "\nEnter Position:";
			cin >> pos;
			cout << "\nEnter Element:\n";
			cin >> item;
			insertion(a, n, pos, item);
			break;
		case 3: // DELETION
			cout<<"\n Enter Element to be deleted:";
            cin>>delitem;
            pos=searching(a,n,delitem);
            if(pos==-1)
            {
            cout<<"\n Element not found";
            }
            deletion(a,n,pos,delitem);
			break;
		case 4: // MERGING

			merging(a, s, n, m, c);
			break;
		case 5: // SEARCHING
			cout << "\nEnter the element to be searched:";
			cin >> item;
			pos = searching(a, n, item);
			cout << "\nElement Found at position->" << pos + 1;
			break;
		case 6: // SORTING
			sorting(a, n);
			break;
		case 7:
			cout << "EXIT";
			exit(0);
			break;
		default:
			cout << "WRORNG CHOICE *_*";
		}
	}
}
void traversal(int b[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << b[i] << endl;
	}
}
void insertion(int A[], int &N, int Pos, int ITEM)
{
	for (int i = N; i >= Pos; i--)
		A[i + 1] = A[i];
	A[Pos] = ITEM;
	N = N + 1;
	cout << "After Inserting->";
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
}
void deletion(int A[], int &N, int Pos, int ITEM)
{
	for (int i = Pos; i < N; i++)
		A[i] = A[i + 1];
	N = N - 1;
	cout << "After Deleting " << ITEM << " from the Array->";
	for (int i = 0; i < N; i++)
		cout << A[i] << " ";
}
void merging(int A[], int S[], int N, int M, int C[])
{
	cout << "\nEnter the Size for Second Array: ";
	cin >> M;
	cout << "Enter Elements for Second Array: \n";
	for (int i = 0; i < M; i++)
	{
		cin >> S[i];
	}

	int n = sizeof(A) / sizeof(A[0]);
	int m = sizeof(S) / sizeof(S[0]);
	int CL = N + M;
	C[CL];
	for (int i = 0; i < N; i++)
	{
		C[i] = A[i];
	}
	for (int i = 0; i < M; i++)
	{
		C[N + i] = S[i];
	}
	cout << "Merged Array-> ";
	for (int i = 0; i < CL; i++)
	{
		cout << C[i] << " ";
	}
}
int searching(int A[], int N, int ITEM)
{
	int index = -1;
	for (int i = 0; i < N; i++)
	{
		if (A[i] == ITEM)
		{
			index = i;
		}
	}
	return index;
}
void sorting(int A[], int N)
{
	sort(A, A + N);
	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";
	}
}
