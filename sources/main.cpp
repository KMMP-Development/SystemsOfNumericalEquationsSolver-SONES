#include "../headers/matrix.h"
#include "../headers/solver.h"

int main(int argc, char* argv[])
{
	Matrix mtrx = Solver::buildAMatrix();

	//mtrx.show();

	std::cout << Matrix::getDeterminantOf(mtrx);

	return 0;
}