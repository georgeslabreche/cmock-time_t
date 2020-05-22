# cmock-time_t
Replicating a cmock issue with projects that have time_t typed variables. Issue was raised [here](http://www.throwtheswitch.org/forums?place=msg%2Fthrowtheswitch%2FMEyopYARV98%2FV1EJAoeEAwAJ).

## Steps
1. Clone the project and run the ceedling command.
2. Build succeeds and tests are executed as expected.
3. Modify the project.xml to include inline function mocks.
4. Run the ceedling command.
5. Build fails with the following error message:  **error: unknown type name 'time_t'; did you mean 'size_t'**

Note that the build will still fail after switching back to excluding the in line functions unless the build folder is completely deleted before running ceedling again.
