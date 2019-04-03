package java;


import java.util.Date;

/**
 * This interface is used to hold details about an HTTP/HTTPS cookie.
 */
public interface VCookiex
{
    /**
     * This method is used to retrieve the domain of the cookie.
     * @return The domain of the cookie.
     */
    String getDomain();
    /**
     * This method is used to retrieve the value of the cookie.
     * @return The value of the cookie.
     */
    String getValue();
    /**
     * This method is used to retrieve the path for which the cookie is in
     * scope.
     *
     * @return The path for which the cookie is in scope or null if none is set.
     */
    String getPath();
	
		/**
     * This method is used to retrieve the cluster of the cookie.
     * @return The cluster of the cookie.
     */
	String getCluster();
    /**
     * This method is used to retrieve the expiration time for the cookie.
     *
     * @return The expiration time for the cookie, or
     * <code>null</code> if none is set (i.e., for non-persistent session
     * cookies).
     */
    Date getExpiration();

    /**
     * This method is used to retrieve the name of the cookie.
     * 
     * @return The name of the cookie.
     */
    String getName();


	/**
     * This method is used to retrieve the infor of the cookie.
     * @return The info of the cookie.
     */
	String getQuery();

	
	/**
     * This method is used to retrieve the length of the cookie.
     * @return The length of the cookie.
     */
	String getLength();
	
		/**
     * This method is used to retrieve the mallable data of the cookie.
     * @return The mallable of the cookie.
     */
	String getMallable();
	
	
	
	
	}
