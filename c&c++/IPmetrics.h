#define METRIC_URL = 0;//Used to indicate a parameter within the URL query strin
#define METRIC_HTTPS = 1;// Used to indicate a parameter for the HTTPS
#define METRIC_XML = 2; //Indicates an item of data within an XML structure
#define METRIC_JS = 3; //indicate an item of data within an Javascript structure
#define METRIC_COOKIE = 4; // Indicate an HTTP/HTTPS cookie.
#define METRIC_HANDLER = 5; //Indicate an handler.
#define METRIC_JSON = 6; //Used to indicate an item of data within a JSON structure
#define METRIC_POINTER = 7;// Pointer to an arbitrary data type
#define METRIC_STRUCT = 8; // Structures
#define METRIC_ARRAY = 9;// Arrays, memory buffers
#define METRIC_PROTO = 10;// Protocol buffers  
#define METRIC_DBUFFER = 11;// Dynamic buffers
#define METRIC_MULTI_ATTR = 12; //Used to indicate the value of a parameter attribute within a multi-part
#define METRIC_FLOAT = 13;// Floating-point types
#define METRIC_FD = 14; // File descriptors/handles
#define METRIC_JAVA = 15 // JAVA port
#define METRIC_SHELL =16; //Multi types of shells 



enum class IPType {
METRIC_URL,
METRIC_HTTPS,
METRIC_XML,
METRIC_JS,
METRIC_COOKIE,
METRIC_HANDLER,
METRIC_JSON,
METRIC_POINTER,
METRIC_STRUCT,
METRIC_ARRAY,
METRIC_PROTO,
METRIC_DBUFFER,
METRIC_MULTI_ATTR,
METRIC_FLOAT,
METRIC_FD,
METRIC_JAVA,
METRIC_SHELL
};

   /**
     * This method is used to retrieve the parameter Byte.
     *
     * @return The parameter Byte.
     */

typedef char getBytes [];
   /**
     * This method is used to retrieve the parameter value.
     *
     * @return The parameter value.
     */
typedef int getValues; 
    /**
     * This method is used to retrieve the end offset of the parameter name
     * within the HTTP/HTTPS request.
     *
     * @return The end offset of the parameter name within the HTTP/HTTPS request, or
     * -1 if the parameter is not associated with a specific request.
     */
typedef int getNameEnd();

    /**
     * This method is used to retrieve the start offset of the parameter value
     * within the HTTP/HTTPS request.
     *
     * @return The start offset of the parameter value within the HTTP/HTTPS request,
     * or -1 if the parameter is not associated with a specific request.
     */
typedef int getValueStart();

    /**
     * This method is used to retrieve the end offset of the parameter value
     * within the HTTP/HTTPS request.
     *
     * @return The end offset of the parameter value within the HTTP/HTTPS request, or
     * -1 if the parameter is not associated with a specific request.
     */
typedef int getValueEnd();
   /**
     * This method is used to retrieve the parameter type.
     *
     * @return The parameter type. The available types are defined within this
     * interface.
     */
typedef  byte getType();

    /**
     * This method is used to retrieve the parameter name.
     *
     * @return The parameter name.
     */
typedef  String getName();




#endif;