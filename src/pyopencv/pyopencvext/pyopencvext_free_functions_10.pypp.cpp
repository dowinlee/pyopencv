// This file has been generated by Py++.

#include "boost/python.hpp"
#include "opencv_headers.hpp"
#include "pyopencvext_free_functions_10.pypp.hpp"

namespace bp = boost::python;

void register_free_functions_10(){

    { //::cv::mean
    
        typedef ::cv::Scalar ( *mean_function_type )( ::cv::Mat const &,::cv::Mat const & );
        
        bp::def( 
            "mean"
            , mean_function_type( &::cv::mean )
            , ( bp::arg("m"), bp::arg("mask") )
            , "\nCalculates average (mean) of array elements."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-mean" );
    
    }

    { //::cv::mean
    
        typedef ::cv::Scalar ( *mean_function_type )( ::cv::Mat const & );
        
        bp::def( 
            "mean"
            , mean_function_type( &::cv::mean )
            , ( bp::arg("m") )
            , "\nCalculates average (mean) of array elements."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-mean" );
    
    }

    { //::cv::meanShift
    
        typedef int ( *meanShift_function_type )( ::cv::Mat const &,::cv::Rect &,::cv::TermCriteria );
        
        bp::def( 
            "meanShift"
            , meanShift_function_type( &::cv::meanShift )
            , ( bp::arg("probImage"), bp::arg("window"), bp::arg("criteria") ) );
    
    }

    { //::cv::meanStdDev
    
        typedef void ( *meanStdDev_function_type )( ::cv::MatND const &,::cv::Scalar &,::cv::Scalar &,::cv::MatND const & );
        
        bp::def( 
            "meanStdDev"
            , meanStdDev_function_type( &::cv::meanStdDev )
            , ( bp::arg("m"), bp::arg("mean"), bp::arg("stddev"), bp::arg("mask")=cv::MatND() )
            , "\nCalculates mean and standard deviation of array elements."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-meanstddev" );
    
    }

    { //::cv::meanStdDev
    
        typedef void ( *meanStdDev_function_type )( ::cv::Mat const &,::cv::Scalar &,::cv::Scalar &,::cv::Mat const & );
        
        bp::def( 
            "meanStdDev"
            , meanStdDev_function_type( &::cv::meanStdDev )
            , ( bp::arg("m"), bp::arg("mean"), bp::arg("stddev"), bp::arg("mask")=cv::Mat() )
            , "\nCalculates mean and standard deviation of array elements."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-meanstddev" );
    
    }

    { //::cv::medianBlur
    
        typedef void ( *medianBlur_function_type )( ::cv::Mat const &,::cv::Mat &,int );
        
        bp::def( 
            "medianBlur"
            , medianBlur_function_type( &::cv::medianBlur )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("ksize") ) );
    
    }

    { //::cv::min
    
        typedef void ( *min_function_type )( ::cv::MatND const &,double,::cv::MatND & );
        
        bp::def( 
            "min"
            , min_function_type( &::cv::min )
            , ( bp::arg("a"), bp::arg("alpha"), bp::arg("c") )
            , "\nCalculates per-element minimum of two arrays or array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-min" );
    
    }

    { //::cv::min
    
        typedef void ( *min_function_type )( ::cv::MatND const &,::cv::MatND const &,::cv::MatND & );
        
        bp::def( 
            "min"
            , min_function_type( &::cv::min )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c") )
            , "\nCalculates per-element minimum of two arrays or array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-min" );
    
    }

    { //::cv::min
    
        typedef void ( *min_function_type )( ::cv::Mat const &,double,::cv::Mat & );
        
        bp::def( 
            "min"
            , min_function_type( &::cv::min )
            , ( bp::arg("a"), bp::arg("alpha"), bp::arg("c") )
            , "\nCalculates per-element minimum of two arrays or array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-min" );
    
    }

    { //::cv::min
    
        typedef void ( *min_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat & );
        
        bp::def( 
            "min"
            , min_function_type( &::cv::min )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c") )
            , "\nCalculates per-element minimum of two arrays or array and a scalar."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-min" );
    
    }

    { //::cv::minAreaRect
    
        typedef ::cv::RotatedRect ( *minAreaRect_function_type )( ::cv::Mat const & );
        
        bp::def( 
            "minAreaRect"
            , minAreaRect_function_type( &::cv::minAreaRect )
            , ( bp::arg("points") ) );
    
    }

    { //::cv::minEnclosingCircle
    
        typedef void ( *minEnclosingCircle_function_type )( ::cv::Mat const &,::cv::Point2f &,float & );
        
        bp::def( 
            "minEnclosingCircle"
            , minEnclosingCircle_function_type( &::cv::minEnclosingCircle )
            , ( bp::arg("points"), bp::arg("center"), bp::arg("radius") ) );
    
    }

    { //::cv::moments
    
        typedef ::cv::Moments ( *moments_function_type )( ::cv::Mat const &,bool );
        
        bp::def( 
            "moments"
            , moments_function_type( &::cv::moments )
            , ( bp::arg("array"), bp::arg("binaryImage")=(bool)(false) ) );
    
    }

    { //::cv::morphologyDefaultBorderValue
    
        typedef ::cv::Scalar ( *morphologyDefaultBorderValue_function_type )(  );
        
        bp::def( 
            "morphologyDefaultBorderValue"
            , morphologyDefaultBorderValue_function_type( &::cv::morphologyDefaultBorderValue ) );
    
    }

    { //::cv::morphologyEx
    
        typedef void ( *morphologyEx_function_type )( ::cv::Mat const &,::cv::Mat &,int,::cv::Mat const &,::cv::Point,int,int,::cv::Scalar const & );
        
        bp::def( 
            "morphologyEx"
            , morphologyEx_function_type( &::cv::morphologyEx )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("op"), bp::arg("kernel"), bp::arg("anchor")=cv::Point_<int>(-0x000000001, -0x000000001), bp::arg("iterations")=(int)(1), bp::arg("borderType")=int(::cv::BORDER_CONSTANT), bp::arg("borderValue")=cv::morphologyDefaultBorderValue( ) ) );
    
    }

    { //::cv::mulSpectrums
    
        typedef void ( *mulSpectrums_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat &,int,bool );
        
        bp::def( 
            "mulSpectrums"
            , mulSpectrums_function_type( &::cv::mulSpectrums )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("flags"), bp::arg("conjB")=(bool)(false) )
            , "\nPerforms per-element multiplication of two Fourier spectrums."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-mulspectrums" );
    
    }

    { //::cv::mulTransposed
    
        typedef void ( *mulTransposed_function_type )( ::cv::Mat const &,::cv::Mat &,bool,::cv::Mat const &,double,int );
        
        bp::def( 
            "mulTransposed"
            , mulTransposed_function_type( &::cv::mulTransposed )
            , ( bp::arg("a"), bp::arg("c"), bp::arg("aTa"), bp::arg("delta")=cv::Mat(), bp::arg("scale")=1, bp::arg("rtype")=(int)(-0x000000001) )
            , "\nCalculates the product of a matrix and its transposition."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-multransposed" );
    
    }

    { //::cv::multiply
    
        typedef void ( *multiply_function_type )( ::cv::MatND const &,::cv::MatND const &,::cv::MatND &,double );
        
        bp::def( 
            "multiply"
            , multiply_function_type( &::cv::multiply )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("scale")=1 )
            , "\nCalculates the per-element scaled product of two arrays."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-multiply" );
    
    }

    { //::cv::multiply
    
        typedef void ( *multiply_function_type )( ::cv::Mat const &,::cv::Mat const &,::cv::Mat &,double );
        
        bp::def( 
            "multiply"
            , multiply_function_type( &::cv::multiply )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("c"), bp::arg("scale")=1 )
            , "\nCalculates the per-element scaled product of two arrays."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-multiply" );
    
    }

    { //::cv::namedWindow
    
        typedef void ( *namedWindow_function_type )( ::std::string const &,int );
        
        bp::def( 
            "namedWindow"
            , namedWindow_function_type( &::cv::namedWindow )
            , ( bp::arg("winname"), bp::arg("flags")=(int)(1) )
            , "\nCreates a window."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/user_interface.html#cv-namedwindow" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::SparseMat const &,int );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("src"), bp::arg("normType") )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::MatND const &,::cv::MatND const &,int,::cv::MatND const & );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("normType")=int(::cv::NORM_L2), bp::arg("mask")=cv::MatND() )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::MatND const &,int,::cv::MatND const & );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("a"), bp::arg("normType")=int(::cv::NORM_L2), bp::arg("mask")=cv::MatND() )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::Mat const &,::cv::Mat const &,int,::cv::Mat const & );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("normType"), bp::arg("mask") )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::Mat const &,int,::cv::Mat const & );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("a"), bp::arg("normType"), bp::arg("mask") )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::Mat const &,::cv::Mat const &,int );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("normType")=int(::cv::NORM_L2) )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::norm
    
        typedef double ( *norm_function_type )( ::cv::Mat const &,int );
        
        bp::def( 
            "norm"
            , norm_function_type( &::cv::norm )
            , ( bp::arg("a"), bp::arg("normType")=int(::cv::NORM_L2) )
            , "\nCalculates absolute array norm, absolute difference norm, or relative "
    "\ndifference norm."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-norm" );
    
    }

    { //::cv::normalize
    
        typedef void ( *normalize_function_type )( ::cv::SparseMat const &,::cv::SparseMat &,double,int );
        
        bp::def( 
            "normalize"
            , normalize_function_type( &::cv::normalize )
            , ( bp::arg("src"), bp::arg("dst"), bp::arg("alpha"), bp::arg("normType") )
            , "\nNormalizes array's norm or the range."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-normalize" );
    
    }

    { //::cv::normalize
    
        typedef void ( *normalize_function_type )( ::cv::MatND const &,::cv::MatND &,double,double,int,int,::cv::MatND const & );
        
        bp::def( 
            "normalize"
            , normalize_function_type( &::cv::normalize )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("alpha")=1, bp::arg("beta")=0, bp::arg("norm_type")=int(::cv::NORM_L2), bp::arg("rtype")=(int)(-0x000000001), bp::arg("mask")=cv::MatND() )
            , "\nNormalizes array's norm or the range."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-normalize" );
    
    }

    { //::cv::normalize
    
        typedef void ( *normalize_function_type )( ::cv::Mat const &,::cv::Mat &,double,double,int,int,::cv::Mat const & );
        
        bp::def( 
            "normalize"
            , normalize_function_type( &::cv::normalize )
            , ( bp::arg("a"), bp::arg("b"), bp::arg("alpha")=1, bp::arg("beta")=0, bp::arg("norm_type")=int(::cv::NORM_L2), bp::arg("rtype")=(int)(-0x000000001), bp::arg("mask")=cv::Mat() )
            , "\nNormalizes array's norm or the range."
    "\nReference:"
    "\n    http://opencv.willowgarage.com/documentation/cpp/operations_on_arrays.html#cv-normalize" );
    
    }

}