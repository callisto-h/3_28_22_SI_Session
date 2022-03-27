#include <vector>
#include <assert.h>

int fib(int n, std::vector<int> &cache){

    // checks to see if the value has
    // been computed or not
    if(cache.at(n) == 0){

        // if the value has not been
        // computed, and n is 0 or 1,
        // no need to compute anything
        // This is the base case.
        if(n <= 1){
            cache.at(n) = n;
        }

        // otherwise, we have more 
        // computations to do
        else{
            cache.at(n) = fib(n - 1, cache) + fib(n - 2, cache);
        }
    }

    // we only reach here after the
    // 1st through nth nums have 
    // been calculated
    return cache.at(n);
}

int fib_runner(int n){

    // create enough storage space
    // to hold all of your potential 
    // values of n fib numbers
    // I use n+1 to directly index
    // the numbers; 9th num is at cache.at(9)
    std::vector<int> cache(n+1, 0);
    return fib(n, cache);
}