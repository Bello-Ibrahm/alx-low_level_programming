#include "search_algos.h"

int interpolation_search(int *array, size_t size, int value) {
    int low = 0;
    int high = size - 1;

    while (low <= high && value >= array[low] && value <= array[high]) {
        /* Calculate the position using interpolation formula */
        int pos = low + ((double)(high - low) / (array[high] - array[low])) * (value - array[low]);

        if (array[pos] == value) {
            return pos; /* Element found */
        } else if (array[pos] < value) {
            low = pos + 1; /* Search in the right half */
        } else {
            high = pos - 1; /* Search in the left half */
        }
    }

    return -1; /* Element not found */
}
