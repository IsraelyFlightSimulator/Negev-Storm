#pragma once
// לטפל בכל המקומות בהן מופיע HACK.



// תוספות חובה.
#include "resource.h" // for IDI_NEGEVSTORM.
// סוף תוספות חובה.



// הגדרות קדם מעבד.
#define NEGEVSTORM 1 // אנחנו בתצורה של הסימולטור שלנו או פריפלקון.

// HACK האם צריך ?
#define MAX_LOADSTRING 100 
#define OPENEYES
#define AirBaseRelocTeamOnly 1
#define AirBaseRelocNoFar 2

// HACK
#undef fopen
#undef fclose
// סוף הגדרות קדם מעבד.



// הגדרות שמות מתחם.
using std::string;
using std::wstring;
using std::basic_string;
using std::to_wstring;

using std::wifstream;
using std::wofstream;
using std::wios;
using std::locale;
using std::endl;
using std::codecvt_utf8;

using std::stack;
// סוף הגדרת שמות מתחם.



// הגדרת קבועים.
const signed short MY_INVALID_SIGNED_INT = { -1 }; // סידור ביטים שלא אמור לקרות.
const unsigned short MY_INVALID_UNSIGNED_INT = { 0U };
const double MY_INVALID_DOUBLE = { -22222.2 }; 
const wchar_t MY_INVALID_WCHAR_T = { L'?' };
const string MY_INVALID_STRING = { "שגיאה" };
const wstring MY_INVALID_WSTRING = { L"שגיאה" };
const LPCWSTR MY_INVALID_LPCWSTR = { L"שגיאה" };

const wstring MY_PROJECTS_NAME = { L"סערה בנגב" };
const LPCWSTR MY_PROJECTS_NAME_LPCWSTR = { L"סערה בנגב" };
const wstring MY_PROJECTS_DEVELOPERS_EMAIL = { L"israelyflightsimulator@gmail.com" };

const DWORD MY_MAXIMUM_SYSTEM_DWORD_ERROR_CODE = { 15999U }; // http://msdn.microsoft.com/en-us/library/ms681381(v=vs.85).aspx
const errno_t MY_MAXIMUM_ERRNO_T_CODE = { 80 }; // http://msdn.microsoft.com/en-us/library/t3ayayh1(v=vs.140).aspx
const signed int MY_MAXIMUM_YEAR = { 2050 }; // בתקווה שהסימולטור ישרוד עד אז...
const signed int MY_MAXIMUM_CONFIG_FILE_LINES = { 600 }; // HACK לחשב מחדש.
const UINT MY_MAXIMUM_MESSAGE_BOX_UINT = { 0x00300000U };
const signed int MY_MAXIMUM_WIOS_ENUM = { wios::app bitor
                                          wios::ate bitor
                                          wios::binary bitor
                                          wios::trunc bitor
                                          wios::in bitor
                                          wios::out };
const signed int MY_MAXIMUM_DEBUG_ENUM = { _CRTDBG_ALLOC_MEM_DF bitor
                                           _CRTDBG_CHECK_ALWAYS_DF bitor
                                           _CRTDBG_CHECK_CRT_DF bitor
                                           _CRTDBG_DELAY_FREE_MEM_DF bitor
                                           _CRTDBG_LEAK_CHECK_DF };

const wstring MY_LOG_FILE_EXTENSION = { L".txt" };
const wstring MY_LOG_FILE_FOLDER = { L"USER\\LOGS\\" };
const wstring MY_LOG_FILE_HEADER = { L"קובץ רישום " +
                                     MY_PROJECTS_NAME +
                                     L"\n" };
const wstring MY_CONFIG_FILE_NAME = { L"\\USER\\CONFIG\\" +
                                      MY_PROJECTS_NAME +
                                      L".cfg" };

