        #   R u n A s . p l
        #   ---------------
        #   This script demonstrates the ability to impersonate another user
        #   and execute a program under the impersonated account.
        #   Syntax:
        #       perl runas.pl user password program
        #       -----------------------------------
        #           user........The target user account. This can be in the
        #                       following formats:
        #                           user
        #                           domain\user
        #                           \\server\user
        #           password....The password for the specified user account.
        #           program.....The command line to run.
        #   Example:
        #       perl runas.pl mydomain\myuser mypassword "cmd /k dir c:\"
        #
        #       (c) 1997 by Dave Roth <rothd@roth.net>
        #           Courtesy of Roth Consulting
        #           http://www.roth.net/consult
        #
        #           Last modified: 970827

    use Win32::AdminMisc;


    if (! scalar @ARGV){
        Syntax();
        exit;
    }

    ($Domain) = ($ARGV[0] =~ /(.*?)\\.*?$/);
    ($User) = ($ARGV[0] =~ /([^\\]*?)$/);
    $Password = $ARGV[1];
    $Process = $ARGV[2];

    if (! $ARGV[1]){
        print "Enter Password:";
        $Password = <STDIN>;
        chop $Password;
    }



	
    print "\nStarting \"$Process\" as $User in the \U\"$Domain\"\E domain...\n\n";



    if (Win32::AdminMisc::LogonAsUser($Domain, $User, $Password, LOGON32_LOGON_INTERACTIVE)){
        $LogonUser = Win32::AdminMisc::GetLogonName();
        print "Successfully logged on as $LogonUser.\n";
        print "\nLaunching $Program...\n";

        $Result = Win32::AdminMisc::CreateProcessAsUser(
                                    $Process,
                                    "Flags", CREATE_NEW_CONSOLE,
                                    "XSize", 640,
                                    "YSize", 400,
                                    "X", 200,
                                    "Y", 175,
                                    "XBuffer", 80,
                                    "YBuffer", 175,
#                                    "Show", SW_MINIMIZE,
                                    "Title", "Title: $User" . "'s $Process program",
                                    "Fill", BACKGROUND_BLUE |
                                            FOREGROUND_RED |
                                            FOREGROUND_BLUE |
                                            FOREGROUND_INTENSITY |
                                            FOREGROUND_GREEN,
                                    );
        if ($Result){
            print "Successfull! The new processes PID is $Result.\n";
        }else{
            print "Failed.\n\tError: ", Error(), "\n";
        }
    }else{
        print "Failed to logon.\n\tError: ", Error(), "\n";
    }


sub Error{
    return Win32::FormatMessage(Win32::GetLastError());
}

sub Syntax{

    my($Line) = "-" x length($0);

    print <<END;

    $0
    $Line

    Syntax:
        perl $0 <user> <password> <program>
        ---------------------------------$Line
            user........The target user account. This can be in the
                        following formats:
                            user
                            domain\\user
                            \\\\server\\user
            password....The password for the specified user account.
            program.....The command line to run.
    Example:
        perl runas.pl mydomain\\myuser mypassword "cmd /k dir c:\"


    NOTE:
    This will work only if:
        - The user to be logged on has the User Right to interactively.
        - The user calling this script has the following User Rights:
            1) The act as part of the OS privilege (SE_TCB_NAME)
            2) The assign primary token privilege (SE_ASSIGNPRIMARYTOKEN_NAME)
            3) The increase quotas privilege (SE_INCREASE_QUOTA_NAME)
            ** These can be set by an admin in the User Manager.



        (c) 1997 by Dave Roth <rothd\@roth.net>
            Courtesy of Roth Consulting
            http://www.roth.net/consult

            Last modified: 970903
END

}
