// This file has been generated by Py++.

#include "boost/python.hpp"
#include "__ctypes_integration.pypp.hpp"
#include "opencv_headers.hpp"
#include "opencv_converters.hpp"
#include "Mat2b.pypp.hpp"

namespace bp = boost::python;

void register_Mat2b_class(){

    { //::cv::Mat_< cv::Vec< unsigned char, 2 > >
        typedef bp::class_< cv::Mat_< cv::Vec< unsigned char, 2 > >, bp::bases< cv::Mat > > Mat2b_exposer_t;
        Mat2b_exposer_t Mat2b_exposer = Mat2b_exposer_t( "Mat2b", bp::init< >() );
        bp::scope Mat2b_scope( Mat2b_exposer );
        Mat2b_exposer.add_property( "this", pyplus_conv::make_addressof_inst_getter< cv::Mat_< cv::Vec< unsigned char, 2 > > >() );
        Mat2b_exposer.def( bp::init< int, int >(( bp::arg("_rows"), bp::arg("_cols") )) );
        Mat2b_exposer.def( bp::init< int, int, cv::Vec< unsigned char, 2 > const & >(( bp::arg("_rows"), bp::arg("_cols"), bp::arg("value") )) );
        Mat2b_exposer.def( bp::init< cv::Size_< int > >(( bp::arg("_size") )) );
        bp::implicitly_convertible< cv::Size_< int >, cv::Mat_< cv::Vec< unsigned char, 2 > > >();
        Mat2b_exposer.def( bp::init< cv::Size_< int >, cv::Vec< unsigned char, 2 > const & >(( bp::arg("_size"), bp::arg("value") )) );
        Mat2b_exposer.def( bp::init< cv::Mat const & >(( bp::arg("m") )) );
        bp::implicitly_convertible< cv::Mat const &, cv::Mat_< cv::Vec< unsigned char, 2 > > >();
        Mat2b_exposer.def( bp::init< cv::Mat_< cv::Vec< unsigned char, 2 > > const & >(( bp::arg("m") )) );
        Mat2b_exposer.def( bp::init< cv::Mat_< cv::Vec< unsigned char, 2 > > const &, cv::Range const &, cv::Range const & >(( bp::arg("m"), bp::arg("rowRange"), bp::arg("colRange") )) );
        Mat2b_exposer.def( bp::init< cv::Mat_< cv::Vec< unsigned char, 2 > > const &, cv::Rect_< int > const & >(( bp::arg("m"), bp::arg("roi") )) );
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::adjustROI
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef ::cv::Mat_< cv::Vec< unsigned char, 2 > > & ( exported_class_t::*adjustROI_function_type )( int,int,int,int ) ;
            
            Mat2b_exposer.def( 
                "adjustROI"
                , adjustROI_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::adjustROI )
                , ( bp::arg("dtop"), bp::arg("dbottom"), bp::arg("dleft"), bp::arg("dright") )
                , bp::return_self< >() );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::channels
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef int ( exported_class_t::*channels_function_type )(  ) const;
            
            Mat2b_exposer.def( 
                "channels"
                , channels_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::channels ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::clone
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef ::cv::Mat_< cv::Vec< unsigned char, 2 > > ( exported_class_t::*clone_function_type )(  ) const;
            
            Mat2b_exposer.def( 
                "clone"
                , clone_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::clone ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::col
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef ::cv::Mat_< cv::Vec< unsigned char, 2 > > ( exported_class_t::*col_function_type )( int ) const;
            
            Mat2b_exposer.def( 
                "col"
                , col_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::col )
                , ( bp::arg("x") ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::create
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef void ( exported_class_t::*create_function_type )( int,int ) ;
            
            Mat2b_exposer.def( 
                "create"
                , create_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::create )
                , ( bp::arg("_rows"), bp::arg("_cols") ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::create
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef void ( exported_class_t::*create_function_type )( ::cv::Size_< int > ) ;
            
            Mat2b_exposer.def( 
                "create"
                , create_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::create )
                , ( bp::arg("_size") ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::cross
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef ::cv::Mat_< cv::Vec< unsigned char, 2 > > ( exported_class_t::*cross_function_type )( ::cv::Mat_< cv::Vec< unsigned char, 2 > > const & ) const;
            
            Mat2b_exposer.def( 
                "cross"
                , cross_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::cross )
                , ( bp::arg("m") ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::depth
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef int ( exported_class_t::*depth_function_type )(  ) const;
            
            Mat2b_exposer.def( 
                "depth"
                , depth_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::depth ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::diag
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef ::cv::Mat_< cv::Vec< unsigned char, 2 > > ( exported_class_t::*diag_function_type )( int ) const;
            
            Mat2b_exposer.def( 
                "diag"
                , diag_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::diag )
                , ( bp::arg("d")=(int)(0) ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::elemSize
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef ::size_t ( exported_class_t::*elemSize_function_type )(  ) const;
            
            Mat2b_exposer.def( 
                "elemSize"
                , elemSize_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::elemSize ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::elemSize1
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef ::size_t ( exported_class_t::*elemSize1_function_type )(  ) const;
            
            Mat2b_exposer.def( 
                "elemSize1"
                , elemSize1_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::elemSize1 ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::reshape
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef ::cv::Mat_< cv::Vec< unsigned char, 2 > > ( exported_class_t::*reshape_function_type )( int ) const;
            
            Mat2b_exposer.def( 
                "reshape"
                , reshape_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::reshape )
                , ( bp::arg("_rows") ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::row
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef ::cv::Mat_< cv::Vec< unsigned char, 2 > > ( exported_class_t::*row_function_type )( int ) const;
            
            Mat2b_exposer.def( 
                "row"
                , row_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::row )
                , ( bp::arg("y") ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::step1
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef ::size_t ( exported_class_t::*step1_function_type )(  ) const;
            
            Mat2b_exposer.def( 
                "step1"
                , step1_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::step1 ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::stepT
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef ::size_t ( exported_class_t::*stepT_function_type )(  ) const;
            
            Mat2b_exposer.def( 
                "stepT"
                , stepT_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::stepT ) );
        
        }
        { //::cv::Mat_< cv::Vec< unsigned char, 2 > >::type
        
            typedef cv::Mat_< cv::Vec< unsigned char, 2 > > exported_class_t;
            typedef int ( exported_class_t::*type_function_type )(  ) const;
            
            Mat2b_exposer.def( 
                "type"
                , type_function_type( &::cv::Mat_< cv::Vec< unsigned char, 2 > >::type ) );
        
        }
    }

}