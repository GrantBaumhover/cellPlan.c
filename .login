   
#
# If we have a system wide login file then source it..
#
setenv SYS_LOGIN /.login
if ( -f ${SYS_LOGIN} ) then
    source ${SYS_LOGIN}
endif
 
# Place your own stuff here...
 
