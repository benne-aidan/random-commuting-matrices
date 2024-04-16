#include <iostream>
#include <chrono>
#include <Eigen/Dense>
#include <EigenRand/EigenRand>
 
using namespace Eigen;
 
int main() {
    // Initialize random number generator with seed=42 for following codes.
    // Or you can use C++11 RNG such as std::mt19937 or std::ranlux48.
    EigenSolver<MatrixXd> es;

    //unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    //Rand::P8_mt19937_64 urng{seed}; 
    //
    //MatrixXd mat = Rand::normal<MatrixXd>(10, 10, urng);
    //std::cout << mat << std::endl;

    MatrixXd mat(2, 2);
    mat(0,0) = 1;
    mat(0,1) = 2;
    mat(1,0) = 3;
    mat(1,1) = 4;


    std::cout << mat << std::endl;

    es.compute(mat, false);

    std::cout << "Eigenvalues are: " << es.eigenvalues().transpose() << std::endl;
    
    return 0;
}