#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/intersections.h>
#include <iostream>

template <typename Kernel>
void segment_intersection() {
    typedef typename Kernel::Point_2   Point;
    typedef typename Kernel::Segment_2 Segment;

    Segment s1(Point(0, 0), Point(4, 4));
    Segment s2(Point(0, 4), Point(4, 0));

    if (CGAL::do_intersect(s1, s2)) {
        std::cout << "Segments intersect\n";
    }
}

int main() {
    using K = CGAL::Exact_predicates_inexact_constructions_kernel;
    segment_intersection<K>();
}