const wstring MY_DATA_DIRECTORY = { L"C:\\FreeFalcon6" };
const wstring MY_TERRAIN_DIRECTORY = { L"\\TERRDATA\\KOREA" };
const wstring MY_OBJECT_DIRECTORY = { L"\\TERRDATA\\OBJECTS" };
const wstring MY_MISC_TEXTURES_DIRECTORY = { L"\\TERRDATA\\MISCTEX" };
const wstring MY_SOUNDS_DIRECTORY = { L"\\SOUNDS" };

const double MY_NM_TO_FEET = { 6076.1155 };
const LPCWSTR MY_INTERNAL_ERROR_MESSAGE_LPCWSTR = { L"שגיאה פנימית במנגנון דיווח השגיאות: " };
const signed int MY_MSVS_VERSION = { 1800 }; 
const signed int MY_NOֹ_ERRORֹ_CODE = { 0 };
const UINT MY_MESSAGE_BOX_UINT = { MB_OK bitor
                                   MB_ICONERROR bitor
                                   MB_TASKMODAL bitor
                                   MB_RTLREADING bitor
                                   MB_RIGHT bitor
                                   MB_SETFOREGROUND bitor
                                   MB_TOPMOST };


// מצב נעילת המבט.
enum MY_PADLOCK_MODE: signed int // לא יכול להיות class.
{
    // HACK לשנות שמות עם קווים תחתיים.
    PLockModeNormal = 0,

    PLockModeNearLabelColor = 1,

    PLockModeNoSnap = 2,

    PLockModeBreakLock = 4,

    PLockNoTrees = 8
};
// סוף הגדרת קבועים.



// הכרזת אובייקטים.
// תבנית לבדיקת תקינות גדלי הסוגים.
template < typename my_type,
           const signed int my_size >
class My_check_type_size
{
    public:

        // בנאי
        My_check_type_size(void)
        {
            static_assert( sizeof(my_type) == my_size,
                           "ERROR: wrong type size" );
        }
};


// בודק עמידה בתנאי סף.
class My_system_requirements
{
    public:

        My_system_requirements( void );


    private:

        void my_check_architecture( void );

        void my_check_compiler_version( void );

        void my_check_POD_sizes( void );
}; 


// מבצע איתחולים גלובליים.
class My_initializer
{
    public:

    My_initializer(void);
};


// השתמש בתבנית זו כדי לבדוק כל משתנה כדי לגלות אם הוא חורג מתחום הערכים שאופייני לו.
// בודק אם המשתנה הוא בטווח בין שני פרמטרים.
// אם לא, מציג הודעת שגיאה.
template < typename my_type,
           const my_type my_input_minimum,
           const my_type my_input_maximum >

class My_sub_range

// מונע את הופעת הודעת האזהרה:
// not all control paths return a value.
#pragma warning( disable:4715 )

