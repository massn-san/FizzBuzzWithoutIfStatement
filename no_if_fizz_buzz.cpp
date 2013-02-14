#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main(void) {
    int fizz = 3;//どの数の倍数でfizzするか
    int buzz = 5;//どの数の倍数でbuzzするか

    int N = 100;//FizzBuzzする範囲
    for(int i = 1 ; i < N ; ++i){

        for(int j = 0; j < 1 && j != i%fizz && j != i%buzz; ++j){
            std::cout << " " << i;
        }

        for(int k = 0; k < 1 - i%fizz; ++k){
            std::cout << " fizz! ";
        }

        for(int l = 0; l < 1 - i%buzz; ++l){
            std::cout << " buzz! ";
        }

        std::cout << std::endl;
    }
}
