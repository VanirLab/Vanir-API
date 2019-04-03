package java;


import java.awt.Component;
import java.io.OutputStream;
import java.util.List;
import java.util.Map;

/**
 * This interface is used by Vanir to pass to extensions a set of callback
 * methods that can be used by extensions to perform various actions within
 * .
 *
 * When an extension is loaded, Vanir invokes its
 * <code>registerExtenderCallbacks()</code> method and passes an instance of the
 * <code>VextenderCallbacks</code> interface. The extension may then invoke
 * the methods of this interface as required in order to extend Vanir's functionality.
 * 
 */
public interface VextenderCallbacks
{

    /**
     * Vanir flags:
     */
    int V_PROXY   = 0x00000001;
	int V_SCANNER = 0x00000002; 
	int V_CLONE   = 0x00000006;
	int V_DNS     = 0x000000010;
	int V_FUZZ    = 0x000000014;
	int V_FUZZ    = 0x000000018;
	int V_INIT    = 0x000000022;
	

    /**
     * This method is used to set the display name for the current extension,
     * which will be displayed within the user interface for the Extender tool.
     *
     * @param name The extension name.
     */
    void setExtensionName(String name);


    VextensionHelpers getHelpers();

   
  
}
