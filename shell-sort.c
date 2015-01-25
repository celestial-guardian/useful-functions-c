/* 
 * Author: Me & Wikipedia
 * Date: 25 Jan 2015
 * About: Shell sort of an integer array of length N.
 * d(1) = N/2, d(i) = d(i-2)/2, d(k) = 1.
 */
 
void shell_sort(int *array, unsigned N){
	unsigned i, j, k;
	int temporary;
	
	for(k = N/2; k > 0; k /= 2){
		for(i = k; i < N; i++){
			temporary = array[i];
			
			for(j = i; j >= k; j -= k){
				if(temporary < array[j - k]){
					array[j] = array[j - k];
				}
				else{
					break;
				}
			}
			
			array[j] = temporary;
		}
	}
}
