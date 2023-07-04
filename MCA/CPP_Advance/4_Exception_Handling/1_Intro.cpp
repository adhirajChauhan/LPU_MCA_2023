/*
Exceptions - run time anomalies/unusual condition that a program may encounter during execution.

ex - division by zero, accessing array outside of its bounds, running out of memory. running out of disk space

types- 
Synchronous execption - exception occurs during program execution due to some fault in input data
Asynchronous execption - exceptions caused by events or faults unrelated to program (key board filure, disk corrupt)

The goal of exception handling is to create a routine that detects and send an execptional condition in order to execute suitable action.

1. Detect the problem (Hit the exception).
2. Inform that error has been detected (Throw the exeption)
3. Receive error information (Catch the exception)
4. Take corrective action (Handle the exception)

------------------------------------------------------------------------
    - try
    try is used to preface a block of statements which may generate exceptions.

    try{
        statement1;
        statement2;
    }
------------------------------------------------------------------------

    - catch
    it catches the exception and handles it.
------------------------------------------------------------------------

    - throw

    when exception is detected, it is thrown using "throw" statement in the try block
------------------------------------------------------------------------



*/