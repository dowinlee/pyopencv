// This file has been generated by Py++.

#include "boost/python.hpp"
#include "boost/python/suite/indexing/vector_indexing_suite.hpp"
#include "opencv_headers.hpp"
#include "vector_vector_int.pypp.hpp"

namespace bp = boost::python;

static inline void resize(::std::vector< std::vector< int > > &inst, size_t num) { inst.resize(num); }

void register_vector_vector_int_class(){

    { //::std::vector< std::vector< int > >
        typedef bp::class_< std::vector< std::vector< int > > > vector_vector_int_exposer_t;
        vector_vector_int_exposer_t vector_vector_int_exposer = vector_vector_int_exposer_t( "vector_vector_int" );
        bp::scope vector_vector_int_scope( vector_vector_int_exposer );
        //WARNING: the next line of code will not compile, because "::std::vector<int, std::allocator<int> >" does not have operator== !
        vector_vector_int_exposer.def( bp::vector_indexing_suite< ::std::vector< std::vector< int > > >() );
        vector_vector_int_exposer.def("resize", &::resize, ( bp::arg("num") ));
    }

}