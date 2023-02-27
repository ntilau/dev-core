
#ifndef VTKIMAGINGFOURIER_EXPORT_H
#define VTKIMAGINGFOURIER_EXPORT_H

#ifdef VTKIMAGINGFOURIER_STATIC_DEFINE
#  define VTKIMAGINGFOURIER_EXPORT
#  define VTKIMAGINGFOURIER_NO_EXPORT
#else
#  ifndef VTKIMAGINGFOURIER_EXPORT
#    ifdef ImagingFourier_EXPORTS
        /* We are building this library */
#      define VTKIMAGINGFOURIER_EXPORT 
#    else
        /* We are using this library */
#      define VTKIMAGINGFOURIER_EXPORT 
#    endif
#  endif

#  ifndef VTKIMAGINGFOURIER_NO_EXPORT
#    define VTKIMAGINGFOURIER_NO_EXPORT 
#  endif
#endif

#ifndef VTKIMAGINGFOURIER_DEPRECATED
#  define VTKIMAGINGFOURIER_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef VTKIMAGINGFOURIER_DEPRECATED_EXPORT
#  define VTKIMAGINGFOURIER_DEPRECATED_EXPORT VTKIMAGINGFOURIER_EXPORT VTKIMAGINGFOURIER_DEPRECATED
#endif

#ifndef VTKIMAGINGFOURIER_DEPRECATED_NO_EXPORT
#  define VTKIMAGINGFOURIER_DEPRECATED_NO_EXPORT VTKIMAGINGFOURIER_NO_EXPORT VTKIMAGINGFOURIER_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef VTKIMAGINGFOURIER_NO_DEPRECATED
#    define VTKIMAGINGFOURIER_NO_DEPRECATED
#  endif
#endif

#endif /* VTKIMAGINGFOURIER_EXPORT_H */