{

#pragma warning( default:4715 )

    public:

        // בנאי
        My_sub_range( void )
        {
            // בדיקת שפיות לפרמטרים.
            static_assert( my_input_minimum <= my_input_maximum,
                           "ERROR: the first number needs to be less or equal to the second number." );

            my_output_value = { MY_INVALID_UNSIGNED_INT }; // אתחול משתנה המוצא.
        }


        operator const my_type( void )
        {
            return my_output_value;
        }
        

        // העמסת אופרטור השיוויון כדי שכל הצבה תיבדק.
        // בדיקת ערך הכניסה אם הוא בין הגבולות.
        My_sub_range& operator=( const my_type my_input_value )
        {
            if( my_input_value >= my_input_minimum and
                my_input_value <= my_input_maximum )
            {
                my_output_value = { my_input_value };

                return *this;
            }
            else
            {
                // נחוץ כדי שהמחסנית תקבל ערך ללא המרה למטה.
                signed int my_temp_int = { MY_INVALID_SIGNED_INT };
                my_temp_int = { static_cast< signed int >( my_input_value ) };

                // דחיפת פרמטרי השגיאה הנוכחית למחסנית השגיאות.
                my_error.my_parameters_stack.push( { L"המשתנה מחוץ לטווח",
                                                     my_temp_int } );

                // טיפול בשגיאה עם אפשרות הצגתה למשתמש ורישום בקובץ לוג.
                my_error.my_report_error(my_error.MY_DISPLAY_ERROR::MY_DO_DISPLAY_ERROR,
                                         my_error.MY_LOG_ERROR::MY_DO_LOG_ERROR );
            }
        }


        // העמסת כל האופרטורים החשבוניים כדי לתפוס כל מקרה של שינוי בערך המשתנה.
        My_sub_range& operator+=( const my_type my_input_value )
        {
            // ביצוע הפעולה החשבונית ע"י אופרטור ההשוואה כדי להכריח ביצוע של הבדיקה.
            *this = { *this + my_input_value };

            return *this;
        }


        My_sub_range& operator-=( const my_type my_input_value )
        {
            *this = { *this - my_input_value };

            return *this;
        }


        My_sub_range& operator*=( const my_type my_input_value )
        {
            *this = { *this * my_input_value };

            return *this;
        }


        My_sub_range& operator/=( const my_type my_input_value )
        {
            *this = { *this / my_input_value };

            return *this;
        }


        My_sub_range operator++( void )
        {
            *this = { *this + 1 };

            return *this;
        }


        My_sub_range operator++( signed int )
        {
            *this = { *this + 1 };

            return *this;
        }


        My_sub_range operator--( void )
        {
            *this = { *this - 1 };

            return *this;
        }


        My_sub_range operator--( signed int )
        {
            *this = { *this - 1 };

            return *this;
        }


    private:

        my_type my_output_value; // ערך המוצא הוא מאותו סוג של ערך הכניסה.
};


// מתעד טקסט לקובץ.
class My_logger
{
    public:

        My_logger( void ); // בנאי

        void my_update( const wstring& my_error_wstring );


    private:

        void my_initialize( void );
    
        const bool my_is_initialized( void );
    
        void my_create_log_file_name( void );
    
        void my_create_time_struct( struct tm& my_current_time );
    
        void my_add_month( signed int& my_date_time_digits,
                           const tm my_current_time );
                               
        void my_add_year( signed int& my_date_time_digits,
                          const tm my_current_time );

        void my_add_hour( signed int& my_date_time_digits,
                          const tm my_current_time );
        
        void my_add_minutes( signed int& my_date_time_digits,
                             const tm my_current_time );

        void my_add_seconds( signed int& my_date_time_digits,
                             const tm my_current_time );
                                 
        void my_add_dash( wstring& my_input_wstring );
    
        void my_write_to_log_file( void );
    
        void my_open( const signed int my_mode );
    
        const wstring my_check_flags( void );
    
        void my_write( const wstring& my_error_wstring );
    
        void my_close( void );
    
        void my_add_leading_zero( const signed int my_date_time_digits );
    

        wofstream my_log_file;

        wstring my_log_file_name;

        bool my_is_log_file_initialized;
};


// מנהל את השגיאות.
class My_error
{
    public:

        My_error( void ); // בנאי.

        enum class MY_DISPLAY_ERROR: bool
        {
            MY_DO_DISPLAY_ERROR = true,

            MY_DO_NOT_DISPLAY_ERROR = false
        };

        enum class MY_LOG_ERROR: bool
        {
            MY_DO_LOG_ERROR = true,

            MY_DO_NOT_LOG_ERROR = false
        };


        void my_add_space( wstring& my_input_wstring );

        void my_report_error( MY_DISPLAY_ERROR my_display_error = { MY_DISPLAY_ERROR::MY_DO_DISPLAY_ERROR },
                              MY_LOG_ERROR my_log_error = { MY_LOG_ERROR::MY_DO_LOG_ERROR });


        // מיקום השגיאה.
        struct MY_ERROR_LOCATION
        {
            string my_source_code_file_name;

            string my_function_signature;

            signed int my_source_code_line_number;

            wstring my_reason;
        };

        // פרמטרי השגיאה.
        struct MY_ERROR_PARAMETERS
        {
            wstring my_error_message;

            signed int my_error_code;
        };

