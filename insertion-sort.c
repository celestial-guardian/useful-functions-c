/* 
 * Author: Me & Wikipedia
 * Date: 25 Jan 2015
 * About: Insertion sort of integer array with length N.
 */

void insertion_sort(int *array, unsigned N){
	int i, current, prevKey;
	
	for(i = 1; i < N; ++i){
		current = array[i];
		prevKey = i - 1;
		
		while(prevKey >= 0 && array[prevKey] > current){
			array[prevKey + 1] = array[prevKey];
			array[prevKey] = current;
			--prevKey;
		}
	}
}
