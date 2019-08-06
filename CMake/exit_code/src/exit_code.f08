program exit_code
! gfortran, intel fortran: exit is an extension
! nag fortran:             exit is provided via f90_unix

#ifdef NAGFOR
    use, intrinsic :: f90_unix, only: exit
#endif
    
    implicit none

    integer :: success = 0, failure = 1

       write ( *, * ) 'running exit_code...'

       call exit ( failure )

       stop 'successful completion for exit_code'

end program exit_code

! dantopa@petaca2.lanl.gov:src $ date
! Tue Aug  8 12:24:24 MDT 2017

! dantopa@petaca2.lanl.gov:src $ pwd
! /home/dantopa/Repos/gitlab/CMake/exit_code/src

! dantopa@petaca2.lanl.gov:src $ gf exit_code -cpp
! compilation flags: -g -ffpe-trap=denormal,invalid,zero -fbacktrace -Wall -Wextra -Waliasing -Wsurprising -Wimplicit-procedure -Wintrinsics-std -Og -pedantic -fmax-errors=5 -fcheck=all -fcheck=do -fcheck=pointer -fno-protect-parens -Wfunction-elimination -faggressive-function-elimination -Wc-binding-type -Wrealloc-lhs-all -Wuse-without-only -fdiagnostics-color=auto -Wconversion-extra
! exit_code.f08:11:22:
!
!      integer :: success = 0, failure = 1
!                       1
! Warning: Unused variable ‘success’ declared at (1) [-Wunused-variable]
! dantopa@petaca2.lanl.gov:src $ ./exit_code

