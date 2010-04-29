// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "boost/python/object/life_support.hpp"
#include "Seq_address_t.pypp.hpp"

namespace bp = boost::python;

static bp::object from_MemStorage(bp::object const &inst_MemStorage, int headerSize)
{
    bp::extract<cv::MemStorage &> elem(inst_MemStorage);
    if(!elem.check())
    {
        char s[300];
        sprintf( s, "Argument 'inst_MemStorage' must contain an object of type MemStorage." );
        PyErr_SetString(PyExc_TypeError, s);        
        throw bp::error_already_set();
    }
    
    bp::object result = bp::object(cv::Seq<sdopencv::address_t>(elem(), headerSize));
    bp::objects::make_nurse_and_patient(result.ptr(), inst_MemStorage.ptr());
    return result;
}

static size_t len(cv::Seq<sdopencv::address_t> const &inst) { return inst.size(); }

void register_Seq_address_t_class(){

    bp::class_< cv::Seq< sdopencv::address_t > >( "Seq_address_t", bp::init< >() )    
        .add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Seq< sdopencv::address_t > >() )    
        .def( 
            "channels"
            , (int ( ::cv::Seq<sdopencv::address_t>::* )(  ) const)( &::cv::Seq< sdopencv::address_t >::channels ) )    
        .def( 
            "clear"
            , (void ( ::cv::Seq<sdopencv::address_t>::* )(  ) )( &::cv::Seq< sdopencv::address_t >::clear ) )    
        .def( 
            "depth"
            , (int ( ::cv::Seq<sdopencv::address_t>::* )(  ) const)( &::cv::Seq< sdopencv::address_t >::depth ) )    
        .def( 
            "elemSize"
            , (::size_t ( ::cv::Seq<sdopencv::address_t>::* )(  ) const)( &::cv::Seq< sdopencv::address_t >::elemSize ) )    
        .def( 
            "empty"
            , (bool ( ::cv::Seq<sdopencv::address_t>::* )(  ) const)( &::cv::Seq< sdopencv::address_t >::empty ) )    
        .def( 
            "index"
            , (::size_t ( ::cv::Seq<sdopencv::address_t>::* )( ::sdopencv::address_t const & ) const)( &::cv::Seq< sdopencv::address_t >::index )
            , ( bp::arg("elem") ) )    
        .def( 
            "insert"
            , (void ( ::cv::Seq<sdopencv::address_t>::* )( int,::sdopencv::address_t const & ) )( &::cv::Seq< sdopencv::address_t >::insert )
            , ( bp::arg("idx"), bp::arg("elem") ) )    
        .def( 
            "__getitem__"
            , (::sdopencv::address_t & ( ::cv::Seq<sdopencv::address_t>::* )( int ) )( &::cv::Seq< sdopencv::address_t >::operator[] )
            , ( bp::arg("idx") )
            , bp::return_internal_reference< >()
            , "\nWrapped function:"
    "\n    operator[]" )    
        .def( 
            "__getitem__"
            , (::sdopencv::address_t const & ( ::cv::Seq<sdopencv::address_t>::* )( int ) const)( &::cv::Seq< sdopencv::address_t >::operator[] )
            , ( bp::arg("idx") )
            , bp::return_value_policy< bp::copy_const_reference >()
            , "\nWrapped function:"
    "\n    operator[]" )    
        .def( 
            "pop_back"
            , (void ( ::cv::Seq<sdopencv::address_t>::* )(  ) )( &::cv::Seq< sdopencv::address_t >::pop_back ) )    
        .def( 
            "pop_front"
            , (void ( ::cv::Seq<sdopencv::address_t>::* )(  ) )( &::cv::Seq< sdopencv::address_t >::pop_front ) )    
        .def( 
            "push_back"
            , (void ( ::cv::Seq<sdopencv::address_t>::* )( ::sdopencv::address_t const & ) )( &::cv::Seq< sdopencv::address_t >::push_back )
            , ( bp::arg("elem") ) )    
        .def( 
            "push_front"
            , (void ( ::cv::Seq<sdopencv::address_t>::* )( ::sdopencv::address_t const & ) )( &::cv::Seq< sdopencv::address_t >::push_front )
            , ( bp::arg("elem") ) )    
        .def( 
            "remove"
            , (void ( ::cv::Seq<sdopencv::address_t>::* )( int ) )( &::cv::Seq< sdopencv::address_t >::remove )
            , ( bp::arg("idx") ) )    
        .def( 
            "remove"
            , (void ( ::cv::Seq<sdopencv::address_t>::* )( ::cv::Range const & ) )( &::cv::Seq< sdopencv::address_t >::remove )
            , ( bp::arg("r") ) )    
        .def( 
            "size"
            , (::size_t ( ::cv::Seq<sdopencv::address_t>::* )(  ) const)( &::cv::Seq< sdopencv::address_t >::size ) )    
        .def( 
            "type"
            , (int ( ::cv::Seq<sdopencv::address_t>::* )(  ) const)( &::cv::Seq< sdopencv::address_t >::type ) )    
        .def("fromMemStorage", &::from_MemStorage, (bp::arg("inst_MemStorage"), bp::arg("headerSize")=bp::object(sizeof(CvSeq))))    
        .staticmethod("fromMemStorage")    
        .def("__len__", &::len);

}
