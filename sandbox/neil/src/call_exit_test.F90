program call_exit_test
! gfortran, intel fortran: exit is an extension
! nag fortran:             exit is provided via f90_unix

#ifdef NAGFOR
    use, intrinsic :: f90_unix, only: exit
#endif

    implicit none

    integer :: success = 0, failure = 1

       write ( *, * ) 'running call_exit_test...'

       call exit ( failure )

       stop 'error: program call_exit_test should NOT reach this point'

end program call_exit_test