        // מחסניות לכל פרמטרי השגיאה.
        // http://msdn.microsoft.com/query/dev14.query?appId=Dev14IDEF1&l=EN-US&k=k(stack%2Fstd%3A%3Astack);k(std%3A%3Astack);k(stack);k(DevLang-C%2B%2B);k(TargetOS-Windows)&rd=true
        stack < MY_ERROR_LOCATION > my_error_stack;

        stack < MY_ERROR_PARAMETERS > my_parameters_stack;

        HANDLE my_handle_code;

        signed int my_internal_error_counter;


    private:

        void my_check_for_another_instance( void );

        void my_check_for_memory_leaks( void );

        const wstring my_string_to_wstring( const string& my_input_string );

        void my_add_line( wstring& my_input_wstring );

        void my_close_application( void );

        void my_add_contact_information( void );

        void my_catastrophic_error( void );

        void my_display_error_message( void );

        void my_error_is_ready_for_display( void );


        bool my_internal_error;

        wstring my_final_error_wstring;
};


// מנהל את המעבד המתמטי.
class My_coprocessor
{
    public:

        My_coprocessor( void ); // בנאי.


    private:

        void my_chop( void );

        void my_accuracy( void );
};


// מנהל קובץ תצורה.
class My_configuration_file
{
    public:

        My_configuration_file( void ); // בנאי

        void my_read( void );


    private:

        void my_open( void );

        const wstring my_check_flags( void );

        void my_parse( void );

        void my_check_reading_was_OK( void );

        const bool my_is_comment_line( const wstring& my_line );

        const bool my_switch( const wchar_t my_first_wchar,
                              const wstring my_command,
                              const wstring my_value );
        
        const bool my_set_wstring_options( const wstring& my_command,
                                           const wstring& my_value );
        
        const bool my_set_bool_options( const wstring& my_command,
                                        const wstring& my_value );

        const bool my_set_double_options( const wstring& my_command,
                                          const wstring& my_value );

        const bool my_set_int_options( const wstring& my_command,
                                       const wstring& my_value );

        void my_exit_with_error( const signed int my_line_number );

        void my_error_reading_config( const signed int my_line_number );

        void my_close( void );


        wifstream my_config_file;
};


// כל אופציות הסימולטור לפי סוג.
template < typename my_type >
class My_config_option
{
    public:

        wstring my_parameter_name;

        my_type* my_parameter_value;
};
// סוף הכרזת אובייקטים.



// הכרזות חיצוניות.
extern void my_initialize_everything( void );
// HACK האם צריך ?
//extern signed int wait_for_loaded;
//extern signed int auto_start;
//extern signed int intro_movie;
//extern signed int eye_fly;
//extern signed int repair_objective;

//extern char FalconUIArtDirectory[_MAX_PATH];
//extern char FalconUIArtThrDirectory[_MAX_PATH];
//extern char FalconUISoundDirectory[_MAX_PATH];
//extern char FalconSoundThrDirectory[_MAX_PATH];
//extern char FalconDataDirectory[_MAX_PATH];
//extern char FalconTerrainDataDir[_MAX_PATH];
//extern char FalconObjectDataDir[_MAX_PATH];
//extern char Falcon3DDataDir[_MAX_PATH];
//extern char FalconPictureDirectory[_MAX_PATH];
//extern char FalconMiscTexDataDir[_MAX_PATH];
//extern char FalconCampaignSaveDirectory[_MAX_PATH];
//extern char FalconCampUserSaveDirectory[_MAX_PATH];
//extern char FalconCockpitThrDirectory[_MAX_PATH];
//extern char FalconZipsThrDirectory[_MAX_PATH];
//extern char FalconTacrefThrDirectory[_MAX_PATH];
//extern char FalconSplashThrDirectory[_MAX_PATH];

ATOM register_class( HINSTANCE instance );
BOOL initialize_instance( HINSTANCE,
                          signed int );
LRESULT CALLBACK window_process( HWND,
                                 UINT,
                                 WPARAM,
                                 LPARAM );
// סוף הכרזות חיצוניות.