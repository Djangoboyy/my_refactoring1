#include <iostream>
#include <ctime>



void series_filler(int* A, int size) {
    for (int i = 0; i < size; i++)
        A[i] = rand() % 10;
}


void series_print(int* A, int size) {
    for (int i = 0; i < size; i++)
        std::cout << A[i] << " ";
    std::cout << std::endl;
}


int series_average(int* A, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += A[i];

    return sum / size;
}



int main()
{

    std::srand(time(0));

    int arr_size = 10;


    for( int count = 1; count <= 3; count++ ) {
        int array[arr_size];
        series_filler( array, arr_size );
        std::cout << count << " последовательность" << std::endl;
        series_print( array, arr_size );
        std::cout << "Среднее " << count << " последовательности: " << series_average( array, arr_size ) << std::endl << std::endl;
    }


    return 0;
}
