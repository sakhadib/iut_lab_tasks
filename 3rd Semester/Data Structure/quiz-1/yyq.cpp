#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 1000;
int heap[MAX_SIZE];
int heapSize = 0;

// Function to perform heapify operation to maintain the min-heap property
void min_heapify(int i) {
    int smallest = i;
    int left_child = 2 * i;
    int right_child = 2 * i + 1;

    if (left_child <= heapSize && heap[left_child] < heap[smallest])
        smallest = left_child;

    if (right_child <= heapSize && heap[right_child] < heap[smallest])
        smallest = right_child;

    if (smallest != i) {
        swap(heap[i], heap[smallest]);
        min_heapify(smallest);
    }
}


void build_min_heap() {
    for (int i = heapSize / 2; i >= 1; i--) {
        min_heapify(i);
    }
}

int heap_minimum() {
    if (heapSize >= 1){
        return heap[1]; // heap[1] karon minimum always upore
    }
    return -1; // faka
}

// Function to extract the minimum value from the heap
int heap_extract_min() {
    if (heapSize < 1)
        return -1; // Heap is empty

    int min_val = heap[1];
    heap[1] = heap[heapSize];
    heapSize--;
    min_heapify(1);

    return min_val;
}


void min_heap_insert(int value) {
    heapSize++;
    int i = heapSize;
    heap[i] = value;
    while (i > 1 && heap[i] < heap[i / 2]) 
    {
        swap(heap[i], heap[i / 2]); //jodi eita parent er theke choto hoy taile swap
        i /= 2;
    }
}

// Function to decrease the value at a given position and maintain the min-heap property
void heap_decrease_key(int p, int k) {
    if (p < 1 || p > heapSize)
        return;

    heap[p] -= k;
    while (p > 1 && heap[p] < heap[p / 2]) {
        swap(heap[p], heap[p / 2]);
        p /= 2;
    }
}

// Function to increase the value at a given position and maintain the min-heap property
void heap_increase_key(int p, int k) {
    if (p < 1 || p > heapSize)
        return;

    heap[p] += k;
    min_heapify(p);
}

int main() {
    int n;

    // Input the initial heap values starting from index 1
    for (int i = 1; cin >> n; i++) {
        heap[i] = n;
        heapSize++;
    }

    build_min_heap();

    for (int i = 1; i <= heapSize; i++) {
        cout << heap[i] << " ";
    }
    cout << endl;

    int function_id;
    while (cin >> function_id) {
        if (function_id == 1) {
            int result = heap_minimum();
            cout << result << endl;
        } else if (function_id == 2) {
            int result = heap_extract_min();
            cout << result << endl;
        } else if (function_id == 3) {
            int p, k;
            cin >> p >> k;
            heap_decrease_key(p, k);
        } else if (function_id == 4) {
            int p, k;
            cin >> p >> k;
            heap_increase_key(p, k);
        } else if (function_id == 5) {
            int value;
            cin >> value;
            min_heap_insert(value);
        }

        for (int i = 1; i <= heapSize; i++) {
            cout << heap[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
