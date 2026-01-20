#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/squared_distance_2.h>
#include <iostream>

template <typename Kernel>
void compute_distance() {
    typedef typename Kernel::Point_2 Point;
    typedef typename Kernel::FT FT;

    Point p(0, 0);
    Point q(3, 4);

    FT dist = CGAL::squared_distance(p, q);
    std::cout << "Squared distance: " << dist << std::endl;
}

int main() {
    using K = CGAL::Exact_predicates_inexact_constructions_kernel;
    compute_distance<K>();
}
